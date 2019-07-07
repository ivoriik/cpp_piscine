#ifndef NCURSES_MODE_HPP
#define NCURSES_MODE_HPP

#include "IMonitorDisplay.hpp"
#include <ncurses.h>

enum t_color {
	COLOR_0 = 0,
	COLOR_1,
	COLOR_2,
	COLOR_3,
	COLOR_4
};

class NcursesMode : public IMonitorDisplay
{
private:
	CpuModule					cpu_;
	DateModule					date_;
	HostModule					host_;
	NetModule					net_;
	RamModule					ram_;
	OsModule					os_;
//	DiskModule					disk_;
//	ProcessModule				process_;

	int							wHei_;
	int							wWid_;
	int 						title_;

public:
	NcursesMode();
	NcursesMode(NcursesMode const &oth);
	~NcursesMode();
	NcursesMode& operator=(NcursesMode const &oth);

	void start();

	void printFrame();
	void printData();
	void printList();
	char *trm(char* trm);

	virtual void displayDate(void);
	virtual void displayCpu(void);
	virtual void displayHost(void);
	virtual void displayRam(void);
	virtual void displayNet(void);
	virtual void displayOs(void);
	virtual void displayDisk(void);
	virtual void displayProcess(void);
};

#endif
