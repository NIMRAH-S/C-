#include<iostream>
using namespace std;

int main()
{
	const int size1 = 15;
	const int size2 = 15;
	char arr1[size1];
	char arr2[size2];

	cout << "Enter 15 character into the array" << endl;

	for (int i = 0; i < size1; i++)
	{
		cin >> arr1[i];
	}

	cout << "The array in reverse order wiil be" << endl;

	for (int i = 0; i < size2; i++)
	{
		arr2[i] = arr1[size1 -1 - i];
		cout << arr2[i];
		cout << endl;
	}
	 
	system("pause");
	return 0;
}