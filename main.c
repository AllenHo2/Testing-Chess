// #pawn soldier = 1 forward unless if first move == 2; if to opposite == any piece
//knight 	= 2 x 1
// bishop	diagonally == jumps 
//rook		=moves horizontall or vertically (forward/ side) n spaces
//king		any direction n spaces
//queen		any one space by 1
// # 8 by 8 
// # 2 rows filled
// # they move first
//go to your piece == kill it
//goes until king is dead

//answers if its a valid chess move

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



bool isValidChessMove(int row, int col, int from , int to) {

char board[row][col];

//counter for chess moves 
int moveWhite = 0;
int moveBlack = 0;

for(int i = 0; i < row; i++) {
	for(int j = 0; j < col; j++) {
	// char board[i][j];	
		// int rowBoard = board[i];
		// char colBoard = board[j];

		// printf(" %c" , board[j][i]);
		// printf(" %c ",  board [i][j]);


		printf(" --- %d --- %d --- %d --- %d\n",board[i][j], board[i][j], board[i][j], board[i][j]);
		// printf(" %c \n", colBoard);	
		// printf(" %d ", rowBoard);
  //   	printf(" %c \n", board[i][col]);	
		// printf(" %d \n", board[row][j]);
		
	}
}


if(pawn) {
	if(move == 1) {
		if(j != 1 && j != 2){
			printf("failed");
		}
		board[i][j];
	} 
	if(j == 1){
	board[i][j];
	}
	printf("failed");
	return false;
}

if(knight) {
	if(not){
	board[i+2][j + 1];
	board[i+1][j+2];
	}
	printf("failed");
	return false;
}

if(bishop) {
	//assume row & col are the same so choose one for length
	for(int d = 0; d < row; i++) {
		if(i != j){
			break;
		}
		board[i+d][j + d];	
		}
	}
	printf("failed");
	return false;
}
if(king) {
	if(not){
	board[i+2][j + 1];
	board[i+1][j+2];
	}
	printf("failed");
	return false;
}
	
	

	//create a print function to print board to console

	// printf("Board: %c", board[row][col]);

	return true;
	
}


int main (int argc, char **argv) {

	bool valid = isValidChessMove(4, 4, 2, 4 );
	

	if(valid) {
		printf("success\n");
	}

	return 0;
	
}

//consider eating
//'R' = white
//'r' = black
