#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
/*
    *multipliar matrices
    - ejemplo de arr
        -suma usando punts;
        -promedio;
        -investir;
        -ordenar;
        -dar longitud a la cadena (ptrs);
*/

void multiplyArrs(int arr1[][], int arr2[][], int arr3[][])
{
    int suma = 0;
    for(int i=0;i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            for(int k=0; k<10 ; k++)
            {
                arr3[i][j] = (arr1[i][j] * arr2[i][j]) + (arr1[i][j+1] * arr2[i+1][j]);
            }
        }
    }
}
int main()
{
    srand (time(NULL));
    int arr1[10][10];
    int arr2[10][10];
    int arr3[10][10];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            arr[i][j] = rand%() 10+1;
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        {
            arr2[i][j] = rand%() 10+1;
        }
    }
    multiplyArrs(arr1, arr2, arr3);
/*
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("Valor arr[%d][%d]=%d\n",i,j,arr[i][j]);
        }
    }
*/
    _getch();
    return 0;
}
