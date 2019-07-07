#ifndef UNTITLED1_SDLMODE_HPP
#define UNTITLED1_SDLMODE_HPP

#define WID 	480
#define HEI 	240
#define FONT	"media/fonts/suissnord/suissnord.otf"

#define FONTS_FOLDER "resources/fonts/"

#include <signal.h>
#include <SDL2/SDL.h>
//#include "SDL_image.h"
//#include "SDL_mixer.h"
//#include "SDL_ttf.h"
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>

#include "IMonitorDisplay.hpp"

class SdlMode : public IMonitorDisplay
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

	SDL_Window					*wCpuModule;
	SDL_Window					*wDateModule;
	SDL_Window					*wHostModule;
	SDL_Window					*wNetModule;
	SDL_Window					*wOsModule;
	SDL_Window					*wRamModule;
	SDL_Window					*wDiskModule;
	SDL_Window					*wProcessModule;

	SDL_Surface					*sCpuModule;
	SDL_Surface					*sDateModule;
	SDL_Surface					*sHostModule;
	SDL_Surface					*sNetModule;
	SDL_Surface					*sOsModule;
	SDL_Surface					*sRamModule;
	SDL_Surface					*sDiskModule;
	SDL_Surface					*sProcessModule;

	SDL_Rect					texture_rect;
	SDL_Surface					*textures_[4];

	std::vector<SDL_Surface *>	tCpuModule;
	std::vector<SDL_Surface *>	tDateModule;
	std::vector<SDL_Surface *>	tHostModule;
	std::vector<SDL_Surface *>	tNetModule;
	std::vector<SDL_Surface *>	tOsModule;
	std::vector<SDL_Surface *>	tRamModule;
	std::vector<SDL_Surface *>	tProcessModule;
	std::vector<SDL_Surface *>	tDiskModule;

	TTF_Font					*font_;

public:
	SdlMode();
	SdlMode(SdlMode const &cpy);
	~SdlMode();
	SdlMode	&operator=(SdlMode const &cpy);

	void	start(void);

	virtual void displayDate();
	virtual void displayCpu();
	virtual void displayHost();
	virtual void displayRam();
	virtual void displayNet();
	virtual void displayOs();

	virtual void displayDisk();
	virtual void displayProcess();

};

#endif
