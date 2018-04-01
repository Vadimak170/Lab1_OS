#include <iostream>
#include <stdlib.h>
using namespace std;
typedef struct {double mas[4096];} a;
void overflow(a data, long counter){
    counter++;
    cout<<counter<<"\n";
    overflow(data,counter);
    }
int main()
{
    long counter=0;
    a data;
    overflow(data,counter);
    return 0;
}
