#include<bits/stdc++.h>
#include<windows.h>
#include <time.h>
using namespace std;
int a, b[6];
int main() 
{
 int sum1=0, sum2=0, sum3=0, sum4=0,sum5=0, sum6=0 ;
 
 system (" color 06") ;
cout<<"���ﲩ��"<<endl ;
Sleep(200);

for(int i=1;i<=100;i++)
{   cin>>a;
    if(a==0)
{   cout<<"welcome"<<endl;
return 0;
}
   if(a==1)
 {for(int j=1;j<=6;j++)
    { b[j]=(rand ()%6)+1;
    if(j==6)
    cout<<b[j]<<" "<<endl ;
    else
    cout<<b[j]<<" ";
    }
sort(b+1, b+7);
if(b[1]==1&&b[2]==1&&b[3]==4&&b[4]==4&&b[5]==4&&b[6]==4)
{system("color 04");
cout<<"��ϲ�㲩�����(״Ԫ)" <<endl;
}
else if(b[1]==4&&b[2]==4&&b[3]==4&&b[4]==4&&b[5]==4&&b[6]==4)
{
system("color 04");
cout<<"��ϲ�㲩�������죨״Ԫ)" <<endl;
}
else if(b[1]==1&&b[2]==1&&b[3]==1&&b[4]==1&&b[5]==1&&b[6]==1)
{system("color 04");
cout<<"��ϲ�㲩����ؽ���״Ԫ)" <<endl;
}
else if(b[1]==2&&b[2]==2&&b[3]==2&&b[4]==2&&b[5]==2&&b[6]==2)
{system("color 04");
cout<<"��ϲ�㲩����������״Ԫ)"<<endl;
}
else if(b[1]==3&&b[2]==3&&b[3]==3&&b[4]==3&&b[5]==3&&b[6]==3)
{system("color 04");
cout<<"��ϲ�㲩����������״Ԫ)" <<endl ;}
else if(b[1]==5&&b[2]==5&&b[3]==5&&b[4]==5&&b[5]==5&&b[6]==5)
{system("color 04");
cout<<"��ϲ�㲩��������(״Ԫ)" <<endl;}
else if(b[1]==6&&b[2]==6&&b[3]==6&&b[4]==6&&b[5]==6&&b[6]==6)
{system("color 04");
cout<<"��ϲ�㲩����������״Ԫ)" <<endl;}

else if(b[1]==1&&b[2]==2&&b[3]==3&&b[4]==4&&b[5]==5&&b[6]==6)
{
system("color 04");
cout<<"��ϲ�㲩�����ã�����)" <<endl;
}
else if(b[1]==b[2]&&b[1]==b[3]&&b[1]==b[4]&&b[1]==b[5]&&b[1]!=b[6]&&b[1]!=4)
{system("color 04");
cout<<"��ϲ�㲩�����ӵǿƣ�״Ԫ)" <<endl;}
else if(b[6]==b[2]&&b[6]==b[3]&&b[6]==b[4]&&b[6]==b[5]&&b[6]!=b[1]&&b[6]!=4)
{system("color 04");
cout<<"��ϲ�㲩�����ӵǿƣ�״Ԫ)"<<endl;}
else if(b[1]==b[2]&&b[1]==b[3]&&b[1]==b[4]&&b[1]==b[5]&&b[1]!=b[6]&&b[1]==4)
{system("color 04");
cout<<"��ϲ�㲩����죨״Ԫ)" <<endl;}
else if(b[6]==b[2]&&b[6]==b[3]&&b[6]==b[4]&&b[6]==b[5]&&b[6]!=b[1]&&b[6]==4)
{system("color 04") ;
cout<<"��ϲ�㲩����죨״Ԫ)" <<endl ;}

else
{ sum1=0, sum2=0, sum3=0,sum4=0, sum5=0, sum6=0;
for (int x=1;x<=6; x++)
{    if(b[x]==1)
       {sum1++;}
       if(b[x]==2)
       {sum2++;}
       if(b[x]==3)
       {sum3++;}
       if(b[x]==4)
       {sum4++;}
       if(b[x]==5)
       {sum5++;}
       if(b[x]==6)
       {sum6++;}
}
  if(sum4==3)
{ system("color 04");
  cout<<"��ϲ�㲩�����죨̽��)" <<endl;
}
else if(sum1==4||sum2==4||sum3==4||sum5==4||sum6==4)
{
system("color 04");
cout<<"��ϲ�㲩���Ľ�(��ʿ)"<<endl;
}
else if(sum4==2)
{
system("color 04") ; 
cout<<"��ϲ�㲩�����٣�����)" <<endl;
}
else if(sum4==1)
{cout<<"��ϲ�㲩��һ��(���)"<<endl;}

else
{cout<<"���ź��������˵�"<<endl;}
}

Sleep (1000) ;
system("color 06") ;
}
}

return 0;

}
