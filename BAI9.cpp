#include<iostream>
using namespace std;
int main() 
{
	int quangDuong, tongTien;
	cout << "Nhap vao so km di: " << flush;
	cin >> quangDuong;
	
	if (quangDuong == 1) 
	{
	tongTien = 15000;
	}
	else if (quangDuong >= 2 && quangDuong <= 5) 
	{
	tongTien = (13500 * (quangDuong - 1)) + 15000 ;
	}
	else if(quangDuong >= 6)
	{		
	tongTien = (11000 * (quangDuong - 5)) + ((13500 * 4) + 15000);
	}
	if(quangDuong > 120)
	{
	tongTien = (11000 * (quangDuong - 5)) + ((13500 * 4) + 15000) *(10/100);
	}
	cout << "So tien phai tra la: " << tongTien << " Dong" << endl;
	return 0;
}
