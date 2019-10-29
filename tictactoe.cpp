#include <iostream>

using namespace std;

int num,num2;
bool loop = true;

char choices[10] = {'0','1','2','3','4','5','6','7','8','9'};


void board();
void choiceX();
void choiceO();
void check();
void turn();
void ticGame();


int main()
{
	ticGame();
	return 0;
}

void ticGame(){
	int contin;
	
	cout << "_________________________________________________________________\n";
	cout << "| ooooo  xxx   ooo   xxxxx   ooo    xxx   ooooo    xxx   ooooo  |\n";
	cout << "|   o     x   o   o    x    o   o  x   x    o     x   x  o      |\n";
	cout << "|   o     x   o        x    o   o  x        o     x   x  o      |\n";	
	cout << "|   o     x   o        x    ooooo  x        o     x   x  oooo   |\n";
	cout << "|   o     x   o   o    x    o   o  x   x    o     x   x  o      |\n";	
	cout << "|   o    xxx   ooo     x    o   o   xxx     o      xxx   ooooo  |\n";	
	cout << "|                                                               |\n";
	cout << "|                                                               |\n";	
	cout << "|         xxx        xxx        oooooooo     PLAYER1 = X        |\n";
	cout << "|         xxx        xxx      oo        oo                      |\n";
	cout << "|            xxx   xxx        oo        oo   PLAYER2 = O        |\n";
	cout << "|               xxx           oo        oo                      |\n";
	cout << "|            xxx   xxx        oo        oo                      |\n";
	cout << "|         xxx         xxx     oo        oo   Press ENTER key    |\n";
	cout << "|         xxx         xxx       oooooooo     to continue...     |\n";
	cout << "|_______________________________________________________________|";
	cin.ignore();
	cout << "|                          Tic-tac-toe                          |\n";	
	cout << "|   (American English), noughts and crosses (British English),  |\n";	
	cout << "|   or Xs and Os is a paper-and-pencil game for two players,    |\n";	
	cout << "|   X and O, who take turns marking the spaces in a 3×3 grid.   |\n";	
	cout << "|   The player who succeeds in placing three of their marks in  |\n";	
	cout << "|   a horizontal, vertical, or diagonal row is the winner.      |\n";	
	cout << "|                                                               |\n";		
	cout << "|              Press ENTER to start the game!...                |\n";		
	cout << "|_______________________________________________________________|";								
	cin.ignore();	
	system ("cls");
	board();
	turn();
	
	
	

}

void turn()
{
	
	while (loop){
		if(!loop){
			break;
		}else {
			while (1){
				cout << "\nPlayer 1 [X] : ";
				cin >> num;
				if ((num > 0) && (num < 10)) {
					if ((choices[num] == 'O') || (choices[num] == 'X' )){
					cout << "ALREADY OCCUPIED. PLEASE TRY AGAIN";
					} else {
						choices[num] = 'X';
						break;
					}						
				}else {
					cout << "INVALID NUMBER. PLEASE TRY AGAIN!";
				}
			}
		system ("cls");
		board();
		check();
		}
		if(!loop){
			break;	
		}else 
		{
			while (1){
				cout << "\nPlayer 2 [0] : ";
				cin >> num2;
				if ((num2 > 0) && (num2 < 10)){
					if ((choices[num2] == 'O') || (choices[num2] == 'X' )){
					cout << "ALREADY OCCUPIED. PLEASE TRY AGAIN";
					} else {
						choices[num2] = 'O';
						break;
					}
				}else {
					cout << "INVALID NUMBER. PLEASE TRY AGAIN!";
				}
			}
			system ("cls");
			board();
			check();	
		}	
	}

}

void board(){
	cout << "        	___________________";
	cout << "\n                |     |     |     |";	
	cout << "\n                |  "<<choices[1]<<"  |  "<<choices[2]<<"  |  "<<choices[3]<<"  |";
	cout << "\n                |     |     |     |";
	cout << "\n                |  "<<choices[4]<<"  |  "<<choices[5]<<"  |  "<<choices[6]<<"  |";
	cout << "\n                |     |     |     |";
	cout << "\n                |  "<<choices[7]<<"  |  "<<choices[8]<<"  |  "<<choices[9]<<"  |";
	cout << "\n	        |_________________|";
}

void check(){
	if(choices[1] == 'X' && choices[2] == 'X' && choices[3] == 'X')
	{
		cout << "\nPLAYER 1 WON!";
		loop = false;
	} else if(choices[4] == 'X' && choices[5] == 'X' && choices[6] == 'X' ){
		cout << "\nPLAYER 1 WON!";
		loop = false ;
	}else if(choices[7] == 'X' && choices[8] == 'X' && choices[9] == 'X' ){
		cout << "\nPLAYER 1 WON!";
		loop = false ;
	}else if(choices[1] == 'X' && choices[4] == 'X' && choices[7] == 'X' ){
		cout << "\nPLAYER 1 WON!";
		loop = false ;
	}else if(choices[2] == 'X' && choices[5] == 'X' && choices[8] == 'X' ){
		cout << "\nPLAYER 1 WON!";
		loop = false ;
	}else if(choices[3] == 'X' && choices[6] == 'X' && choices[9] == 'X' ){
		cout << "\nPLAYER 1 WON!";
		loop = false ;
	}else if(choices[1] == 'X' && choices[5] == 'X' && choices[9] == 'X' ){
		cout << "\nPLAYER 1 WON!";
		loop = false ;
	}else if(choices[3] == 'X' && choices[5] == 'X' && choices[7] == 'X' ){
		cout << "\nPLAYER 1 WON!";
		loop = false ;
	}else if(choices[1] == 'O' && choices[2] == 'O' && choices[3] == 'O')
	{
		cout << "\nPLAYER 2 WON!";
		loop = false ;
	} else if(choices[4] == 'O' && choices[5] == 'O' && choices[6] == 'O' ){
		cout << "\nPLAYER 2 WON!";
		loop = false ;
	}else if(choices[7] == 'O' && choices[8] == 'O' && choices[9] == 'O' ){
		cout << "\nPLAYER 2 WON!";
		loop = false ;
	}else if(choices[1] == 'O' && choices[4] == 'O' && choices[7] == 'O' ){
		cout << "\nPLAYER 2 WON!";
		loop = false ;
	}else if(choices[2] == 'O' && choices[4] == 'O' && choices[8] == 'O' ){
		cout << "\nPLAYER 2 WON!";
		loop = false ;
	}else if(choices[3] == 'O' && choices[6] == 'O' && choices[9] == 'O' ){
		cout << "\nPLAYER 2 WON!";
		loop = false ;
	}else if(choices[1] == 'O' && choices[5] == 'O' && choices[9] == 'O' ){
		cout << "\nPLAYER 2 WON!";
		loop = false ;
	}else if(choices[3] == 'O' && choices[5] == 'O' && choices[7] == 'O' ){
		cout << "\nPLAYER 2 WON!";
		loop = false ;
	}else if(((choices[1] == 'X') || (choices[1] == 'O')) && ((choices[2]== 'X') || (choices[2] == 'O')) && ((choices[3]== 'X') || (choices[3] == 'O')) && ((choices[4]== 'X') || (choices[4] == 'O')) && 
	((choices[5]== 'X') || (choices[5] == 'O')) && ((choices[6]== 'X') || (choices[6] == 'O')) && ((choices[7]== 'X') || (choices[7] == 'O')) && ((choices[8]== 'X') || (choices[8] == 'O')) && ((choices[9]== 'X') || (choices[9] == 'O')))
	{
	cout << "\nDRAW DRAW DRAW";
	loop = false;
	
	}
		
}
	//Author of this game: Mark Angelo Capili;


