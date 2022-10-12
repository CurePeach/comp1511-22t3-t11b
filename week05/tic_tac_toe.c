#include <stdio.h>

#define SIZE 5

int check_all_columns(char player, char board[SIZE][SIZE]);
int check_all_rows(char player, char board[SIZE][SIZE]);
int check_column(char player, char board[SIZE][SIZE], int col);
int check_row(char player, char board[SIZE][SIZE], int row);

int did_player_win(char player, char board[SIZE][SIZE]) {

    if (check_all_columns(player, board) == 1) {
        return 1;
    }

    if (check_all_rows(player, board) == 1) {
        return 1;
    }

    // check_left_diagonal();
    // check_right_diagonal();

    return 0;
}

int main(void) {
    char no_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'X', 'O', 'O', 'O'},
        {'X', ' ', ' ', ' ', 'O'},
    };

    char x_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'X', 'O', 'O', 'O'},
        {' ', 'X', ' ', ' ', 'O'},
    };
    char o_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'O', 'O', 'O', 'O'},
        {'X', 'X', ' ', ' ', 'O'},
    };

    if (did_player_win('X', o_wins_board)) {
        printf("X Won This Board!\n");
    } else if (did_player_win('O', o_wins_board)) {
        printf("O Won This Board!\n");
    } else {
        printf("Nobody has won this board!\n");
    }

    return 0;
}

int check_all_columns(char player, char board[SIZE][SIZE]) {
    int i = 0;
    while (i < SIZE) {
        if (check_column(player, board, i) == 1) {
            return 1;
        }
        i++;
    }

    return 0;
}

int check_column(char player, char board[SIZE][SIZE], int col) {
    int i = 0;
    int count = 0;
    while (i < SIZE) {
        if (board[i][col] == player) {
            count++;
        }

        i++;
    }

    if (count == SIZE) {
        return 1;
    }

    return 0;
}

int check_all_rows(char player, char board[SIZE][SIZE]) {
    int i = 0;
    while (i < SIZE) {
        if (check_row(player, board, i) == 1) {
            return 1;
        }
        i++;
    }

    return 0;
}

int check_row(char player, char board[SIZE][SIZE], int row) {
    int i = 0;
    int count = 0;
    while (i < SIZE) {
        if (board[row][i] == player) {
            count++;
        }

        i++;
    }

    if (count == SIZE) {
        return 1;
    }

    return 0;
}