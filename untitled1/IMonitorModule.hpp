#ifndef IMONITORMODULE_HPP
#define IMONITORMODULE_HPP

#include <string>
#include <vector>
#include <sstream>

#include <sys/types.h>
#include <sys/sysctl.h>
#include <stdio.h>

//#include <mach/mach.h>
//#include <mach/mach_init.h>
//#include <mach/mach_error.h>
//#include <mach/mach_host.h>
//#include <mach/vm_map.h>
//#include <mach/vm_statistics.h>
//#include <mach/mach_types.h>
#include <net/if.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <sys/socket.h>
#include "net/if.h"
#include <sys/sysctl.h>
#include <ifaddrs.h>
//#include <net/if_dl.h>
#include <math.h>

#include <sys/ioctl.h>
#include <unistd.h>
#include <limits.h>

class IMonitorModule
{
public:
	virtual std::vector<std::string>	getInfo() const = 0;
	virtual void						refresh() = 0;
};

#endif
