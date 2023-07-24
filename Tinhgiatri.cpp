#include<iostream>
using namespace std;
int main()
{
  int n;
  float S;
  S = 0;
  do
  {
    cout<<"\nNhap vao so n: ";
    cin>>n;
    if(n < 1)
      {
      cout<<"\nn phai lon hon hoac bang 1, vui long nhap lai!";
      }
  }while(n < 1);
  for(int i = 1; i <= n; i++){
    S = S + 1.0 / (2 * i);
  }
 
  cout<<"\nTong 1/2 + 1/4 + ... + 1/"<<n*2<<" la: "<< S;
}
