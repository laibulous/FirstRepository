//#include <iostream>
//using namespace std;
//int main()
//{
//	int units = 0;
//	const float original_price = 99;
//	cout << "Welcome to our new Software Company\n";
//	cout << "How many units did you sell?" << endl;
//	cin >> units;
//	if (units > 0) {
//		if (units < 10) {
//			cout << "The Total cost for this purchase is $" << original_price;
//		}
//		else if (units >= 10 && units <= 19)
//		{
//			double discount1 = (original_price * 20)/100;
//			double total1 = original_price - discount1;
//			cout << "The Total cost for this purchase is $" << total1 << endl;
//
//		}
//		else if (units >= 20 && units <= 49)
//		{
//			double discount2 = (original_price * 30) / 100;
//			double total2 = original_price - discount2;
//			cout << "The Total cost for this purchase is $" << total2 << endl;
//		} 
//		else if (units >= 50 && units <= 99) {
//			double discount3 = (original_price * 40) / 100;
//			double total3 = original_price - discount3;
//			cout << "The Total cost for this purchase is $" << total3 << endl;
//
//		}
//		else if (units >= 100) {
//			double discount4 = (original_price * 0.5);
//			double total4 = original_price - discount4;
//			cout << "The Total cost for this purchase is $" << total4 << endl;
//
//		}
//
//
//	}
//	else
//	{
//		cout << "Invalid Input!";
//	}
//	
//}