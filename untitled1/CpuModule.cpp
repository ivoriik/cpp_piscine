#include "CpuModule.hpp"

CpuModule::CpuModule() {
	int			mib[2];
	char		str[512];
	size_t		len;
	int			ncpu;

	mib[0] = CTL_HW;
	mib[1] = HW_MODEL;
	len = sizeof(str);
	sysctl(mib, 2, str, &len, NULL, 0);
//	sysctlbyname("machdep.cpu.brand_string", str, &len, NULL, 0);
//	sysctlbyname("hw.model", str, &len, NULL, 0); // Intel(R) Xeon(R) CPU           E31225  @ 3.10GHz
//	sysctlbyname("hw.machine", str, &len, NULL, 0); //amd64
	this->name_ = "Model: " + std::string(str);
	mib[1] = HW_MACHINE;
	len = sizeof(str);
	sysctl(mib, 2, str, &len, NULL, 0);
	this->name_ += ", " + std::string(str);
	mib[1] = HW_NCPU;
	len = sizeof(int);
	sysctl(mib, 2, &ncpu, &len, NULL, 0);
//	sysctlbyname("hw.ncpu", &ncpu, &len, NULL, 0);
	std::stringstream ss;
	ss << "Cores: " << std::to_string(ncpu);
//	len = sizeof(long);
//	sysctlbyname("hw.busfrequency", &(this->busFreq_), &len, NULL, 0);
//	len = sizeof(long);
//	sysctlbyname("hw.cpufrequency", &(this->cpuFreq_), &len, NULL, 0);
	this->refresh();
}

CpuModule::~CpuModule() {}

CpuModule::CpuModule(CpuModule const &oth) {
	std::vector<std::string> info(oth.getInfo());
	this->name_ = info.at(0);
	this->cores_ = info.at(1);
	this->usage_ = info.at(1);
}

CpuModule &CpuModule::operator=(CpuModule const &oth)
{
	if (this != &oth) {
		std::vector<std::string> info(oth.getInfo());
		this->name_ = info.at(0);
		this->cores_ = info.at(1);
		this->usage_ = info.at(2);
	}
	return (*this);

void CpuModule::refresh()
{
	char		str[512];

	FILE*    f;
	f = popen("top -l 1 | head -n 10 | grep CPU", "r");
	while (fgets(str, sizeof(str), f) != NULL)
			ss << str;
	pclose(f);
	this->usage_ = ss.str();
}

std::vector<std::string> CpuModule::getInfo() const
{
	std::vector<std::string> info;
	info.push_back(name_);
	info.push_back(cores_);
	info.push_back(usage_);
	return info;
}
