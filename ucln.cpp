#include <bits/stdc++.h>
using namespace std;

int UCLN(int A, int B) {
    for(int i = min(A, B); i > 0; --i) {
        if (A % i == 0 && B % i ==0)
            return i;
    }

}
int main() {
  int A,B;
  cout<<"Nhap so A: ";
  cin>>A;
  cout<<"Nhap so B: ";
  cin>>B;
  cout<<"UCLN "<<A<<" và "<<B<<" la:\n";
  cout <<"UCLN("<<A<<","<<B<<") = "<< UCLN(A, B);

}
