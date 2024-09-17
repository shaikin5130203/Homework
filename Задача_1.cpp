#include <iostream>
#include <cmath>
using namespace std;
double T, k, w;
int main() {
cout << "Enter k" << endl;
cin >> k;
if (k < 1 || k == 0) {
    cout << "Error" << endl;
    return 0;
}
else {
cout << "Enter the W" << endl;
cin >> w;
T = ((3.141 - asin(1/k))/w);
cout << " T = " << T << endl;
return 0;
}
}

