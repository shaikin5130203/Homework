#include <iostream>
using namespace std;
char *memory_allocation(int n);
void enter_word(int n, char *A);
void word_sum(int n1,int n2, char *A, char *B, char *X);
int main(){
int n1, n2;
char *A, *B, *X;
cout << "First word lenght: ";
cin >> n1;
cout << "Secont word lenght: ";
cin >>n2;
A = memory_allocation(n1);
B = memory_allocation(n2);
X = memory_allocation(n1 + n2);
cout << "First word: \n";
enter_word(n1, A);
cout << "Second word: \n";
enter_word(n2, B);
word_sum(n1, n2, A, B, X);
}
char *memory_allocation(int n){
    char *m = (char*)malloc(n*sizeof(char));
    return m;
}
void enter_word(int n, char *A){
    for (int i = 1; i<=n;i++){
        cout << "Symbol["<<i<<"]: ";
        cin >> A[i-1];
    }
}
void word_sum(int n1, int n2, char *A, char *B, char *X){
    int j =-1 ;
    if (n1<=n2){
   for (int i = 0; i < n1; i++){
    j++;
    X[j]=A[i];
    j++;
    X[j]=B[i];
   }
   for (int i = n1; i<n2;i++){
    j++;
    X[j]= B[i];
   }
   for (int i = 0; i < n1+n2;i++){
    cout << X[i];
   }
    } else {
        for (int i = 0; i < n2; i++){
    j++;
    X[j]=A[i];
    j++;
    X[j]=B[i];
   }
   for (int i = n2; i<n1;i++){
    j++;
    X[j]= A[i];
   }
   for (int i = 0; i < n1+n2;i++){
    cout << X[i];
   }
    }
}