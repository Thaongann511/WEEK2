#include <iostream>
using namespace std;

int main(){
    int n, tmp;
    cout<<"Nhap so: "; 
    cin >> n;
    bool first = true;
    while(n > 0){
        tmp = n % 10;
        if(first == true){
        	if(tmp != 0){
        		cout << tmp;
        		first = false;
            }
        }else{
            cout << tmp;
        }
        n = n / 10;
    }
}
