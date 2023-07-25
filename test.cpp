#include<stdio.h>
int nhuan(int y)
{
    return ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0);
}
int songaytrongthang(int m,int y)
{
  switch(m)
  {
    case 1:case 3:case 5:case 7:case 8:case 10:case 12:
    {
      return 31;
      break;
    }
    case 2:
    {
      if(nhuan(y))
      {
        return 29;
      }
      return 28;
    }
    case 4:case 6:case 9:case 11:
    {
      return 30;
    }   
  }
}
void ngaytieptheo(int y,int m,int d)
{
  int ny=y;int nm=m;int nd=d;
  if(y>0&&m>0&&m<13&&d>0&&d<=(songaytrongthang(m,y)))
  {
    nd=d+1;
    if(m!=12&&d==songaytrongthang(m,y))
    {
      nd=1;
      nm=m+1;
    }
    else if(m==12&&d==songaytrongthang(m,y))
    {
      nd=1;
      ny=y+1;
      nm=1;
    }
    else if(m==2)
    {
      if(nhuan(y))
      {
        if(d==29)
        {
          nd=1;
          nm=m+1;
        }
      }
      else
      {
        if(d==28)
        {
          nd=1;nm=m+1;
        }
      }
    }     
  }
    printf("\nNgày ti?p theo : %d:%d:%d",nd,nm,ny);
}
int main()
{
    int y;int m;int d;
    do {
    printf( "\nNh?p ngày: ");
    scanf("%d", &d);
    printf( "Nh?p tháng: ");
    scanf("%d", &m);
    printf("Nh?p nãm: ");
    scanf("%d",&y);
  } while (y < 0 || m < 1 || m >12 || d < 0 || d > 31);
    ngaytieptheo(y,m,d);
}
