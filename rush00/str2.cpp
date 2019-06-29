// Пример программы на ncurses в которой строка плавает в консоли по Х и Y.
// Mожно произвольно менять размеры окна консоли.
//      SPACE  - включает/выключает очистку экрана.
//      ESCAPE - завершает программу.
//
// Author: Alexei Mission. 2017-04-27.

#if __cplusplus < 2011 * 100
#error "Хочу С++11 или новее"
#endif // __cplusplus

#include <chrono>
#include <thread>
#include <ncurses.h>

// Переменная pos плавает в диапазоне [MIN, MAX] изменяясь после каждого
// вызова на величину dir.
//
inline void bounded_move( int& pos, int& dir, const int MIN, const int MAX )
{
    pos += dir;

    if ( dir > 0 )
    {
        if ( pos >= MAX )
        {
            pos = MAX;
            dir = -dir;
        }
    }
    else
    {
        if ( pos <= MIN )
        {
            pos = MIN;
            dir = -dir;
        }
    }
}

int main()
{
    initscr();
    curs_set( 0 );
    nodelay( stdscr, true ); // getch() стал неблокирующим

    const char str[] = "Press SPACE or ESCAPE";
    const int SIZE   = sizeof( str ) / sizeof( str[0] );
    const int ESC    = 27;

    for ( int x = 0, y = 0, dx = 2, dy = 1, o = 1, c; ESC != ( c = getch() ); )
    {
        ( o = c == ' ' ?! o : o ) ? clear() : 0; // немного обфускации :D

        mvaddstr( y, x, str );
        refresh();

        std::this_thread::sleep_for( std::chrono::milliseconds( 50 ) ); // сон

        bounded_move( x, dx, 0, getmaxx( stdscr ) + 1 - SIZE );
        bounded_move( y, dy, 0, getmaxy( stdscr ) - 1 );
    }

    endwin();
    return 0;
}
