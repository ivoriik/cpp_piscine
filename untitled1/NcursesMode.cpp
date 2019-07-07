#include "NcursesMode.hpp"

NcursesMode::NcursesMode()
{
	this->date_ = DateModule();
	this->cpu_ = CpuModule();
	this->host_ = HostModule();
	this->net_ = NetModule();
	this->ram_ = RamModule();
	this->os_ = OsModule();
//	this->disk_ = DiskModule();
//	this->process_ = ProcessModule();

	srand(time(0));
	initscr();
	noecho();
	cbreak();
	curs_set(FALSE);
	keypad(stdscr, TRUE);
	nodelay(stdscr, TRUE);
	start_color();
	init_pair(COLOR_0, COLOR_WHITE, COLOR_BLACK);
	init_pair(COLOR_1, COLOR_RED, COLOR_BLACK);
	init_pair(COLOR_2, COLOR_MAGENTA, COLOR_BLACK);
	init_pair(COLOR_3, COLOR_YELLOW, COLOR_BLACK);
	init_pair(COLOR_4, COLOR_GREEN, COLOR_BLACK);
	mousemask(ALL_MOUSE_EVENTS | REPORT_MOUSE_POSITION, NULL);
	getmaxyx(stdscr, wHei_, wWid_);
	clear();
	erase();
	refresh();
}

NcursesMode::~NcursesMode() { }

void NcursesMode::printFrame()
{
	int i = -1;
	int j;
	while (++i <= 32)
	{
		mvprintw(i, 0, "|");
		mvprintw(i, 20, "|");
		mvprintw(i, 100, "|");
		if (i % 4 == 0)
		{
			j = 1;
			while (j < 20)
				mvprintw(i, j++, "-");
		}
	}
}

void NcursesMode::printList()
{
	if (title_ == 0)
	{
		attron(COLOR_PAIR(COLOR_0));
		mvprintw(6, 2, ">> TIME");
		attroff(COLOR_PAIR(COLOR_0));
	}
	else
		mvprintw(6, 2, "   TIME");
	if (title_ == 1)
	{
		attron(COLOR_PAIR(COLOR_0));
		mvprintw(10, 2, ">> CPU");
		attroff(COLOR_PAIR(COLOR_0));
	}
	else
		mvprintw(10, 2, "   CPU");
	if (title_ == 2)
	{
		attron(COLOR_PAIR(COLOR_0));
		mvprintw(2, 2, ">> HOST");
		attroff(COLOR_PAIR(COLOR_0));
	}
	else
		mvprintw(2, 2, "   HOST");
	if (title_ == 3)
	{
		attron(COLOR_PAIR(COLOR_0));
		mvprintw(14, 2, ">> RAM");
		attroff(COLOR_PAIR(COLOR_0));
	}
	else
		mvprintw(14, 2, "   RAM");
	if (title_ == 4)
	{
		attron(COLOR_PAIR(COLOR_0));
		mvprintw(18, 2, ">> NETWORK");
		attroff(COLOR_PAIR(COLOR_0));
	}
	else
		mvprintw(18, 2, "   NETWORK");
	if (title_ == 5)
	{
		attron(COLOR_PAIR(COLOR_0));
		mvprintw(26, 2, ">> OS");
		attroff(COLOR_PAIR(COLOR_0));
	}
	else
		mvprintw(26, 2, "   OS");
	if (title_ == 6)
	{
		attron(COLOR_PAIR(COLOR_0));
		mvprintw(22, 2, ">> DISK");
		attroff(COLOR_PAIR(COLOR_0));
	}
	else
		mvprintw(22, 2, "   DISK");
	if (title_ == 7)
	{
		attron(COLOR_PAIR(COLOR_0));
		mvprintw(30, 2, ">> PROCESS");
		attroff(COLOR_PAIR(COLOR_0));

	}
	else
		mvprintw(30, 2, "   PROCESS");
}

void NcursesMode::printData()
{
	std::string cpu;
	std::string buff;
	int find;
	int i;
	if (title_ == 0)
	{
		date_.refresh();
		attron(COLOR_PAIR(4));
		mvwaddstr(stdscr, 2, 30, date_.getInfo().c_str());
		mvwaddstr(stdscr, 3, 30, date_.getInfo().c_str());
		attroff(COLOR_PAIR(4));
		displayDate();
	}
	else if (title_ == 1)
	{
		i = 0;
		cpu_.refresh();
		cpu = cpu_.getInfo();
		find = cpu.find(" sys");
		buff = cpu.substr(find + 6, 2);
		try
		{
			find = stoi(buff);
		}
		catch (std::exception & e)
		{
			find = 50;
		}
		find = 100 - find;
		attron(COLOR_PAIR(COLOR_2));
		mvwaddstr(stdscr, 2, 28, "<-");
		while (find > 0)
		{
			mvwaddstr(stdscr, 2, 30 + i++, "#");
			find = find - 2;
		}
		mvwaddstr(stdscr, 2, 80, "->");
		mvwaddstr(stdscr, 1, 30, cpu.c_str());
		attroff(COLOR_PAIR(COLOR_2));
		displayCpu();
	}
	else if (title_ == 2)
	{
		attron(COLOR_PAIR(4));
		mvprintw(1, 30, host_.getInfo().c_str());
		mvprintw(2, 30, host_.getInfo().c_str());
		attroff(COLOR_PAIR(4));
		displayHost();
	}
	else if (title_ == 3)
	{
		ram_.refresh();
		attron(COLOR_PAIR(4));
		mvwaddstr(stdscr, 2, 30, ram_.getInfo().c_str());
		attroff(COLOR_PAIR(COLOR_2));
		displayRam();
	}
	else if (title_ == 4)
	{
		net_.refresh();
		attron(COLOR_PAIR(COLOR_2));
		mvwaddstr(stdscr, 2, 30, net_.getInfo().c_str());
		attroff(COLOR_PAIR(4));
		displayNet();
	}
	else if (title_ == 5)
	{
		attron(COLOR_PAIR(4));
		mvwaddstr(stdscr, 2, 30, os_.getInfo().c_str());
		mvwaddstr(stdscr, 3, 30, os_.getInfo().c_str());
		mvwaddstr(stdscr, 4, 30, os_.getInfo().c_str());
		attroff(COLOR_PAIR(COLOR_2));
		displayOs();
	}
//	else if (title_ == 6)
//	{
//		attron(COLOR_PAIR(4));
//		mvwaddstr(stdscr, 2, 30, disk_.getInfo().c_str());
//		attroff(COLOR_PAIR(COLOR_2));
//		displayDisk();
//	}
//	else if (title_ == 7)
//	{
//		attron(COLOR_PAIR(4));
//		mvwaddstr(stdscr, 2, 30, process_.getInfo().c_str());
//		attroff(COLOR_PAIR(COLOR_2));
//		displayProcess();
//	}
}

void NcursesMode::start()
{
	int ch = 1;
	timeout(100);
	curs_set(0);
	keypad(stdscr, true);
	while (true)
	{
		clear();
		printList();
		printData();
		printFrame();
		ch = getch();
		if (ch == 27)
			break;
		else if (ch == 258 && title_ < 6)
			++title_;
		else if (ch == 259 && title_ > 0)
			--title_;
		refresh();
		usleep(1000);
	}
	endwin();
	system("reset");
}
