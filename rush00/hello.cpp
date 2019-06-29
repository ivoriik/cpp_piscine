// #include <ncurses.h>

// int main()
// {
//     initscr();                   // Переход в curses-режим
//     raw();      
//     noecho();

//     char str[100];
//     printw("Enter: \n");  // Отображение приветствия в буфер
//     scanw("%s", str);
//     printw("%s\n", str);
//     refresh();                   // Вывод приветствия на настоящий экран
//     echo();
//     while (getch() != 27)
//     	;
//     endwin();                    // Выход из curses-режима. Обязательная команда.
//     return 0;
// }

// #include <ncurses.h>

// int main()
// {
//     initscr();
//     keypad(stdscr, true);   //Включаем режим чтения функциональных клавиш
//     noecho();               //Выключаем отображение вводимых символов, нужно для getch()
//     halfdelay(100);         //Устанавливаем ограничение по времени ожидания getch() в 10 сек
//     scrollok( stdscr, true );
//     printw("Press F2 to exit. \n");

//     bool ex = false;
//     while ( !ex )
//     {
//         int ch = getch();

//         switch ( ch )
//         {
//         case ERR:
//             printw("Please, press any key...\n"); //Если нажатия не было, напоминаем пользователю, что надо нажать клавишу
//             break;
//         case KEY_F(2): //Выходим из программы, если была нажата F2
//             ex = true;
//             break;
//         default:  //Если всё нормально, выводим код нажатой клавиши
//             printw("Key: 0x%X (%d) \'%c\'" "\n", ch, ch, ch);
//             break;
//         }

//         refresh(); //Выводим на настоящий экран

//     }

//     printw("Thank you. Good buy!");
//     getch();
//     endwin(); 
//     return 0;
// }

// #include <ncurses.h>

// int main()
// {
//     initscr();

//     Вывод символа "А" в обычном режиме
//     printw("Typical symbol \'A\': "); 
//     addch('A');

//     //Вывод подчёркнутого и жирного символа "А"
//     printw("\nUnderline and bold symbol \'A\': ");
//     addch('A' | A_BLINK | A_DIM);
//     printw("\nPress any key...");
//     getch();
//     endwin();
//     return 0;
// }

// #include <ncurses.h>
// #include <cstring>

// int main()
// {
//     const char *mesg = "Just a string";


//     //Количество строк и столбцов на экране терминала
//     int row, col;   

//     initscr();
//     keypad(stdscr, true);   //Включаем режим чтения функциональных клавиш
//     noecho();
//     scrollok( stdscr, true );
//     curs_set(0);

//     //Получаем максимально возможное количество строк и столбцов для окна stdscr и записываем эти данные в row и col
//     getmaxyx(stdscr, row, col); 

//     //Выводим сообщение в центре окна stdscr
//     mvprintw((row - 1) / 2, (col - strlen(mesg)) / 2, "%s", mesg);

//     //Выводим информацию о количестве строк и столбцов в левом нижнем углу экрана
//     mvprintw(row - 1, 0, "The number of rows - %d and columns - %d\n", row, col);
//     int key = getch();
//     while (key != 27) {
//     	clear();
//     	printw("KEY %d %c\n", key, key);    
//     	key = getch();
//     }
//     endwin();
//     return 0;
// }

#include <ncurses.h>

const char items[4][6] = {
    "Item1", 
    "Item2",
    "Item3", 
    "Item4"
};

int main()
{
    initscr();

    unsigned choice = 0; //Выбор пользователя

    curs_set(0); //"Убиваем" курсор
    //Включаем режим удобной работы с функциональными клавишами, другими словами KEY_UP и KEY_DOWN без этого не работали бы
    keypad(stdscr, true); 

    while ( true )
    {
        clear();
        for ( unsigned i = 0; i < 4; i++ ) //Проходим по всем элементам меню
        {
            if ( i == choice ) //Если текущий элемент совпадает с выбором пользователя
                addch('>'); //Выводим указатель
            else          
                addch(' '); //Иначе выводим " ", для равновесия

            printw("%s\n", items[i]);
        }

        //Получаем нажатие пользователя
        switch ( getch() )
        {
            case KEY_UP:
                if ( choice ) //Если возможно, переводим указатель вверх
                    choice--; 
                break;
            case KEY_DOWN:
                if ( choice != 3 ) //Если возможно, переводим указатель вниз
                    choice++;
                break;
        }
    }

    endwin();
    return 0;
}