#include <iostream>
using namespace std;

void merge_sort(int a[], int lb1, int ub1, int lb2, int ub2)
{
    int i = lb1, j = lb2;
    int b[100], k = lb1;

    while (i <= ub1 && j <= ub2)
    {
        if (a[i] < a[j])  
        {
            b[k++] = a[i++]; 
        }
        else if (a[i] > a[j])  
        {
            b[k++] = a[j++];   
        }
        else if (a[i] == a[j]) 
        {
            b[k++] = a[i++];
            b[k++] = a[j++];
        }
    }

    while (i <= ub1) 
    {
        b[k++] = a[i++];
    }
    while (j <= ub2) 
    {
        b[k++] = a[j++];
    }

    for (int i = lb1; i < k; i++) 
    {
        a[i] = b[i];
    }
}

void merge(int a[], int lb, int ub)
{
    if (lb < ub)
    {
        int mid = (lb + ub) / 2;

        merge(a, lb, mid);     
        merge(a, mid + 1, ub); 
        merge_sort(a, lb, mid, mid + 1, ub);
    }
}

int main()
{
    int arr[] = {2, 4, 6, 7, 3, 2, 1, 4, 5, 67, 7};
    int a = sizeof(arr) / sizeof(arr[0]);

    merge(arr, 0, a - 1);

    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << " ";
    }
}
