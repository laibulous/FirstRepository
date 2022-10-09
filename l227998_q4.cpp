//#include <iostream>
//using  namespace std;
//int main()
//{
//	int paper = 1, rock = 2, scissors = 3;
//	cout << "let's play rock, paper, scissors" << endl;
//	cout << "enter 1 for paper, 2 for rock and 3 for scissors.\n";
//	cout << "====================================" << endl;
//	int player1 = 0, player2 = 0;
//	cout << "enter first player's choice:\t";
//	cin >> player1;
//	cout << "enter second player's choice:\t";
//	cin >> player2;
//	const string draw = "it is a draw",
//		win1 = "player 1 is the winner.",
//		win2 = "player 2 is the winner.";
//	if(player1==paper&&player2==paper)
//	{
//		cout << draw;
//	}
//	else if (player1 == paper && player2 == rock)
//	{
//		cout << win1;
//	}
//	else if(player1==paper&&player2==scissors)
//	{
//		cout << win2;
//	}
//	else if (player1 == rock && player2 == paper) {
//		cout << win2;
//	}
//	else if(player1==rock&&player2==rock)
//	{
//		cout << draw;
//	}
//	else if(player1==rock&&player2==scissors)
//	{
//		cout << win1;
//	}
//	else if(player1==scissors&&player2==paper)
//	{
//		cout << win1;
//	}
//	else if(player1==scissors&&player2==rock)
//	{
//		cout << win2;
//	}
//	else if(player1==scissors&&player2==scissors)
//	{
//		cout << draw;
//	}
//	else
//	{
//	cout << "invalid input.";
//}
//}