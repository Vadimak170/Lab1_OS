#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{   int i = 0;
    float **a=new float *[46340 ];
    do
    {
        a[i]=new float[46340];
        cout<<i<<" ";
        i++;
    }while (a[i-1]!=NULL);
    for(int j=0;j<=i;j++)
        delete []a[j];
    delete a;
    return 0;
}
