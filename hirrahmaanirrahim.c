#include <stdio.h>
#include <stdlib.h>

void board ();
void petunjukpermainan1 ();
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
		board ();
    			
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
    printf("  %c  |  %c  |  %c  \n", &square[1],&square[2],&square[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c  \n", &square[4],&square[5],&square[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c  \n", &square[7],&square[8],&square[9]);

    printf("     |     |     \n");
}

void petunjukpermainan1 (){
	
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

//ciajidun
//kau sudah paham
