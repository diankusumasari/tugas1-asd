#include <iostream>
#include <math.h>

using namespace std;

void soal1 (int a, int b, int c)
{
    double x1, x2;
    x1 = ((-b)+(sqrt(b*b-(4*a*c))))/(2*a);
    x2 = ((-b)-(sqrt(b*b-(4*a*c))))/(2*a);
    cout<< "X1: "<<(x1)<<endl;
    cout<< "X2: "<<(x2)<<endl;
}

int main()
{
    int a,b,c;


    cout << "Input angka 1: \n";
    cin>>a;

    cout << "Input angka 2: \n";
    cin>>b;

    cout << "Input angka 3: \n";
    cin>>c;

    soal1(a,b,c);

    return 0;
}

