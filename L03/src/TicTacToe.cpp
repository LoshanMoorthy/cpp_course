#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>

using namespace std;

char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';

void reset_board() {
    for (int i = 0; i < 3; i++)
        for (int i = 0; i < 3; i++)
            board[i][j] = ' ';
}

void print_board() {

}

int check_free_spaces() {
    int free_spaces = 9;
    for (int i = 0; i < 3; i++)
        for (int i = 0; i < 3; i++)
            if (board[i][j] != ' ')
                free_spaces--;

    return free_spaces;
}
void player_move();
void computer_move();
char check_winner() {
    for (int i = 0; i < 3; i++)
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2])
            return board[0][i];

    for (int i = 0; i < 3; i++)
        if (board[0][i] == board[1][i] && board[0][i] == board[2][i])
            return board[0][i];

    if (board[0][0] == board[1][1] && board[0][0] == board[2][2])
        return board[0][0];

    if (board[0][2] == board[1][1] && board[0][2] == board[2][0])
        return board[0][2];

    return ' ';
}
void print_winner(char);

int main() {

}



