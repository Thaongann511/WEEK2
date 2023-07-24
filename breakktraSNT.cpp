#include <iostream>
using namespace std;
 
int main() {
    int i = 2, so, kt = 1;
 
    cout << "Nhap so: ";
    cin >> so;
 
    if (so != 0 && so != 1) {
        while(i <= so/2) {
            if(so%i == 0) {
                kt = 0;
                break;
            }
            i++;
        }
    } else {
       kt = 0;
    }
     
    if(kt == 1) {
        cout << so << " la so nguyen to" << endl;
    } else {
        cout << so << " khong phai la so nguyen to" << endl;
    }
 
    return 0;
}
