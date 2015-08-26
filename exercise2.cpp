#include <iostream>
#include <math.h>

using namespace std;
//exercise2, kuadrat

int exercise2(int number, int power)
{
    int hasil=1;
    do{
        hasil=hasil*number;
        power--;
    }
    while(power>=1);
    return hasil;
}

int main()
{
    int power,number;

    cout << "Input number : ";
    cin>>number;

    cout << "Input power  : ";
    cin>>power;
    cout << "\n";

    cout<<"Output = "<<exercise2(number,power);


    return 0;
}

