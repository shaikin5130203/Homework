#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, z, i;
double x, lt;
long double result;
    cout << "Enter the number of progression terms: "<< endl;
    cin>>n;
    cout << "Choose the option: " << endl;
    cout <<"-----------------------------------------" << endl;
    cout <<"1- e^x"<< endl;
    cout <<"2- ln(1+x)" << endl;
    cout <<"3- sin(x)" << endl;
    cout <<"4- cos(x)" << endl;
    cout <<"5- 1/(1-x)^2" << endl;
    cout <<"-----------------------------------------" << endl;
    cin >> z;
    switch (z){
        case 1:{
             cout << "Enter the value of x: "<<endl;
        cin >> x;
            result = 1.0;
            lt=1.0;
            cout <<"Series terms: "<<endl;
            for (i=1;i<=n;i++){
                lt *= x/i;
                cout <<lt<<" ";
                result+=lt;
            }
            cout << endl;
            cout << "Result: "<<result << endl;
            break;
        }
        case 2: {
            do{
         cout << "Enter the value of x: "<<endl;
        cin >> x;
            }while (abs(x)>1);
             cout <<"Series terms: "<<endl;
             result = 0.0;
             lt=1.0;
            for (i=1;i<=n;i++){
                lt=(pow(-1,i+1)*(pow(x,i)/i));
                result+=lt;
                         cout <<lt<<" ";
            }
            cout << endl;
             cout << "Result: "<<result << endl;
             break;
        }
        case 3:{
            cout << "Enter the value of x: "<<endl;
        cin >> x;
        lt=x;
        result=x;
        cout << "Series terms:  "<<endl;
        for (i=1;i<=n;i++){
            lt*=((-1*x*x)/((2*i)*((2*i)+1)));
            
            result+=lt;
            cout << lt << " ";
        }
        cout << endl;
        cout << "Result: "<<result << endl;
        break;
        }
        case 4: {
            cout << "Enter the value of x: "<<endl;
        cin >> x;
         cout << "Series terms:  "<<endl;
        result = 1.0;
        lt=1;
         for (i=1;i<=n;i++){
        lt*=(-1*x*x/((2*i-1)*(2*i)));
        result+=lt;
        cout << lt << " ";
        }
         cout << endl;
        cout << "Result: "<<result << endl;
        break;
    }
    case 5: {
         do{
         cout << "Enter the value of x: "<<endl;
        cin >> x;
            }while (abs(x)>1);
             cout << "Series terms:  "<<endl;
        result = 1.0;
        lt=1;
         for (i=1;i<=n;i++){
        lt=((i+1)*pow(x,i));
        result+=lt;
        cout << lt << " ";
        }
         cout << endl;
        cout << "Result: "<<result << endl;
    }
    }
    
return 0;
}