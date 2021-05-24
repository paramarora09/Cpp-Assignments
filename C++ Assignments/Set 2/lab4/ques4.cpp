#include<iostream>
using namespace std;
int main() {
	int x, n,min;
	cout << "Enter the number of items:" << "\n";
	cin >>n;
	int *arr = new int(n);
	cout << "Enter " << n << " items" << endl;
	for (x = 0; x < n; x++) {
		cin >> arr[x];
	}
min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }

cout<<"Smallest Element" <<min;
return 0;
}