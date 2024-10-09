#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int A, B, i,Sa=0, Sb=0, Na=0, Nb=0, Pa1=1, Pb1=0, GCF;
    cout << "Enter the first number (10-1000)" << endl;
    cin >> A;
    cout << "Enter the second number (10-1000)" << endl;
    cin >> B;
    if (A >= 1000 || A <= 10 || B >= 1000 || B <= 10){
        cout << "Error";
        return 0;
    }
    // For A
    for (i = 1; i <= A/2; i++){
        if (A%i==0){
            Sa+=i;
        }
    }
    for (i = 1; i <= A/2; i++){
        if (A%i==0){
            Na++;
        }
    }
    for (i = 1; i <= A; i++){
        if (A%i==0 && i%2!=0){
            Pa1*=i;
        }
    }
    
// For B
    for (i = 1; i <= B/2; i++){
        if (B%i==0){
            Sb+=i;
        }
    }
    for (i = 1; i <= B/2; i++){
        if (B%i==0){
            Nb++;
        }
    }
      for (i = 1; i <= B; i++){
        if (B%i==0 && i%2==0){
            Pb1+=i;
        }
    }
    // For both
    if (A>B){
        i=A;
    }
    else {i=B;}
    for (; i>0; i--){
        if (A%i==0 && B%i==0){
            GCF = i;
            break;
        }
    }

    cout << "The sum of dividers is " << Sa + A + Sb + B <<endl;
    cout << "The product of numbers of the divisors is " << (Na+1)*(Nb+1) <<endl;
    cout << "The sum of the product of the odd divisors of the first number and the even divisors of the second number is " <<Pa1+Pb1 <<endl;
    cout << "The GCF is " << GCF << endl;
    return 0;
}