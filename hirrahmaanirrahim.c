#include <stdio.h>
#include <stdlib.h>

void board ();
int petunjukpermainan1 ();
void petunjukpermainan2 ();
void mainmenu();
//procedure mainmenu(output modepermainan : integer)
char square[10] = {'o','1','2','3','4','5','6','7','8','9'};

int main (){

	int modepermainan;
	void board();	
	
	printf ("\n\nHallo, Selamat Datang!\nKetik apa saja dan tekan enter untuk melanjutkan ke Main Menu");

	
	mainmenu(&modepermainan);
	scanf ("%d", &modepermainan);
	
	if (modepermainan == 1){
		int player = 1,i,choice;
		char mark;
		int pemenang;
		int skorplayer1;
		int skorplayer2;
		void checkwin (int player, int* pemenang);
		void skormode1 (int* pemenang, int* skorplayer1, int* skorplayer2);
		
		mark=(player == 1) ? 'X' : 'O';
		
		petunjukpermainan1 ();
		scanf ("\n%d");
		
		do {
		board ();
		skormode1 (&pemenang,&skorplayer1,&skorplayer2);
		pemenang = 0;
        player=(player%2)?1:2;
        printf ("\n\nPlayer %d masukkan nomor : ", player);
        scanf ("%d", &choice);
        
        mark=(player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1')

            square[1] = mark;
        else if (choice == 2 && square[2] == '2')

            square[2] = mark;
        else if (choice == 3 && square[3] == '3')

            square[3] = mark;
        else if (choice == 4 && square[4] == '4')

            square[4] = mark;
        else if (choice == 5 && square[5] == '5')

            square[5] = mark;
        else if (choice == 6 && square[6] == '6')

            square[6] = mark;
        else if (choice == 7 && square[7] == '7')

            square[7] = mark;
        else if (choice == 8 && square[8] == '8')

            square[8] = mark;
        else if (choice == 9 && square[9] == '9')
		    square[9] = mark;
		else {
			printf("Langkah tidak tepat ");
			scanf("%s");

            player--;
		}
		    
		checkwin (player, &pemenang);
		
		if (pemenang == 1){
			printf ("Selamat! Player %d menang!", pemenang);
		}
		if (pemenang == 2){
			printf ("Selamat! Player %d menang!", pemenang);
		}
		if (pemenang == 3){
			printf ("Kalian sama kuat, hasilnya seri!");
		}
		
		player++;
//		printf ("\n\n %d", pemenang);
//		scanf ("%d");		
		} while (pemenang==0);
	}
	else if (modepermainan == 2){
		
	}
	else if (modepermainan == 3){
		return 0;
	}
}

void mainmenu () {
	system ("cls");
	printf ("\n\n[[MAIN MENU]]\nPilih mode permainan");
	printf ("\n\nKetik 1 untuk mode permainan VS FRIEND\nKetik 2 untuk mode permainan VS COMPUTER");
	printf ("\nKetik 3 untuk keluar dari permainan\n\n");
	}

void board()
{
    system("cls");
    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X)  -  Player 2 (O)\n\n");

    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", square[1],square[2],square[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c  \n", square[4],square[5],square[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c  \n", square[7],square[8],square[9]);

    printf("     |     |     \n");
}

int petunjukpermainan1 (){
	
	system ("cls");
	printf ("\n\n=====VS Friend===== \n Selamat datang di mode permainan VS Friend!");
	printf ("Dalam mode permainan ini, kamu akan melawan temanmu sendiri,\npastikan ada teman di sampingmu saat ini.");
	printf ("\nPeraturannya sederhana");
	printf ("Kalian bermain tic tac toe, yang lebih dahulu mendapatkan tanda sebaris, pemenang.");
	printf ("Masing-masing akan mendapatkan 4 poin di awal, \njika menang kalian dapat 3 poin");
	printf ("jika kalah kalian dapat -2 poin \njika seri kalian dapat -1 poin dan giliran yang melangkah awal akan berganti \n(sebelumnya X, jika seri, di permainan selanjutnya O melangkah di awal");
	printf ("\n\npecundang ditentukan bila poinmu menyentuh 0 atau kurang dari 0");	
	printf ("\nSelamat bermain, untuk melanjutkan ketik 1 dan enter");
}

void checkwin (int player, int *pemenang){
	if (square[1] == square[2] && square [2] == square[3]){
		pemenang = &player;
//		printf ("%d", player);
//		scanf ("&s");
	}
	if (square[4] == square[5] && square [5] == square[6]){
		pemenang = &player;
	}
	if (square[7] == square[8] && square [8] == square[9]){
		pemenang = &player;
	}
	if (square[1] == square[4] && square [4] == square[7]){
		pemenang = &player;
	}
	if (square[2] == square[5] && square [5] == square[8]){
		pemenang = &player;
	}
	if (square[3] == square[6] && square [6] == square[9]){
		pemenang = &player;
	}
	if (square[1] == square[5] && square [5] == square[9]){
		pemenang = &player;
	}
	if (square[3] == square[5] && square [5] == square[7]){
		pemenang = &player;
	}
	else if ((*pemenang != 1 || 2) && (square[1] != '1' && square[2] != '2' && square[3] != '3' 
	&& square[4] != '4' && square[5] != '5' && square[6] != '6' 
    && square[7] != '7' && square[8] != '8' && square[9] != '9')){
    	*pemenang = 3;
	}
	
}

void skormode1 (int* pemenang, int* skorplayer1, int* skorplayer2){
	*skorplayer1 = 4;
	*skorplayer2 = 4;
	
	if (*pemenang = 1){
		skorplayer1 = skorplayer1 + 4;
		skorplayer2 = skorplayer2 - 2;
	}
	if (*pemenang = 2){
		skorplayer2 = skorplayer2 + 4;
		skorplayer1 = skorplayer1 - 2;
	}
	if (*pemenang = 3){
		skorplayer1 = skorplayer1 - 1;
		skorplayer2 = skorplayer2 - 1;
	}
	printf ("\nBOX POINTS\n");
	printf ("PLAYER 1 (%d) VS (%d) PLAYER 2", skorplayer1, skorplayer2);
}
	
