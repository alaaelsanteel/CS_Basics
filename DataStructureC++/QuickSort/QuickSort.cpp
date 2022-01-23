#include <iostream>
using namespace std;
#include <algorithm>
int partition1(int arr[], int iBegin, int jEnd)
{
    int i = iBegin;
    int j = jEnd;
    int pivloc = i;
    while (true)
    {
        while (arr[pivloc] <= arr[j] && pivloc != j)
        {
            j--;
        }
        if (arr[pivloc] > arr[j])
        {
            swap(arr[pivloc], arr[j]);
            pivloc = j;
        }
        else if (pivloc == j)
        {
            break;
        }
        while (arr[pivloc] >= arr[i] && pivloc != i)  // when the pivloc equals to j and i points to the begin
        {
            i++;
        }
        if (arr[pivloc] < arr[i])
        {
            swap(arr[pivloc], arr[i]);
            pivloc = i;
        }
        else if (pivloc == i)
            break;
        return pivloc;
    }
}
void quickSort1(int arr[],int l,int h)
{
    if (l < h)
    {
        int piv = partition1(arr, l, h);
        quickSort1(arr, l, piv);
        quickSort1(arr, piv + 1, h);
    }
}
int partition2(int arr[], int l, int h)
{
    int p = arr[l];
    int i = l;
    int j = h;
    while (i < j)
    {
        do
            i++;
        while (arr[i] < p);
            do
                j++;
            while (arr[j] > p);
            if (i < j)
            {
                swap(arr[i], arr[j]);
            }
            swap(arr[l], arr[j]);
            return j;

    }
}
void quickSort2(int arr[], int l, int h)
{
    if (l < h)
    {
        int piv = partition2( arr, l, h);
        quickSort2(arr, l, piv);  //right
        quickSort2(arr, piv + 1, h); // left

    }
}

int main()
{

    int arr[] = {2,-1,4,7,0};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort2(arr, 0, n);
    for(int i = 0; i < n;i++)
    {
        cout << arr[i] << " ";
    }
}