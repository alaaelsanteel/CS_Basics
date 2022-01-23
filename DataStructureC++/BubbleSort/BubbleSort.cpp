#include <iostream>
#include <algorithm>
using namespace std;
void bubbleSort(int arr[], int n)
{
	bool flag = true;
	int c = 0;
	for (int i = 0; i < n - 1; i++)
	{
		for(int j=0;j<n-i-1;j++)
		{ 
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
				flag = false;
		    }
			c++;
		}
		if (flag==true) //sorted array
			break;
	}
	cout << "# of roundd : " << c << endl;
}

void print(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main()
{
	int arr[] = { 100,60,20,50,10,30 };
	int n = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, n);
	print(arr, n);
}

