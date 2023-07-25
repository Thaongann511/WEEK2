#include <cstdlib> 
#include <iostream> 
#include<iomanip>   
using namespace std;   
int main(int argc, char *argv[]) 
{  
	char name[30]; 
   float x; 
   float y; 
   float z; 
   float trungbinh; 
   cout<<"Nhap ten: ";
   cin>>name; 
   cout<<"Nhap diem toan: "; 
   cin>>x;
   cout<<"Nhap diem ly: ";
   cin>>y;
   cout<<"Nhap diem hoa: ";
   cin>>z;  
   trungbinh=(x+y+z)/3;         
   if(trungbinh>=9.0)cout<<"Xuat sac"; 
   else if((trungbinh>=8.0) && (trungbinh<9.0)) cout<<"Gioi"; 
   else if((trungbinh>=6.5) && (trungbinh<8.0))cout<<"Kha"; 
   else if((trungbinh>=3.0) && (trungbinh<5.0))cout<<"Yeu"; 
   else if(trungbinh<3.5) cout<<"Kem"; 
    else cout<<"Khong hop le";    
   cout<<"\n";    
   return 0; 
}
