#include <iostream>
using namespace std;

int main()
{
    float weight[3] = {5, 2, 10};
    float profit[3] = {1000, 200, 300};
    float x[3]; 
    float capacity = 15.0; 

    for (int i = 0; i < 3; i++)
    {
        if (weight[i] <= capacity) 
        {
            x[i] = 1; 
            capacity = capacity - weight[i]; 
        }
        else
        {
            x[i] = capacity / weight[i];
            capacity = 0;
            break;
        }
    }

    float sum = 0;
    for (int i = 0; i < 3; i++)
        sum = sum + x[i] * profit[i];

    cout << "Profit is " << sum;
}
