/*
    Lab05 Task06
    Code By  : Pawan Kumar
    CMS : 023-21-0136
    Section-C

        Greedy Approach Algorithm to reach particular Gaol
*/

#include <iostream>
using namespace std;
int main()
{
    int twoD[4][4] = {{1, 2, 3, 4},
                      {4, 5, 6, 7},
                      {1, 4, -1, 8},
                      {-1, 2, 4, 10}};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            cout << twoD[i][j] << " ";
        cout << endl;
    }

    int start = twoD[0][0], goal = twoD[3][3];
    int i = 0, j = 0;
    while (start != goal)
    {
        if (twoD[i][j + 1] > twoD[i + 1][j])
        {
            start = twoD[i][j + 1];
            j++;
        }

        else
        {
            if (twoD[i][j + 1] == -1 && twoD[i + 1][j] == -1 && twoD[i + 1][j] == -1)
            {
                cout << "No possible Path to Move : ";
                break;
            }
            start = twoD[i + 1][j];
            i++;
        }
        if (start == goal)
        {
            cout << start << endl;
            break;
        }
    }

    return 0;
}