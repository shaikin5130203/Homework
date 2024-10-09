#include <iostream>
#include <cmath>
const int a=1000, b=999999999;
using namespace std;
int main(){
int n, k=0, z, c=0, i, k1, k2, p;
char cont;
do{
cout << "Choose the option:" << endl;
cout << "---------------------------------------------------"<<endl;
cout << "1- Enter a number in the range between 1000 and 999999999" <<endl;
cout << "2- Print the digits of the number"<<endl;
cout << "3- Count how many digits the number has"<<endl;
cout << "4- Return the lowest and highest digits of the number"<<endl;
cout << "5- Return the sum of the digits of the number"<<endl;
cout << "6- Return the product of the odd digits"<<endl;
cout << "7- Calculate the inverted version of the number"<<endl;
cout << "---------------------------------------------------"<<endl;
cin >> z;
if (z==1){
    do{
        cout << "Enter the number: "<<endl;
        cin >> n;
        if (n<a||n>b){
            cout << "Try again" << endl;
        }
    } while(n<a||n>b);
}
switch(z){
    case 2:{
        cout << "Enter the number: "<<endl;
        cin >> n;
        z=n;
         for(i=1;z>0;i++){
                z/=10;
        }
         cout << "Digits of the number: " << endl;
for (p=10; p<1*pow(10,i); p*=10){
     k=((n%p)/(p/10));
    cout << k <<" ";
}
cout << endl;
break;
}
case 3: {
    cout << "Enter the number: "<<endl;
        cin >> n;
         z=n;
         for(i=1;z>0;i++){
                z/=10;
        }
for (p=10; p<1*pow(10,i); p*=10){
     k=((n%p)/(p/10));
    c++;
}
cout << "Number of digits: "<< c<<endl;
break;
}
case 4: {
    cout << "Enter the number: "<<endl;
        cin >> n;
    k1 = 0;
    k2 = 9;
     z=n;
         for(i=1;z>0;i++){
                z/=10;
        }
    for (p=10; p<1*pow(10,i); p*=10){
 
     k=((n%p)/(p/10));
     z=n;
    if (k>k1){
        k1=k;
    }
    if (k<k2){
        k2=k;
    }
}
cout << "Max digit: "<< k1 << " "<< "Min digit: " << k2<<endl;
break;
}
case 5:{
    cout << "Enter the number: "<<endl;
        cin >> n;
    c=0;
     z=n;
         for(i=1;z>0;i++){
                z/=10;
        }
    for (p=10; p<1*pow(10,i); p*=10){
        
     k=((n%p)/(p/10));
    c+=k;
    }
    cout << "The sum of digits: "<< c<<endl;
    break;
}
case 6: {
    cout << "Enter the number: "<<endl;
        cin >> n;
    c=1;
     z=n;
         for(i=1;z>0;i++){
                z/=10;
        }
    for (p=10; p<1*pow(10,i); p*=10){
        k=((n%p)/(p/10));
    if (k%2!=0){
        c*=k;
    }
    }
    cout <<"The product of the odd digits: " << c<<endl;
    break;
}
case 7:{
    cout << "Enter the number: "<<endl;
        cin >> n;
         z=n;
         for(i=1;z>0;i++){
                z/=10;
        }
        cout << "Reversed version of the number: ";
    for (p=10; p<1*pow(10,i); p*=10){
     k=((n%p)/(p/10));
    cout << k;
}
    cout << endl;
break;
}
}
cout << endl << "Do you want to continue? [Y/N]" << endl;
cin >> cont;
}while(cont=='y'||cont=='Y');
return 0;
}