#include <iostream>
using namespace std;

void quicksort(int arr[], int left, int right)
{
    int i = left, j = right;
    int pivot = arr[left]; 

  
    while (i <= j)
    {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;

        if (i <= j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    };

    
    if (left < j)
        quicksort(arr, left, j);
    if (i < right)
        quicksort(arr, i, right);
}

int main()
{
    int arr[] = {5, 2, 9, 3, 7, 6, 1, 8, 4};
    int n = sizeof(arr) / sizeof(arr[0]); 
    
    quicksort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
