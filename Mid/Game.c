/*Header */
#include <stdio.h>
#include <stdbool.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
/*Function */
void gotoXY(int x, int y)
{
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
/*Main */
int main()
{
    /*Init */
    srand(time(NULL));
    /*Game */
    bool running = true;
    int score = 0;
    int dir[4][2] = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}}; // Up, Down, Left, Right
    /*Snake */
    int snake_dir[2] = {dir[0][0], dir[0][1]};                    // Up
    int snake[625][2] = {{10, 13}, {10, 12}, {10, 11}, {10, 10}}; // 25x25=최대625칸
    int snake_length = 4;
    bool snake_booster = false;
    /*Apple */
    int apple[2] = {rand() % 10, rand() % 10};
    printf("%d, %d", apple[0], apple[1]);
    /*Main loop */
    while (running)
    {
        /*Key event */
        if (_kbhit())
        {
            int key = _getch();
            if (key == 'w') // Up:dir[0]
            {
                if (snake_dir[0] != dir[1][0] || snake_dir[1] != dir[1][1])
                {
                    snake_dir[0] = dir[0][0];
                    snake_dir[1] = dir[0][1];
                }
            }
            else if (key == 'a') // Left:dir[2]
            {
                if (snake_dir[0] != dir[3][0] || snake_dir[1] != dir[3][1])
                {
                    snake_dir[0] = dir[2][0];
                    snake_dir[1] = dir[2][1];
                }
            }
            else if (key == 's') // Down:dir[1]
            {
                if (snake_dir[0] != dir[0][0] || snake_dir[1] != dir[0][1])
                {
                    snake_dir[0] = dir[1][0];
                    snake_dir[1] = dir[1][1];
                }
            }
            else if (key == 'd') // Right:dir[3]
            {
                if (snake_dir[0] != dir[2][0] || snake_dir[1] != dir[2][1])
                {
                    snake_dir[0] = dir[3][0];
                    snake_dir[1] = dir[3][1];
                }
            }
            else if (key == 32) // Space
            {
                snake_booster = true;
            }
            else if (key == 27) // ESC
            {
                running = false;
            }
            // printf("%d", key);
        }
        else
        {
            snake_booster = false;
        }
        /*Snake, Apple */
        if (snake[snake_length-1][0] == apple[0] && snake[snake_length-1][1] == apple[1])
        {
            snake_length++;
            apple[0] = (rand() % 10);
            apple[1] = (rand() % 10);
            snake[snake_length - 1][0] = snake[snake_length - 2][0];
            snake[snake_length - 1][1] = snake[snake_length - 2][1];
        }
        else
        {
            for (int i = 0; i < snake_length - 1; i++)
            {
                snake[i][0] = snake[i + 1][0];
                snake[i][1] = snake[i + 1][1];
            }
        }
        snake[snake_length - 1][0] += snake_dir[0];
        snake[snake_length - 1][1] += snake_dir[1];
        /*Game over */
        if(snake[snake_length-1][0]<0||snake[snake_length-1][1]<0||25<=snake[snake_length-1][0]||25<=snake[snake_length-1][1])
        {
            running = false;
        }
        /*Refresh game screen */
        system("cls");
        gotoXY(apple[0] * 2, apple[1]);
        printf("*");
        for (int i = 0; i < snake_length; i++)
        {
            gotoXY(snake[i][0] * 2, snake[i][1]);
            if (i == (snake_length - 1))
            {
                printf("@");
            }
            else
            {
                printf("#");
            }
        }
        if(snake_booster)
        {   
            Sleep(10);
        }
        else
        {
            Sleep(100);
        }
    }
    /*Exit */
    system("pause");
    return 0;
}