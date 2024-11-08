#include <iostream>
#include <cmath>
using namespace std;
int *memory_allocation(int n);
void coords(int n, int *x, int *y);
float av_value(int *x,int n);
float lin_k(int n, int *x,int *y);
float indep(int n, int *x, int *y, float B1);
void lin_regr(float B0, float B1);
void new_point(float B0, float B1);
int main(){
    int n, *x, *y; 
    float B0, B1;
    cout << "Enter the number of points: ";
    cin >> n;
    x = memory_allocation(n);
    y = memory_allocation(n);
    coords(n,x,y);
    B1 =  lin_k(n, x, y);
    B0 = indep(n, x, y, B1);
    lin_regr(B0, B1);
    new_point(B0,B1);
    return 0;
}
int *memory_allocation(int n){
    int *m = (int*)malloc(n*sizeof(int));
    return m;
}
void coords(int n, int *x, int *y){
    cout << "Enter the coordinates of points (X, Y): \n";
    for (int i = 1; i<=n; i++){
        cout << "X["<<  i <<  "] = ";
        cin >> x[i-1];
        cout << "Y["<<  i <<  "] = ";
        cin >> y[i-1];
    }
}
float av_value(int *x,int n){
    float s = 0.0;
    for (int i = 0;i<n;i++){
        s += x[i];
    }
    float result = s/n;
    return result;
}
float lin_k(int n, int *x,int *y){
    int s_xy=0,s_x2=0,s_x=0;
    float B;
    for (int i = 0; i<n; i++){
        s_xy += x[i]*y[i];
    }
     for (int i = 0; i<n; i++){
        s_x2 += pow(x[i],2);
    }
     for (int i = 0; i<n; i++){
        s_x += x[i];
    }
    B = (s_xy - n*av_value(x,n)*av_value(y,n))/(s_x2 - pow(s_x,2)/n);
    return B;
}
float indep(int n, int *x, int *y, float B1){
float B0 = av_value(y, n)-B1*av_value(x,n);
return B0;
}
void lin_regr(float B0, float B1){
cout << "Linear regression formula: \n";
cout << "y = "<<round(B0*10)/10<<" + "<<round(B1*10)/10<<"*x"<<endl;
}
void new_point(float B0, float B1){
    int new_x, new_y;
    float y, error;
cout << "Enter the new point (X,Y): \n";
cout << "X = ";
cin >> new_x;
cout << "Y = ";
cin >> new_y;
y = B0 + B1*new_x;
error = abs(y-new_y);
cout << "Error: "<<error;
}