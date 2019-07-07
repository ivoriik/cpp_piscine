#include <iostream>
#include "SdlMode.hpp"

#define TEXNB	4

static char const *TexPath[] = {
		"media/surf/monitor0.jpg",
		"media/surf/monitor1.jpg",
		"media/surf/monitor6.jpg",
		"media/surf/monitor7.jpg",
		};

SdlMode::SdlMode()
{
	if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS) < 0) {
		std::cout << SDL_GetError() << std::endl;
		exit(-1);
	}
	if (IMG_Init(IMG_INIT_JPG) < 0) {
		std::cout << (IMG_GetError()) << std::endl;
		exit (-1);
	}
	if (TTF_Init() < 0) {
		std::cout << (TTF_GetError()) << std::endl;
		exit (-1);
	}
	this->wCpuModule		= SDL_CreateWindow("CPU Module", 0, 0, WID, HEI, SDL_WINDOW_SHOWN);
	this->wDateModule		= SDL_CreateWindow("Date Module", 0, HEI, WID, HEI, SDL_WINDOW_SHOWN);
	this->wHostModule		= SDL_CreateWindow("Host Module", 0, HEI * 2, WID, HEI, SDL_WINDOW_SHOWN);
	this->wNetModule		= SDL_CreateWindow("Network Module", 0, HEI * 3, WID, HEI, SDL_WINDOW_SHOWN);
	this->wOsModule			= SDL_CreateWindow("OS Module", 0, HEI * 4, WID, HEI, SDL_WINDOW_SHOWN);
	this->wRamModule		= SDL_CreateWindow("RAM Module", 0, HEI * 5, WID, HEI, SDL_WINDOW_SHOWN);
	this->wDiskModule		= SDL_CreateWindow("Disk Module", 0, HEI * 6, WID, HEI, SDL_WINDOW_SHOWN);
	this->wProcessModule	= SDL_CreateWindow("Process Module", 0, HEI * 7, WID, HEI, SDL_WINDOW_SHOWN);

	if (!this->wCpuModule || !this->wDateModule || !this->wHostModule ||
		!this->wNetModule || !this->wOsModule || !this->wRamModule ||
		!this->wDiskModule || !this->wProcessModule) 	{
		std::cout << SDL_GetError() << std::endl;
		exit(1);
	}
	this->sCpuModule = SDL_GetWindowSurface(this->wCpuModule);
	this->sDateModule = SDL_GetWindowSurface(this->wDateModule);
	this->sHostModule = SDL_GetWindowSurface(this->wHostModule);
	this->sNetModule = SDL_GetWindowSurface(this->wNetModule);
	this->sOsModule = SDL_GetWindowSurface(this->wOsModule);
	this->sRamModule = SDL_GetWindowSurface(this->wRamModule);
	this->sDiskModule = SDL_GetWindowSurface(this->wDiskModule);
	this->sProcessModule = SDL_GetWindowSurface(this->wProcessModule);

	this->texture_rect.x = 0;
	this->texture_rect.y = 0;
	this->texture_rect.w = WID;
	this->texture_rect.h = HEI;

	for (int i = 0; i < TEXNB; ++i) {
		if (!(this->textures_[0] = IMG_Load(TexPath[i]))) {
			std::cout << IMG_GetError() << std::endl;
			exit(-1);
		}
	}

	this->date_ = DateModule();
	this->cpu_ = CpuModule();
	this->host_ = HostModule();
	this->net_ = NetModule();
	this->ram_ = RamModule();
	this->os_ = OsModule();
//	this->disk_ = DiskModule();
//	this->process_ = ProcessModule();

	if (!(font_ = TTF_OpenFont(FONT, 40))) {
		std::cout << TTF_GetError() << std::endl;
		exit (-1);
	}
}

SdlMode::~SdlMode() {
	SDL_DestroyWindow(this->wCpuModule);
	SDL_DestroyWindow(this->wDateModule);
	SDL_DestroyWindow(this->wHostModule);
	SDL_DestroyWindow(this->wNetModule);
	SDL_DestroyWindow(this->wOsModule);
	SDL_DestroyWindow(this->wRamModule);
	SDL_DestroyWindow(this->wDiskModule);
	SDL_DestroyWindow(this->wProcessModule);
	SDL_FreeSurface(this->sCpuModule);
	SDL_FreeSurface(this->sDateModule);
	SDL_FreeSurface(this->sHostModule);
	SDL_FreeSurface(this->sNetModule);
	SDL_FreeSurface(this->sOsModule);
	SDL_FreeSurface(this->sRamModule);
	SDL_FreeSurface(this->sDiskModule);
	SDL_FreeSurface(this->sProcessModule);
	std::vector<SDL_Surface *>::iterator it;
	for (it = tCpuModule.begin(); it != tCpuModule.end(); ++it) {
		SDL_FreeSurface(*it);
	}
	for (it = tDateModule.begin(); it != tDateModule.end(); ++it) {
		SDL_FreeSurface(*it);
	}
	for (it = tHostModule.begin(); it != tHostModule.end(); ++it) {
		SDL_FreeSurface(*it);
	}
	for (it = tNetModule.begin(); it != tNetModule.end(); ++it) {
		SDL_FreeSurface(*it);
	}
	for (it = tOsModule.begin(); it != tOsModule.end(); ++it) {
		SDL_FreeSurface(*it);
	}
	for (it = tRamModule.begin(); it != tRamModule.end(); ++it) {
		SDL_FreeSurface(*it);
	}
	for (it = tDiskModule.begin(); it != tDiskModule.end(); ++it) {
		SDL_FreeSurface(*it);
	}
	for (it = tProcessModule.begin(); it != tProcessModule.end(); ++it) {
		SDL_FreeSurface(*it);
	}
	TTF_CloseFont(this->font_);
	SDL_Quit();
}

void		SdlMode::displayCpu()
{
	SDL_BlitScaled(textures_[1], NULL, sCpuModule, &texture_rect);
	cpu_.refresh();
	std::vector<std::string> info = cpu_.getInfo();
	SDL_Rect rect[4] = {{10, 10, 0, 0},
						{10, 50, 0, 0},
						{10, 100, 0, 0},
						{10, 150, 0, 0}};
	std::vector<SDL_Surface *>::iterator	it;
	size_t									i;
	for (it = tCpuModule.begin(), i = 0; it != tCpuModule.end(); ++it, ++i) {
		*it = TTF_RenderText_Solid(font_, info.at(i).c_str(), (SDL_Color){255, 0, 0, 255});
		SDL_BlitSurface(*it, NULL, sCpuModule, &rect[i]);
		SDL_FreeSurface(*it);
	}
}


void		SdlMode::displayDate()
{
	std::vector<std::string> info = date_.getInfo();
	date_.refresh();
	tDateModule.push_back(TTF_RenderText_Solid(font_, info.at(0).c_str(), (SDL_Color){255, 0, 0, 255}));
	tDateModule.push_back(TTF_RenderText_Solid(font_, info.at(1).c_str(), (SDL_Color){255, 0, 0, 255}));
	SDL_Rect date_rect = {10, 10, 0, 0};
	SDL_Rect time_rect = {10, 50, 0, 0};
	SDL_Rect text_rect = {0, 0, WID, HEI};
	SDL_BlitScaled(textures_[0], NULL, sDateModule, &text_rect);
	SDL_BlitSurface(tDateModule.at(0), NULL, sDateModule, &date_rect);
	SDL_BlitSurface(tDateModule.at(1), NULL, sDateModule, &time_rect);
	SDL_FreeSurface(tDateModule.at(0));
	SDL_FreeSurface(tDateModule.at(1));
}

void		SdlMode::displayRam() {
	SDL_BlitScaled(textures_[1], NULL, sRamModule, &texture_rect);
	ram_.refresh();
	std::vector<std::string> info = ram_.getInfo();
	SDL_Rect rect[] = {{10, 10, 0, 0},
						{10, 50, 0, 0}};
	std::vector<SDL_Surface *>::iterator	it;
	size_t									i;
	for (it = tRamModule.begin(), i = 0; it != tRamModule.end(); ++it, ++i) {
		*it = TTF_RenderText_Solid(font_, info.at(i).c_str(), (SDL_Color){255, 0, 0, 255});
		SDL_BlitSurface(*it, NULL, sRamModule, &rect[i]);
		SDL_FreeSurface(*it);
	}
}

void		SdlMode::displayHost() {
	SDL_BlitScaled(textures_[1], NULL, sHostModule, &texture_rect);
	host_.refresh();
	std::vector<std::string> info = host_.getInfo();
	SDL_Rect rect[] = {{10, 10, 0, 0},
						{10, 50, 0, 0},
						{10, 100, 0, 0}};
	std::vector<SDL_Surface *>::iterator	it;
	size_t									i;
	for (it = tHostModule.begin(), i = 0; it != tHostModule.end(); ++it, ++i) {
		*it = TTF_RenderText_Solid(font_, info.at(i).c_str(), (SDL_Color){255, 0, 0, 255});
		SDL_BlitSurface(*it, NULL, sHostModule, &rect[i]);
		SDL_FreeSurface(*it);
	}
}

void		SdlMode::displayNet() {
	SDL_BlitScaled(textures_[2], NULL, sNetModule, &texture_rect);
	net_.refresh();
	std::vector<std::string> info = net_.getInfo();
	SDL_Rect rect[] = {{10, 10, 0, 0},
					   {10, 50, 0, 0},
					   {10, 100, 0, 0}};
	std::vector<SDL_Surface *>::iterator	it;
	size_t									i;
	for (it = tNetModule.begin(), i = 0; it != tNetModule.end(); ++it, ++i) {
		*it = TTF_RenderText_Solid(font_, info.at(i).c_str(), (SDL_Color){255, 0, 0, 255});
		SDL_BlitSurface(*it, NULL, sNetModule, &rect[i]);
		SDL_FreeSurface(*it);
	}
}

void		SdlMode::displayOs() {
	SDL_BlitScaled(textures_[3], NULL, sOsModule, &texture_rect);
	std::vector<std::string> info = os_.getInfo();
	SDL_Rect rect[] = {{10, 10, 0, 0},
					   {10, 50, 0, 0},
					   {10, 100, 0, 0}};
	std::vector<SDL_Surface *>::iterator	it;
	size_t									i;
	for (it = tOsModule.begin(), i = 0; it != tOsModule.end(); ++it, ++i) {
		*it = TTF_RenderText_Solid(font_, info.at(i).c_str(), (SDL_Color){255, 0, 0, 255});
		SDL_BlitSurface(*it, NULL, sOsModule, &rect[i]);
		SDL_FreeSurface(*it);
	}
}

//void		SdlMode::displayDisk() {
//	SDL_BlitScaled(textures_[3], NULL, sDiskModule, &texture_rect);
//	std::vector<std::string> info = disk_.getInfo();
//	SDL_Rect rect[] = {{10, 10, 0, 0},
//					   {10, 50, 0, 0},
//					   {10, 100, 0, 0}};
//	std::vector<SDL_Surface *>::iterator	it;
//	size_t									i;
//	for (it = tDiskModule.begin(), i = 0; it != tDiskModule.end(); ++it, ++i) {
//		*it = TTF_RenderText_Solid(font_, info.at(i).c_str(), (SDL_Color){255, 0, 0, 255});
//		SDL_BlitSurface(*it, NULL, sDiskModule, &rect[i]);
//		SDL_FreeSurface(*it);
//	}
//}
//
//void		SdlMode::displayProcess() {
//	SDL_BlitScaled(textures_[3], NULL, sProcessModule, &texture_rect);
//	std::vector<std::string> info = process_.getInfo();
//	SDL_Rect rect[] = {{10, 10, 0, 0},
//					   {10, 50, 0, 0},
//					   {10, 100, 0, 0}};
//	std::vector<SDL_Surface *>::iterator	it;
//	size_t									i;
//	for (it = tProcessModule.begin(), i = 0; it != tProcessModule.end(); ++it, ++i) {
//		*it = TTF_RenderText_Solid(font_, info.at(i).c_str(), (SDL_Color){255, 0, 0, 255});
//		SDL_BlitSurface(*it, NULL, sProcessModule, &rect[i]);
//		SDL_FreeSurface(*it);
//	}
//}

void	SdlMode::start() {
	SDL_Event	e;

	while (1)
	{
		while(SDL_PollEvent(&e))
		{
			if (e.window.event == SDL_WINDOWEVENT_CLOSE || (e.type == SDL_KEYDOWN &&
															e.key.keysym.scancode == SDL_SCANCODE_ESCAPE))
				return ;
		}
		bzero(sCpuModule->pixels, static_cast<size_t>(sCpuModule->w * sCpuModule->h * sizeof(int)));
		bzero(sDateModule->pixels, static_cast<size_t>(sDateModule->w * sDateModule->h * sizeof(int)));
		bzero(sHostModule->pixels, static_cast<size_t>(sHostModule->w * sHostModule->h * sizeof(int)));
		bzero(sNetModule->pixels, static_cast<size_t>(sNetModule->w * sNetModule->h * sizeof(int)));
		bzero(sOsModule->pixels, static_cast<size_t>(sOsModule->w * sOsModule->h * sizeof(int)));
		bzero(sRamModule->pixels, static_cast<size_t>(sRamModule->w * sRamModule->h * sizeof(int)));
//		bzero(sDiskModule->pixels, static_cast<size_t>(sDiskModule->w * sDiskModule->h * sizeof(int)));
//		bzero(sProcessModule->pixels, static_cast<size_t>(sProcessModule->w * sProcessModule->h * sizeof(int)));
		displayDate();
		displayCpu();
		displayRam();
		displayOs();
		displayHost();
		displayNet();
//		displayDisk();
//		displayProcess();
		SDL_UpdateWindowSurface(this->wDateModule);
		SDL_UpdateWindowSurface(this->wCpuModule);
		SDL_UpdateWindowSurface(this->wRamModule);
		SDL_UpdateWindowSurface(this->wOsModule);
		SDL_UpdateWindowSurface(this->wHostModule);
		SDL_UpdateWindowSurface(this->wNetModule);
//		SDL_UpdateWindowSurface(this->wDiskModule);
//		SDL_UpdateWindowSurface(this->wProcessModule);
	}
}
