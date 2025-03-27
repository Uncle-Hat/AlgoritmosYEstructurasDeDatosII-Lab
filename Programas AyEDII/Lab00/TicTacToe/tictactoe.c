#include <stdlib.h>  /* exit() y EXIT_FAILURE */
#include <stdio.h>   /* printf(), scanf()     */
#include <stdbool.h> /* Tipo bool             */

#include <assert.h>  /* assert() */

#define B_SIZE 3

#define CELL_MAX (3 * 3 - 1)

void print_sep(int length) {
    printf("\t ");
    for (int i=0; i < length;i++) printf("................");
    printf("\n");

}

void print_board(char board[3][3])
{
    int cell = 0;

    print_sep(3);
    for (int row = 0; row < 3; ++row) {
        for (int column = 0; column < 3; ++column) {
            printf("\t | %d: %c ", cell, board[row][column]);
            ++cell;
        }
        printf("\t | \n");
        print_sep(3);
    }
}

char diagonal_check(char board[3][3]){
    int auxX = 0;
    int auxO = 0;
    for (int row = 0; row < 3; ++row) {
            if (board[row][row] == 'X') {
                auxX++;
            }
            else if (board[row][row] == 'O') {
                auxO++;
        }
    if ((auxX&&auxY)<3){
        return '';
    }
    else{
        if (auxX==3){
            return 'X';
        }
        else{
            return 'O';
        }
    }
}
}

char column_check(char board[3][3]){
    char c = ''
    char X = 'X'
    char O = 'O'
    int count_X = 0;
    int count_O = 0;
    for (int column = 0; column < 3; ++column){
        if (board[i][j] == X){
            count_X++;
        }
        else if (board[i][j] == X){
            count_O++;
        }
    }
    if (count_O==B_SIZE){
        return O;
    }
}

char get_winner(char board[3][3]) //1:01hs, hora de pedir ayuda
{
    int auxX = 0;
    int auxO = 0;
    char winner = '-';

    return winner;
}

bool has_free_cell(char board[3][3])
{
    bool free_cell = 0;
    for (int row = 0; row < 3; ++row) {
        for (int column = 0; column < 3; ++column) {
            if (board[row][column] == '-') {
                free_cell = true;
            } 
            else{
                free_cell = false; //Duda, por qué igualmente lee este campo, comprobar con printf
            }
        }
    }
    return free_cell;
}

int main(void){
    printf("TicTacToe [InCoMpLeTo :'(]\n");

    char board[3][3] = {
        { '-', '-', '-' },
        { '-', '-', '-' },
        { '-', '-', '-' }
    };

    char turn = 'X';
    char winner = '-';
    int cell = 0;
    while (winner == '-' && has_free_cell(board)) {
        print_board(board);
        printf("\nTurno %c - Elija posición (número del 0 al %d): ", turn,CELL_MAX);
        int scanf_result = scanf("%d", &cell);
        if (scanf_result <= 0) {
            printf("Error al leer un número desde teclado\n");
            exit(EXIT_FAILURE);
        }
        if (cell >= 0 && cell <= CELL_MAX) {
            int row = cell / 3;
            int colum = cell % 3;
            if (board[row][colum] == '-') { 
                board[row][colum] = turn;
                turn = turn == 'X' ? 'O' : 'X';
                winner = get_winner(board);
            } else {
                printf("\nCelda ocupada!\n");
            }
        } else {
            printf("\nCelda inválida!\n");
        }
    }
    print_board(board);
    if (winner == '-') {
        printf("Empate!\n");
    } else {
        printf("Ganó %c\n", winner);
    }
    return 0;
}
