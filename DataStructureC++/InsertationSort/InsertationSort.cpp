#include <iostream>
using namespace std;

void insertationSort(int arr[], int n)
{
    int key,j;                  //0 1  2  3  4  5  6
    for (int i = 1; i < n; i++)//80 90 60 30 50 70 40
    {
        key = arr[i]; 
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1]=key;

    }
}
void print(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

}
int main()
{
    int arr[] = { 80,90,60,30, 50, 70, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    insertationSort(arr, n);
    print(arr, n);

}

