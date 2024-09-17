#include <iostream>
#include <cmath>
using namespace std;
double V, H, T, t, a, x, g, y;
int main () {
    g = 9.8;
    cout << "Enter Speed (m/s)" << endl;
    cin >> V;
    cout << "Enter Height (m)" << endl;
    cin >> H;
    cout << "Enter angle (Radians)" << endl;
    cin >> a;
    T = (V*sin(a) + sqrt(pow(sin(a),2)*pow(V,2)+2*g*H))/g;
    cout << "Time of fall is " << T << "s" << endl;
    cout << "Enter the time "<< endl;
    cin >> t;
    if (t > T || t < 0) {
        cout << "Error" << endl;
        return 0;
    }
    else {
        x = V*t*cos(a);
        y = H + V*t*sin(a) - 0.5*g*pow(t,2);
        cout << "Coords of the stone in that moment is: (" << x <<"m ; "<< y << "m)"<<endl;
        return 0;
    }
}