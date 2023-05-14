#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

const int screenWidth = 80;
const int screenHeight = 20;
int paddleX, ballX, ballY, ballDirX, ballDirY;
int score;
bool gameOver;
char screen[screenHeight][screenWidth];

void Setup()
{
    gameOver = false;
    paddleX = screenWidth / 2 - 3;
    ballX = screenWidth / 2;
    ballY = screenHeight - 2;
    ballDirX = 1;
    ballDirY = -1;
    score = 0;

    // Инициализация переменных игры

    for (int i = 0; i < screenHeight; i++)
    {
        for (int j = 0; j < screenWidth; j++)
        {
            if (i == 0 || i == screenHeight - 1)
                screen[i][j] = '-'; // Верхняя и нижняя границы
            else if (j == 0 || j == screenWidth - 1)
                screen[i][j] = '|'; // Левая и правая границы
            else
                screen[i][j] = ' '; // Пустые места
        }
    }
}

void DrawScreen()
{
    system("cls"); // Очистка экрана консоли

    // Отрисовка содержимого массива экрана
    for (int i = 0; i < screenHeight; i++)
    {
        for (int j = 0; j < screenWidth; j++)
        {
            cout << screen[i][j];
        }
        cout << endl;
    }

    cout << "Score: " << score << endl;
}

void UpdateBall()
{
    screen[ballY][ballX] = ' '; // Очистка предыдущей позиции мяча

    // Обновление позиции мяча
    ballX += ballDirX;
    ballY += ballDirY;


    // Проверка столкновения с границами
    if (ballX == 1 || ballX == screenWidth - 2)
        ballDirX = -ballDirX; // Изменение горизонтального направления мяча

    if (ballY == 1)
        ballDirY = -ballDirY; // Изменение вертикального направления мяча

    // Проверка столкновения с ракеткой
    if (ballY == screenHeight - 2 && ballX >= paddleX && ballX <= paddleX + 5)
    {
        ballDirY = -ballDirY; // Изменение вертикального направления мяча
        score++; // Увеличение счета
    }

    if (ballY == screenHeight - 1)
        gameOver = true;

    screen[ballY][ballX] = 'O'; // Установка символа мяча в новую позицию

}

void UpdatePaddle()
{
    for (int i = 0; i < 6; i++)
        screen[screenHeight - 2][paddleX + i] = ' '; // Очистка предыдущей позиции ракетки

    if (_kbhit())
    {
        char input = _getch();
        if (input == 'a' && paddleX > 1)
            paddleX--;
        else if (input == 'd' && paddleX < screenWidth - 7)
            paddleX++;
    }

    for (int i = 0; i < 6; i++)
        screen[screenHeight - 2][paddleX + i] = '_';
    Sleep(10); // Заддержка ракетки
}

int main()
{
    Setup();

    while (!gameOver)
    {
        DrawScreen();
        UpdateBall();
        UpdatePaddle();
        Sleep(350); // заддержка мячика
    }

    system("cls");
    cout << "Game Over!" << endl;
    cout << "Final Score: " << score << endl;

    return 0;
}