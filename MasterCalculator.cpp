#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int choice;
	 
	cout << "Hi  there!" << endl;
    cout << "This is the Master Calculator project by Eman" << endl;
	cout << "You can choose among the three operations" << endl;
	cout << "For addition, type 1" << endl;
	cout << "For exponential, type 2" << endl;
	cout << "For square root, type 3" << endl;
	cin >> choice;
	
		if (choice == 1){
			int V1;
			int V2;
			
				cout << "You have choosen addition" << endl;
				cout << "Enter your first value : ";
				cin >> V1; 
				cout << "Enter your second value : ";
				cin >> V2;
				cout << V1 << " + " << V2 << " = " << V1 + V2 << endl;
					
		}
	
		else if (choice == 2){
			int M;
			int N;
			
				cout << "You have choosen exponential" << endl;
				cout << "Enter the number that you want to raise : ";
				cin >> M;
				cout << "enter the power : ";
				cin >> N;
				cout << M << " to the power of " << N << " is " << pow(M, N) << endl;			
		}
		
		else if (choice == 3){
			int Value;
				
				cout << "You have choosen squared roots" << endl;
				cout << "Enter the value that you want to find the squared roots : ";
				cin >> Value;
				cout << "The squared roots of " << Value << " is " << sqrt(Value) << endl;				
		}	 
	
	return 0;
}
