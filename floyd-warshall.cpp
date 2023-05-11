#include <iostream>
#define MAX_VERTICES 100
#define INF 999999

using namespace std;

void floyd_warshall(int n, int distance[MAX_VERTICES][MAX_VERTICES])
{
    for (int k = 0; k < n; k++)
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                distance[i][k] = min(distance[i][k], distance[i][j] + distance[j][k]);
}

int main()
{
    int n = 4;
    int distance[MAX_VERTICES][MAX_VERTICES];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            distance[i][j] = i == j ? 0 : INF;

    distance[0][1] = distance[1][0] = 1;
    distance[0][2] = distance[2][0] = 2;
    distance[0][3] = distance[3][0] = 10;
    distance[1][2] = distance[2][1] = 3;
    distance[2][3] = distance[3][2] = 4;

    floyd_warshall(n, distance);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << distance[i][j] << " ";
        cout << endl;
    }

    return 0;
}
