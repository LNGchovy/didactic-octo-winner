#include<iostream>
#include<fstream>
#include<string>
#include <ctype.h>
using namespace std;
string map[33];
string arr[1000];
char temp[100];
char abc[10000];
int n=0; 
int level;
void test()
{      ifstream ifs;
    ifs.open("dkshowmaker.txt", ios::in);
    if (!ifs.is_open())
    {   cout << "打开文件失败" << endl;
        return;
    }
    char c;
    int i=0;
    int j=0;
     ifs >> noskipws;
    while (!ifs.eof())
    {     ifs >> c;
         abc[n++] = c;
    }  
    ifs.close();
     int k=0;
    for(i=0;i<sizeof(abc);i++)
   { if (isalpha(abc[i]))
        { temp[k]=abc[i];
            k++;
        }
     
       if(abc[i]==' '||abc[i]=='\n'||abc[i]=='.'||abc[i]=='>'||abc[i]=='<'||c=='{'||abc[i]=='(') 
       {   arr[j]=temp;
        for(int z=0;z<100;z++)
			{
				temp[z]='\0';
			}
            k=0;
            j++;

       }
    }
    map[1]="auto";map[2]="break";map[3]="case";map[4]="char";
	map[5]="const";map[6]="continue";map[7]="default";map[8]="do";
	map[9]="double";map[10]="else";map[11]="enum";map[12]="float";
	map[13]="for";map[14]="goto";map[15]="if";map[16]="int";
	map[17]="long";map[18]="register";map[19]="return";map[20]="short";
	map[21]="signed";map[22]="sizeof";map[23]="static";map[24]="struct";
	map[25]="switch";map[26]="typedef";map[27]="union";map[28]="unsigned";
	map[29]="void";map[30]="volatile";map[31]="while";map[32]="extern";
    int totalnum=0;
for(int o=0;o<j;o++)
	{
		for(int p=1;p<=32;p++)
		{
			int cmpnum=map[p].compare(arr[o]);
			if(cmpnum==0)
			{
				totalnum++;
			}	
		    
		}
	}
  cout<<"total num: "<<totalnum<<endl;
}
int main()
{   
    test();
    int level;
    cin>>level;
    getchar();
   system("pause");
    return 0;
}