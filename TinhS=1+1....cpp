#include<iostream>
using namespace std;
int main()
{
  int i, n;
  long S = 0, P = 1;
  do
  {
    cout<<"\nNhap vao so n: ";
    cin>>n;
    if(n < 1)
    {
      cout<<"\nphai lon hon hoac bang 1, vui long nhap lai!";
    }
  }while(n < 1);
  for(int i = 1; i <= n; i ++){
    P = P * i;
    S = S + P;
  }
  cout<<"\nTong cua bieu thuc: "<<S;
}
