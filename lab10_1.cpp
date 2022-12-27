#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	double il, rate, ppy, prevBal, interest, total, newBal;
	int year = 1;
	cout << "Enter initial loan: ";
	cin >> il;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> ppy;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	prevBal = il;
	do{
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << year; 
		cout << setw(13) << left << prevBal;
		interest = (rate/100.0)*prevBal;
		cout << setw(13) << left << interest;
		total = prevBal + interest;
		if(total < ppy)	ppy = total;
		cout << setw(13) << left << total;
		cout << setw(13) << left << ppy;
		newBal = total - ppy;
		cout << setw(13) << left << newBal;
		cout << "\n";
		prevBal = newBal;
		year++;	

	}while(newBal > 0);
	return 0;
}
