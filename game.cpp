#include <iostream>
#include <windows.h>

using namespace std;

void drawSnake(int length) {
    int startX = 10, startY = 5;

    for (int i = 0; i < length; ++i) {
        COORD pos = { (SHORT)(startX + i), (SHORT)startY };
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
        cout << "O";
    }
}

int main() {
    system("cls"); // Clear screen
    drawSnake(10);
    cout << "\n\nStatic Snake Displayed!";
    cin.get();
    return 0;
}
