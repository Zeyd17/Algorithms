#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int matrix_dimensions[] = {5, 4, 6, 2, 7}; 
    int m[n][n] = {0};                         
    int split_points[n][n] = {0};              
    int j, min_val, tmp;

    
    for (int diag = 1; diag < n - 1; diag++) 
    {
       
        for (int i = 1; i < n - diag; i++) 
        {
            j = i + diag; 
            min_val = INT_MAX;

            
            for (int k = i; k <= j - 1; k++)
            {
                
                tmp = m[i][k] + m[k + 1][j] + matrix_dimensions[i - 1] * matrix_dimensions[k] * matrix_dimensions[j];

                if (tmp < min_val)
                {
                    min_val = tmp;
                    split_points[i][j] = k;
                }
            }
            m[i][j] = min_val;
        }
    }

    cout << "Minimum number of scalar multiplications: " << m[1][n - 1] << endl;

    
    cout << "Split points for minimum values: " << endl;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            cout << split_points[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
