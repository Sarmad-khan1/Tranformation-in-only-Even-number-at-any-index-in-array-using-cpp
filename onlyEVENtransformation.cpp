#include <iostream>
using namespace std;
void fxn(int arrat[], int size, int n);
int main()
{
	int size;
	cout << "Enter the size: ";
	cin >> size;
	int n;
	cout << "Enter transformations: ";
	cin >> n;
	int array[size];

	for (int i = 0; i < size; i++)
	{
		cout << "Enter elements in the array: ";
		cin >> array[i];
	}
	fxn(array, size, n);
	cout<<"Modified array: ";
	for(int i=0; i<size; i++){
		cout<<array[i]<<" ";
	}
	return 0;
}
void fxn(int array[], int size, int n)
{
	for(int a=0; a<size; a++){
		for(int i=0; i<size; i++)
		{
			if(array[i] % 2 == 0)
			{
				array[i] = array[i] + 3;
			}
			else
			{
				array[i] = array[i];
			}
		}
	}
}