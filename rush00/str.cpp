#include <ncurses.h>

#if defined(_WIN32) || defined(_WIN64) 
    #include <windows.h>
    #define msleep(msec) Sleep(msec)
#else
    #include <unistd.h>
    #define msleep(msec) usleep(msec*250)
#endif

int main()
{
    initscr();

    char str[100];
    addstr("Enter string: ");
    getstr(str); //Считваем строку
    curs_set(0); //"Убиваем" курсор, чтобы не мешался
    int i = 0;
    while ( true )
    {
    //Перемещаем х-координату как можно дальше вправо, и будем уменьшать её, пока она != 0
        for ( unsigned x = getmaxx(stdscr); x; x-- ) 
        {
            clear();
            mvaddstr(i, x, str);
            refresh();
            msleep(200);
        }
        ++i;
        if (i >  getmaxy(stdscr))
            i = 0;
    }

    endwin();
    return 0;
}
