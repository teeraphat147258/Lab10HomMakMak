#include<iostream>
using namespace std;


void printO(int a,int b){
	if(a>0 and b>0){
		for(int i = 0;i<a;i++){
			for(int j = 0;j<b;j++){
				cout << "O";
		}
		cout << "\n";
		}
	}else{
		cout << "Invalid input";
	}
}


int main(){

	
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
