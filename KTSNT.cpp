#include <iostream>
#include <cmath>
  
using namespace std;
 
int isPrimeNumber(int n) {
    if (n < 2) {
        return 0;
    }
    int i;
    int squareRoot = (int) sqrt(n);
    for (i = 2; i <= squareRoot ; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
 
int main() {
 int i, n;
    cout << "Nhap n = ";
    cin >> n;
    cout<<"Tat ca cac so nguyen to nho hon la: "<< n;
    if (n >= 2) {
        cout<<"2";
    }
    for (i = 3; i < n; i+=2) {
        if (isPrimeNumber(i) == 1) {
            cout<<i;
        }
    }
}
