#include<iostream>
using namespace std;

int main()
{
    int i, j;

    int matrix1[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int matrix2[3][3] = {{9,8,7}, {6,5,4}, {3,2,10}};

    int matrix_sum[3][3];

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            *(*(matrix_sum + i) + j) = *(*(matrix1 + i) + j) + *(*(matrix2 + i) + j);
        }
    }
    
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cout << *(*(matrix_sum + i) + j) << " ";
        }
        cout << endl;
    }

    return 0;
}