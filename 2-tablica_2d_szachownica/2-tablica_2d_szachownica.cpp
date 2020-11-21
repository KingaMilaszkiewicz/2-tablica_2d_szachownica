// 2-tablica_2d_szachownica.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    char tab[8][8];
    int x = 0;

    std::cout << "  A B C D E F G H" << std::endl;
    std::cout << " _________________" << std::endl;

    for (int i = 0; i < 8; i++) {
        std::cout << i+1 << "|";
        for (int j = 0; j < 8; j++) {
            if (i == 0 || i == 2) { // write "o" for every second row in columns 0 and 2 starting with the second row
                if (j % 2 == 1) {
                    tab[i][j] = 'o';
                }
                else {
                    tab[i][j] = ' ';
                }
            }
            if (i == 1) { // write "o" for every second row in column 1 starting with the first row
                if (j % 2 == 0) {
                    tab[i][j] = 'o';
                }
                else {
                    tab[i][j] = ' ';
                }
            }
            if (i == 3 || i == 4) { // write " " for every row in columns 3 and 4
                tab[i][j] = ' ';
            }
            if (i == 5 || i == 7) {// write "x" for every second row in columns 5 and 7 starting with the first row
                if (j % 2 == 0) {
                    tab[i][j] = 'x';
                }
                else {
                    tab[i][j] = ' ';
                }
            }
            if (i == 6) { // write "x" for every second row in column 6 starting with the second row
                if (j % 2 == 1) {
                    tab[i][j] = 'x';
                }
                else {
                    tab[i][j] = ' ';
                }
            }
            std::cout << tab[i][j] << "|";
        }
        std::cout << std::endl << " _________________" << std::endl;
    }
}

