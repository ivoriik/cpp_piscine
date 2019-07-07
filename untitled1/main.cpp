#include <iostream>
#include <string>

#define USAGE "usage ./ft_gkrellm [text|graphical]"

int main(int argc, char **argv) {
	IMonitorDisplay *disp;
	if (argc <= 1) {
		std::cout << USAGE << std::endl;
		return (0);
	}
	std::string flag(argv[1]);
	if (flag == "text")
		disp = new NcursesMode;
	else if (flag == "graphical")
		disp = new SdlMode;
	else {
		std::cout << USAGE << std::endl;
		return (0);
	}
	disp->start();
	return 0;
}