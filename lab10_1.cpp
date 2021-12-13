#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
#include<cmath>
using namespace std;

int main(){	
	double loan,rate,pay;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	int year =0;
	double Prevbalance,Interest,Total,Payment,Newbalance;
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";	
	Prevbalance = loan;

	do{
		Interest = (Prevbalance*rate)/100;
		Total = Prevbalance+Interest;	
		Payment = pay;
		if(Payment>=Total){
				Payment=Total;
			}
		Newbalance = Total-Payment;
		year++;
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << year; 
		cout << setw(13) << left << Prevbalance;
		cout << setw(13) << left << Interest;
		cout << setw(13) << left << Total;
		cout << setw(13) << left << Payment;
		cout << setw(13) << left << Newbalance;
		cout << "\n";	
		Prevbalance = Newbalance;
		

	}while(Newbalance > 0);
	
	
	
	return 0;
}
