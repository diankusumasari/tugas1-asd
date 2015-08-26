#include <iostream>

using namespace std;
//exercise3, segitiga

void exercise3(int a, int b, int c)
{
    char d[30] = "Segitiga Sama Sisi";
    char e[30] = "Segitiga Sama Kaki";
    char f[30] = "Segitiga Sembarang";

    if ((a==b)&&(a==c)){
        cout<< d;}
    else if ((a==b)||(b==c)||(c==a)){
        cout<< e;}
    else {
        cout<< f;
    }
}

int main()
{
    int a,b,c;


    cout << "Input Sisi 1 : ";
    cin>>a;

    cout << "Input Sisi 2 : ";
    cin>>b;

    cout << "Input Sisi 3 : ";
    cin>>c;
    cout << "\n";

    cout<<"Output = ";
    exercise3(a,b,c);


    return 0;
}

