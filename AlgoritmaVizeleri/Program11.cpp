/*

		SERDAR ÖZKAN
		B203102008

*/
#include<iostream>
using namespace std;
int main() {
int i=0;
long int a[5];
long int bol2[10];
long int bol3[10];
long int bol4[10];
long int bol5[10];
long int bol6[10];
long int bol9[10];
int x=0;
int y=0;
int f=0;
int g=0;
int o=0;
int k=0;
a[0]=10;
a[1]=13;
a[2]=5;
a[3]=24;
a[4]=90;

for (long int i = 0; i < 5; i++)
{
if (a[i]%2==0)
{
    bol2[x]=a[i];
    x++;
}
if (a[i]%3==0)
{
    bol3[y]=a[i];
    y++;
}
if(a[i]%4==0)
{
    bol4[k]=a[i];
    k++;
}
if (a[i]%5==0)
{
    bol5[f]=a[i];
    f++;
}
if (a[i]%2==0&&a[i]%3==0)
{
    bol6[g]=a[i];
    g++;
}  
if (a[i]%9==0)
{
    bol9[o]=a[i];
    o++;
}      
        
}
cout<<"2'ye bolunenler";
for (int z = 0; z < x; z++)
{
    cout<<endl;
    cout<<bol2[z];
}
cout<<endl;
cout<<"3'e bolunenler : ";
for (int z = 0; z < y; z++)
{
    cout<<endl;
    cout<<bol3[z];
}
cout<<endl;
cout<<"4'e bolunenler :";
for (int z = 0; z < k; z++)
{
    cout<<endl;
    cout<<bol4[z];
}
cout<<endl;
cout<<"5'e bolunenler :";
for (int z = 0; z < f; z++)
{
    cout<<endl;
    cout<<bol5[z];
}
cout<<endl;
cout<<"6'ya bolunenler :";
for (int z = 0; z < g; z++)
{
    cout<<endl;
    cout<<bol6[z];
}
cout<<endl;
cout<<"9'a bolunenler :";
for (int z = 0; z < o; z++)
{
    cout<<endl;
    cout<<bol9[z];
}
        
}
    
