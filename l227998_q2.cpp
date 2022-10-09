//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	float one{ 1 }, two{ 2 }, three{ 3 }, four{ 4 }, five{ 5 },
//		one_price{1800},two_price{2000},three_price{2200},four_price{500},five_price{2500};
//	string error= "Invalid Response!" ;
//	cout << "CODE \t MEAL \t\t PRICE PER KG IN PKR" << endl;
//	cout << one << " \t Chicken Handi \t \t "<<one_price<<"\n";
//	cout << two << " \t Chicken Karahi \t "<<two_price<<"\n";
//	cout << three << " \t Chicken Tikka \t\t "<<three_price<<"\n";
//	cout << four << " \t Chicken Haleem \t "<<four_price<<"\n";
//	cout << five << " \t Creamy Chicken \t "<<five_price<<"\n";
//	cout << "\n***************************************\n";
//	int amount1{ 0 },amount2{0};
//	cout << "Please enter your choice: ";
//	cin >> amount1;
//	if (amount1 < 6 && amount1>0)
//	{
//		cout << "\n***************************************\n";
//		float quantity{ 0 };
//		cout << "Please enter quantity in kg: ";
//		cin >> quantity;
//		if (quantity > 0)
//		{
//			cout << "\n************************************\n";
//			cout << "Please enter your desired currency: " << one << " for pkr, " << two << " for Dollar, " << three << " for Euro: ";
//			cin >> amount2;
//			if(amount2<4&&amount2>0)
//			{
//				cout << "\n********************************************\n";
//				if (amount2 == one) {
//					if (amount1== one)
//
//					{
//						double tax1 = one_price * 2 / 100,
//							total1 = (quantity * one_price) + tax1;
//						cout << "Meal Price: Rs." << quantity * one_price << endl;
//						cout << "Sale Tax: Rs." << tax1 << endl;
//						cout << "Total Price: Rs." << total1 << endl;
//					}
//					else if (amount1 == two)
//					{
//						double tax2 = two_price * 2 / 100,
//							total2 = (quantity * two_price) + tax2;
//						cout << "Meal Price: Rs." << quantity * two_price << endl;
//						cout << "Sale Tax: Rs." << tax2 << endl;
//						cout << "Total Price: Rs." << total2 << endl;
//
//					}
//					else if (amount1 == three)
//					{
//						double tax3 = three_price * 2 / 100,
//							total3 = (quantity * three_price) + tax3;
//						cout << "Meal Price: Rs." << quantity * three_price << endl;
//						cout << "Sale Tax: Rs." << tax3 << endl;
//						cout << "Total Price: Rs." << total3 << endl;
//
//					}
//					else if (amount1 == four)
//					{
//						double tax4 = 0,
//							total4 = (quantity * three_price) + tax4;
//						cout << "Meal Price: Rs." << quantity * four_price << endl;
//						cout << "Sale Tax: Rs." << tax4 << endl;
//						cout << "Total Price: Rs." << total4 << endl;
//					}
//					else if (amount1 == five)
//					{
//						double tax5 = five_price * 2 / 100,
//							total5 = (quantity * three_price) + tax5;
//						cout << "Meal Price: Rs." << quantity * five_price << endl;
//						cout << "Sale Tax: Rs." << tax5 << endl;
//						cout << "Total Price: Rs." << total5 << endl;
//					}
//				}
//		else if(amount2==two){
//					if (amount1 == one)
//
//					{
//						double tax1 = (one_price*0.0045) * 2 / 100,
//							total1 = (quantity * one_price*0.0045) + tax1;
//						cout << "Meal Price: $" << quantity * one_price*0.0045 << endl;
//						cout << "Sale Tax: $" << tax1 << endl;
//						cout << "Total Price: $" << total1 << endl;
//					}
//					else if (amount1 ==two)
//					{
//						double tax2 = (two_price* 0.0045) * 2 / 100,
//							total2 = (quantity * two_price*0.0045) + tax2;
//						cout << "Meal Price: $" << quantity * two_price *0.0045<< endl;
//						cout << "Sale Tax: $" << tax2 << endl;
//						cout << "Total Price: $" << total2 << endl;
//
//					}
//					else if (amount1 == three)
//					{
//						double tax3 = (three_price* 0.0045) * 2 / 100,
//							total3 = (quantity * three_price* 0.0045) + tax3;
//						cout << "Meal Price: $" << quantity * three_price* 0.0045 << endl;
//						cout << "Sale Tax: $" << tax3 << endl;
//						cout << "Total Price: $" << total3 << endl;
//
//					}
//					else if (amount1 == four)
//					{
//						double tax4 = 0,
//							total4 = (quantity* 0.0045 * three_price) + tax4;
//						cout << "Meal Price: $" << quantity * four_price * 0.0045 << endl;
//						cout << "Sale Tax: $" << tax4 << endl;
//						cout << "Total Price: $" << total4 << endl;
//					}
//					else if (amount1 == five)
//					{
//						double tax5 =( five_price* 0.0045) * 2 / 100,
//							total5 = (quantity * three_price* 0.0045) + tax5;
//						cout << "Meal Price: $" << quantity * five_price* 0.0045 << endl;
//						cout << "Sale Tax: $" << tax5 << endl;
//						cout << "Total Price: $" << total5 << endl;
//					}
//				}
//		else if (amount2 == three) {
//					if (amount1 == one)
//
//					{
//						double tax1 = (one_price * 0.0045) * 2 / 100,
//							total1 = (quantity * one_price * 0.0045) + tax1;
//						cout << "Meal Price: EUR" << quantity * one_price * 0.0045 << endl;
//						cout << "Sale Tax: EUR" << tax1 << endl;
//						cout << "Total Price: EUR" << total1 << endl;
//					}
//					else if (amount1 == two)
//					{
//						double tax2 = (two_price * 0.0045) * 2 / 100,
//							total2 = (quantity * two_price * 0.0045) + tax2;
//						cout << "Meal Price: EUR" << quantity * two_price * 0.0045 << endl;
//						cout << "Sale Tax: EUR" << tax2 << endl;
//						cout << "Total Price: EUR" << total2 << endl;
//
//					}
//					else if (amount1 == three)
//					{
//						double tax3 = (three_price * 0.0045) * 2 / 100,
//							total3 = (quantity * three_price * 0.0045) + tax3;
//						cout << "Meal Price: EUR" << quantity * three_price * 0.0045 << endl;
//						cout << "Sale Tax: EUR" << tax3 << endl;
//						cout << "Total Price: EUR" << total3 << endl;
//
//					}
//					else if (amount1 == four)
//					{
//						double tax4 = 0,
//							total4 = (quantity * 0.0045 * three_price) + tax4;
//						cout << "Meal Price: EUR" << quantity * four_price * 0.0045 << endl;
//						cout << "Sale Tax: EUR" << tax4 << endl;
//						cout << "Total Price: EUR" << total4 << endl;
//					}
//					else if (amount1 == five)
//					{
//						double tax5 = (five_price * 0.0045) * 2 / 100,
//							total5 = (quantity * three_price * 0.0045) + tax5;
//						cout << "Meal Price: EUR" << quantity * five_price * 0.0045 << endl;
//						cout << "Sale Tax: EUR" << tax5 << endl;
//						cout << "Total Price: EUR" << total5 << endl;
//					}
//				}
//				
//			}
//			else
//			{
//				cout << error;
//			}
//		}
//		else {
//			cout << error;
//		}
//
//	}
//	else
//	{
//		cout << error;
//	}
//	
//
//	
//	return 0;
//}