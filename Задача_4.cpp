#include <iostream>
#include <cmath>
using namespace std;
int main() {
    char gc;
    float s = 1, S, I;
    int cc, pm, c, n, i, N, t;
    cout << "Enter the cost of goods" << endl;
    cin >> c;
    cout << "Enter product category (A, B or C):  " << endl;
    cin >> gc;
    cout << "Choose your client category: " << endl;
    cout << "1-Best" << endl;
    cout << "2-Good" << endl;
    cout << "3-Medium" << endl;
    cout << "4-Bad" << endl;
    cin >> cc;
    switch (cc) {
        case 1: 
        cout << "Choose payment method" << endl;
        cout << "1-Cash" << endl;
        cout << "2-Check" << endl;
        cout << "3-Bank loan" << endl;
        cin >> pm;
        s = s - 0.2;
        switch (gc) {
        case 'A':
        s = s - 0.2;
        break;
        case 'B':
        s = s - 0.1;
        break;
        case 'C':
        s = s;
        break;
        default:
        cout << "Error" << endl;
        return 0;
    }
        break;
        case 2:
        cout << "Choose payment method" << endl;
        cout << "1-Cash" << endl;
        cout << "2-Check" << endl;
        cout << "3-Bank loan" << endl;
        cin >> pm;
        s = s - 0.1;
        switch (gc) {
        case 'A':
        s = s - 0.2;
        break;
        case 'B':
        s = s - 0.1;
        break;
        case 'C':
        s = s;
        break;
        default:
        cout << "Error" << endl;
        return 0;
    }
        break;
        case 3:
        cout << "Choose payment method" << endl;
        cout << "1-Cash" << endl;
        cout << "2-Check" << endl;
        cin >> pm;
        switch (gc) {
        case 'A':
        s = s - 0.2;
        break;
        case 'B':
        s = s - 0.1;
        break;
        case 'C':
        s = s;
        break;
        default:
        cout << "Error" << endl;
        return 0;
    }
        break;
        case 4:
        cout << "You can only pay in cash" << endl;
        pm = 1;
        switch (gc) {
        case 'A':
        s = 1;
        break;
        case 'B':
        s = 1.05;
        break;
        case 'C':
        s = 1.1;
        break;
        default:
        cout << "Error" << endl;
        return 0;
    }
        break;
        default:
        cout << "Error" << endl;
        return 0;
    }
    switch (pm) {
        case 1:
        S = c*s;
        break;
        case 2:
        cout << "Enter the number of contributions" << endl;
        cin >> n;
        cout << "Enter the interest rate (3 % - 15 %)" << endl;
        cin >> i;
        S = c*(1 + i*n/100)*s;
        cout << "Final cost of goods is " << S << endl;
        return 0;
        break;
        case 3:
        cout << "Enter the number of payments (1-6)" << endl;
        cin >> N;
        if (N < 1 || N > 6) {
            cout << "Error" << endl;
            return 0;
        }
        cout << "Enter the type of loan" << endl;
        cout << "1-Platinum" << endl;
        cout << "2-Buisness" << endl;
        cin >> t;
        switch (t) {
        case 1: 
        I = 1.05;
        break;
        case 2:
        I = 1.02;
        break;
        default:
        cout << "Error" << endl;
            return 0;
        }
        S = c*s;
        S = S* pow((I),N);
    }
cout << "Final cost of goods is " << S << endl;
return 0;
}