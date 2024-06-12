#include <iostream>
#include <vector>
using namespace std;

int passengerScore (int passengers, int enteredPassengers, int outPassengers) 
{
	passengers +=  enteredPassengers - outPassengers;
	return passengers;
}
int money (int totalMoney, int enteredPassengers) 
{
	totalMoney += enteredPassengers * 20;
	return totalMoney;
}
void arrival (string station, int passengers)
{
	cout << "We arrive at the bus stop " << station
        << ". Passengers in  compartment: " << passengers << ".\n";
   
}
void departure (string station, int passengers)
{
	cout << "We are leaving the bus stop " << station
    << ". Passengers in  compartment: " << passengers << ".\n";
}
void end(int totalMoney) {
	cout << "All passengers got off at the bus stop " << endl;
	cout << "-----Results------\n";
	cout << "Total earned: " << totalMoney << " RUB.\n";
	cout << "Driver's salary: " << totalMoney / 4 << " RUB.\n";
	cout << "Fuel costs: " << totalMoney / 5 << " RUB.\n";
	cout << "Taxes: " << totalMoney / 5 << " RUB.\n";
	cout << "Car repair costs: " << totalMoney / 5 << " RUB.\n";
	cout << "Total income: " << totalMoney - ((totalMoney / 5 * 3) + totalMoney / 4) << " RUB.\n";
}
void enter() 
{ 
	cout << "How many passengers get in at the bus stop? "; 
}
void out() 
{ 
	cout << "How many passengers got out at the bus stop? "; 
}

int main() 
{
	vector <string> station {"Programmers Street","Algorithms Prospectus","Turing Avenue","Stroustrup House"};
	int totalMoney = 0;
	int passengers = 0;
	cout << "  Minibus simulator\n";
	cout << "************************\n";
	cout << "----------Go----------\n";
	arrival(station[0], passengers);
	int outPassengers = 0;
	enter();
	int enteredPassengers;
	cin >> enteredPassengers;
	passengers = passengerScore(passengers, enteredPassengers, outPassengers);
	totalMoney = money(totalMoney, enteredPassengers);
	departure(station[0], passengers);

	cout << "----------Go----------\n";
	arrival(station[1], passengers);
	out();
	cin >> outPassengers;
	enter();
	cin >> enteredPassengers;
	passengers = passengerScore(passengers, enteredPassengers, outPassengers);
	totalMoney = money(totalMoney, enteredPassengers);
	departure(station[1], passengers);

	cout << "----------Go----------\n";
	arrival(station[2], passengers);
	out();
	cin >> outPassengers;	
	enter();
	cin >> enteredPassengers;
	passengers = passengerScore(passengers, enteredPassengers, outPassengers);
	totalMoney = money(totalMoney, enteredPassengers);
	departure(station[2], passengers);

	cout << "----------Go----------\n";
	arrival(station[3], passengers);
	end(totalMoney);
	system("pause");
	return 0;
}
