#include <stdio.h>
#include <stdlib.h>

void board ();
int petunjukpermainan1 ();
int petunjukpermainan2 ();
void mainmenu();
//procedure mainmenu(output modepermainan : integer)
char square[10] = {'o','1','2','3','4','5','6','7','8','9'};

int main (){

	int modepermainan;	
	
	printf ("\n\nHallo, Selamat Datang!\nKetik apa saja dan tekan enter untuk melanjutkan ke Main Menu");

	
	menu : mainmenu();
	scanf ("%d", &modepermainan);
	
	if (modepermainan == 1){
		//DEKLARASI
		int player = 1,i,choice;
		char mark;
		int pemenang;
		int skorplayer1;
		int skorplayer2;
		int judgementcalls;
		void checkwin (int player, int* pemenang);
		void skormode1 (int pemenang, int* skorplayer1, int* skorplayer2);
		void scorejudge (int* judgementcalls, int* skorplayer1, int* skorplayer2);
		
		mark=(player == 1) ? 'X' : 'O';
		
		petunjukpermainan1 ();
		scanf ("\n%d");
		
		do {
		rematch : board ();
		skormode1 (pemenang,&skorplayer1,&skorplayer2);
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
			pemenang = 0;
		}
		if (pemenang == 2){
			printf ("Selamat! Player %d menang!", pemenang);
			pemenang = 0;
		}
		if (pemenang == 3){
			printf ("Kalian sama kuat, hasilnya seri!");
			pemenang = 0;
		}
		
		player++;
//		printf ("\n\n %d", pemenang);
//		scanf ("%d");
		
		scorejudge (&skorplayer1,&skorplayer2,&judgementcalls);
		} while (judgementcalls==0);
		int lanjut;
		system ("cls");
		if (judgementcalls == 1 || judgementcalls == 2){
			printf ("\n\n\nSELAMAT PLAYER %d TELAH MEMENANGKAN GAME INI!\n\n", &judgementcalls);
			printf ("Silakan ketik angkanya untuk melanjutkan\n1. Rematch\n2. Main Menu\n3.Exit");
			scanf ("%d", &lanjut);
		if (judgementcalls == 3){
			
		}
			if (lanjut == 1){
				goto rematch;
			}
			else if (lanjut == 2){
				goto menu;
			}
			else if (lanjut == 3){
				return 0;
			}
			else {
				printf ("\nAngka tidak valid");
			}
		}
		if (judgementcalls == 3){
			printf ("\n\n\nKEDUA PLAYER SAMA KUAT! HASILNYA SERI!\n\n");
			
		}
	}
	else if (modepermainan == 2){
		int level;
		
		petunjukpermainan2 ();
		scanf ("\n%s");
		
		system ("cls");
		printf ("\n\n1. Easy\n2. Medium\n3. Hard");
		printf ("\nPilih Tingkat Kesulitan : ");
		scanf ("%d", &level);
		
		if (level == 1){
			void comeasy ();
			int player = 1,i,choice;
			char mark;
			int pemenang;
			int skorplayer1;
			int skorplayer2;
			void checkwin (int player, int* pemenang);
			void skormode2 (int pemenang, int* skorplayer1, int* skorplayer2);
			
			do{
				board ();
				skormode2(pemenang,&skorplayer1,&skorplayer2);
				pemenang = 0;
				player=(player%2)?1:2;
	        printf ("\n\nPlayer %d masukkan nomor : ", player);
	        scanf ("%d", &choice);
				
				
			}while(pemenang == 0);
				
			
		}
		if (level == 2){
			
		}
		if (level == 3){
			
		}
//		else {
//			printf ("\n\nNomor Level tidak valid");
//		}
		
		
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

void skormode1 (int pemenang, int* skorplayer1, int* skorplayer2){
	*skorplayer1 = 4;
	*skorplayer2 = 4;
	
	if (pemenang == 1){
		skorplayer1 = skorplayer1 + 4;
		skorplayer2 = skorplayer2 - 2;
	}
	if (pemenang == 2){
		skorplayer2 = skorplayer2 + 4;
		skorplayer1 = skorplayer1 - 2;
	}
	if (pemenang == 3){
		skorplayer1 = skorplayer1 - 1;
		skorplayer2 = skorplayer2 - 1;
	}
	printf ("\nBOX POINTS\n");
	printf ("PLAYER 1 (%d) VS (%d) PLAYER 2", &skorplayer1, &skorplayer2);
}

void skormode2 (int pemenang, int* skorplayer1, int* skorplayer2){
	*skorplayer1 = 0;
	*skorplayer2 = 0;
	
	if (pemenang == 1){
		skorplayer1 = skorplayer1 + 1;
	}
	if (pemenang == 2){
		skorplayer2 = skorplayer2 + 1;
	}
	if (pemenang == 3){
		skorplayer1 = skorplayer1 - 0;
		skorplayer2 = skorplayer2 - 0;
	}
	printf ("\nBOX POINTS\n");
	printf ("PLAYER 1 (%d) VS (%d) PLAYER 2", skorplayer1, skorplayer2);
}

void scorejudge (int* judgementcalls, int* skorplayer1, int* skorplayer2){
	if (*skorplayer1 <= 0 && *skorplayer2 <= 0){
		*judgementcalls = 3;	//jika skor keduanya 0, hasil seri
	}
	
	if (*skorplayer1 <= 0){		//jika skorplayer1 0 atau kurang dari 0, player 2 menang
		*judgementcalls = 2;
	}
	if (*skorplayer2 <= 0){		//jika skorplayer2 0 atau kurang dari 0, player 1 menang
		*judgementcalls = 1;
	}
}

int petunjukpermainan2 (){
	system ("cls");
	printf ("\n\n=====VS Computer===== \n Selamat datang di mode permainan VS Computer!");
	printf ("Dalam mode permainan ini, kamu akan melawan computer, tingkat kesuliatn dapat kamu sesuaikan setelah halaman ini.");
	printf ("\nEasy untuk computer tingkat mudah, Medium untuk computer tingkat menengah, dan Hard untuk computer tingkat tinggi.\n");
	printf ("Peraturannya sederhana\n");
	printf ("Kalian bermain tic tac toe, yang lebih dahulu mendapatkan tanda sebaris, pemenang.");
	printf ("\nJika menang kalian dapat 1 poin, begitu juga computer. Poin dimulai dari 0 untuk pemain dan computer.\n");
	printf ("jika kalah dan seri kalian dapat 0 poin dan giliran yang melangkah awal akan berganti \n(sebelumnya X, jika seri, di permainan selanjutnya O melangkah di awal)");
	printf ("\n\nBermainlah sepuasnya di mode ini!\n");	
	printf ("\nSelamat bermain, untuk melanjutkan ketik 1 dan enter");
}
