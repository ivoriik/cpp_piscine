#ifndef IMONITORDISPLAY_HPP
#define IMONITORDISPLAY_HPP

#include "DateModule.hpp"
#include "CpuModule.hpp"
#include "HostModule.hpp"
#include "RamModule.hpp"
#include "NetModule.hpp"
#include "OsModule.hpp"

#include "DiskModule.hpp"
#include "ProcessModule.hpp"

class IMonitorDisplay
{
public:
	virtual void start() = 0;
	virtual void displayDate() = 0;
	virtual void displayCpu() = 0;
	virtual void displayHost() = 0;
	virtual void displayRam() = 0;
	virtual void displayNet() = 0;
	virtual void displayOs() = 0;
	virtual void displayDisk() = 0;
	virtual void displayProcess() = 0;
};

#endif
