#include <iostream>
using namespace std;

int main()
{
    int num [5];
    int min;
    cout << "Input 5 bilangan : "<< endl;

    for (int i = 1;i<=5;i++){
        cout << "Bilangan ke-"<<i<<" : ";
        cin  >> num[i];
        cout << endl;

    if (i==1){
        min=num[1];
    }else{
        if (num[i]<min){
            min=num[i];
        }
    }
    }

    cout<<"Bilangan minimum adalah : "<<min<<endl;

    return 0;

}
