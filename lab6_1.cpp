#include<iostream>
using namespace std;

int main(){
    int even = 0;
    int odd = 0;
    int i = 1;
    while(i != 0){
     cout << "Enter an integer: ";
     cin >> i;
     if(i%2==0){
     even++;
     }else{
         odd++;
     }
    }
    cout << "#Even numbers = " << even-1 << "\n";
    cout << "#Odd numbers = " << odd;
    return 0;
}
