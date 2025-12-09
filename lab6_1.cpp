#include<iostream>
using namespace std;


int main(){
    int Even=0;
    int Odd=0;
    int num;

    
    cout << "Enter an integer: ";
    cin >> num;


    while(num!=0)
    {
        if (num%2==0)
        {
        Even++;
        }else{
        Odd++;
        }
    cout << "Enter an integer: ";
    cin >> num;
    }
    cout << "#Even numbers = " << Even << endl;
    cout << "#Odd numbers = " << Odd;
}
