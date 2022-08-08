#include<iostream>
using namespace std;



int main() {
    // cout<<"Hello World"<<endl;
    // cout<<"Anupam"<<endl;

    // int a;
    
    // a = cin.get();
    // if(a > 0) {
    //     cout<<"The number is " << a << endl;
    // }


    // while loop......................................................................................................
    // int a;
    // cin>> a;
    // int i = 2, sum=0;
    // while(i<=a) {
    //     // cout<<i<<" ";
    //     sum = sum + i;
    //     i+=1;
    // }

    // sum = a*(i+a)/2;
    // cout<<"sum is -> "<<sum;

    // sum of all even nos. .......................................................................................
    // while(i<=a) {
    //     sum = sum + i;
    //     i+=2;
    // }
    // cout<<"sum is -> "<<sum;


    // prime no. ............................................................................................
    // int value,i=2, flag = 0;
    // cout<<"Enter no. to find wheter prime or not."<<endl;
    // cin>>value;
    // while(i <= value/2) {
    //     if(value%i == 0) {
    //         flag = 1;
    //         break;
    //     } 
    //     i++;
    // }

    // if(flag == 0) {
    //     cout<<value << " is prime"<<endl;
    // }
    // else {
    //     cout<<value<<" is non prime"<<endl;
    // }


    // Pattern  printing..................................................................................
    int patternSize, i = 0;
    cout << "Enter pattern size";
    cin>> patternSize;

    while (i < patternSize)
    {
        int j = patternSize;
        while(j >= i){
            cout<<i<<" ";
            j = j - 1;
        }
        cout << endl;
        i++;
    }
    
}