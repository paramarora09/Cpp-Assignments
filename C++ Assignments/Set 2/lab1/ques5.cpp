#include <iostream>
int main(){
	using namespace std;
	int choice = 1;
	while( choice == 1 ){

		int a;

		cout << "Enter a number to check even or odd" << endl;
		cin >> a;		//input number

		//check whether number is even or odd

		if( a%2 == 0 ){
			cout << "Your number is even" << endl;
		}
		else{
			cout << "Your number is odd" << endl;
		}

		cout << "Want to check more : 1 for yes and 0 for no" << endl;

		cin >> choice;
	}

	cout << "I hope you checked all your numbers" << endl;

	return 0;
}