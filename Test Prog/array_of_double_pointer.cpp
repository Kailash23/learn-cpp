//  Using an array of pointers or double pointer
#include<iostream>
using namespace std;
void print(int *arr[], int m, int n)  //*arr[] is same as **arr
{
    int i, j;
    for (i = 0; i < m; i++)
      for (j = 0; j < n; j++)
        //printf("%d ", *((arr+i*n) + j));
        cout<<(int)*((arr+i*n) + j)<<" ";

}

int main()
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int m = 3;
    int n = 3;
    print((int **)arr, m, n);
    return 0;
}
