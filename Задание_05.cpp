#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a, r, g, wr, f;
    cout << "Land Tax Calculator" << endl;
    cout << "Enter the total area of the plot (m^2): ";
    cin >> a;
    cout << "Enter the area of the roof (m^2): ";
    cin >> r;
    cout << "Enter the area of the garden (m^2): ";
    cin >> g;
    wr = a - (r + g);
   double S = 5*r + 3*wr + 1*g;
    int d, c;
    double a1, a2, a3;
    a1 = 1.15;
    a2 = 1.1;
    a3 = 1.05;
    cout << "Choose material type: " << endl;
    cout << "1-High quality materials " << endl;
    cout << "2-Saman" << endl;
    cout << "3-Another materials" << endl;
    cin >> d;
    switch (d) {
        case 1: 
        S *= a1;
        break;
        case 2:
        S *= a2;
        break;
        case 3:
        S *= a3;
        break;
        default:
        cout << "Error"<< endl;
        return 0;
    }
    cout << "Do you have a basic services?" << endl;
    cout << "1) Yes" << endl;
    cout << "2) No" << endl;
    cin >> c;
    switch (c) {
      case 1:
        S = S + 2.5;
        break;
        case 2:
        S = S + 1 -1;
        break;
        default:
        cout << "Error";
    }
    cout << "How many floors in your building?" << endl;
    cin >> f;
    switch (f) {
        case 1:
        S *= 1;
        break;
        case 2:
        S = S * 1.1;
        break;
        case 3:
        S = S * 1.15;
        break;
        case 4: 
        S = S * 1.15;
        break;
        default:
        S = S * 1.2;
    }
    
cout << "Your land tax is " << S * 1000 << " rubles" << endl;
    return 0;
}