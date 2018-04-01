#include <iostream>
#include <cmath>
#include <math.h>
#include <conio.h>
#include <fstream>
using namespace std;

int main()
{
    float rez;
    cout << "Start?";
    getchar();
    for (int i(1); i < 70000000; i++) {
        rez = 5 * (float)(i / 2) + (float)cos(i) / (float)sin(i) - sqrt(3 / 14);
    }
    cout << "FPU ends" << endl;
    getchar();
    for (int i(1); i < 100000; i++) {
        rez = 5 * (float)(i / 2) + (float)cos(i) / (float)sin(i) - sqrt(3 / 14);
        cout << rez;
    }
    cout << endl
         << "FPU+VIDEO ends" << endl;
    getchar();
    ofstream out("out.txt");
    for (int i(1); i < 100000; i++) {
       rez = 5 * (float)(i / 2) + (float)cos(i) / (float)sin(i) - sqrt(3 / 14);
        cout << rez;
        out << rez;
    }
    cout << endl
         << "FPU+VIDEO+HDD ends" << endl;
    out.close();
    getchar();
    FILE* output = fopen("output2.txt", "w");
    int n = 50;
    for (int i(1), j(0); i < 9000000; i++, j++) {
       rez = 5 * (float)(i / 2) + (float)cos(i) / (float)sin(i) - sqrt(3 / 14);
       fprintf(output, "%f.3", rez);
        if (j > n) {
            fflush(output);
            j = 0;
        }
    }
    cout << endl
         << "HDD(FFlUSH) end" << endl;
         fclose(output);
    getchar();
    FILE* output3 = fopen("output3.txt", "w");
    for (int i(1); i < 9000000; i++) {
        rez = 5 * (float)(i / 2) + (float)cos(i) / (float)sin(i) - sqrt(3 / 14);
        fprintf(output3, "%f.3", rez);
    }
    cout << endl
         << "Simple HDD ends" << endl;
         fclose(output3);
    getchar();
    return 0;
}
