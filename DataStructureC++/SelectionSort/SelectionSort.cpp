#include <iostream>
using namespace std;
void selectionsort(int arr[], int n)
{
    int minIndx;
    for(int i=0;i<n-1;i++)  //60 40 50 30 10 20
    {
        minIndx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndx])
                minIndx = j;
                swap(arr[minIndx], arr[i]);

      }
    }
}
void print (int arr[],int size)
{

    for(int i=0;i<size;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

}
void swap(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    int arr[] = { 60,40 ,50,30,10,20 };
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionsort(arr, n);
    cout << "Array after sorting : \n";
    print(arr, n);

}
