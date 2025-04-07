#pragma once
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <conio.h>
#include <windows.h>
#include <list>
#include <algorithm>
#include <sstream>
#include <unordered_map>

using namespace std;
#define BLACK 0
#define BLUE 1
#define GREEN 2
#define CYAN 3
#define RED 4
#define MAGENTA 5
#define BROWN 6
#define LIGHTGREY 7
#define DARKGREY 8
#define LIGHTBLUE 9
#define LIGHTGREEN 10
#define LIGHTCYAN 11
#define LIGHTRED 12
#define LIGHTMAGENTA 13
#define YELLOW 14
#define WHITE 15
#define BLINK 1286


void gotoRowCol(int row, int col) {
    COORD coord;
    coord.X = col;
    coord.Y = row;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}



void SetTextColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
int main() 
{
    
    string filename;
    cout << "Enter the password ";
    cin >> filename;
    
    TextEditor editor(filename);
    system("cls");
    editor.Run();
}
