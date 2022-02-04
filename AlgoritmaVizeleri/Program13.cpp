/*

		SERDAR ÖZKAN
		B203102008

*/
#include<iostream>
using namespace std;
void KK()
{
    int BB,i,j,k;
    BB=(4)*2+1;
    for (i=0;i<6;i++)
    { 
        cout<<"* ";
        }
        cout<<"\n";
            for (j=0;j<(4);j++)
            {
                cout<<"*";
                for(k=0;k<BB;k++)
                {
                cout<<" ";
            }
        cout<<"*\n";
    }
    for(i=0;i<6;i++){ 
    cout<<"* ";
    }
}
void dd()
{
    int BB,i,j,k;
    BB=(4)*2+1;
    for (i=0;i<6;i++)
    { 
        cout<<"* ";
        }
        cout<<"\n";
            for (j=0;j<(8);j++)
            {
                cout<<"*";
                for(k=0;k<BB;k++)
                {
                cout<<" ";
            }
        cout<<"*\n";
    }
    for(i=0;i<6;i++){ 
    cout<<"* ";
    }    
}
void uc()
{
	for(int a=1;a<=6;a++)
	{
		for(int b=1;b<=6-a;b++)
		{
			cout<<" ";
		}
		for(int c=1;c<a*2;c++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}

int main(){
    setlocale(LC_ALL, "Turkish");
    int x;
    cout<<"Kare icin 1"<<endl;
    cout<<"Ucgen icin 2"<<endl;
    cout<<"Dikdortgen icin 3"<<endl;
    cout<<"SEÇÝM ??  : "<<endl;
    cin>>x;
    if (x == 1)
    {
        KK();
    }
    if (x == 2)
    {
        uc();
    }
    if (x == 3)
    {
        dd();
    }
}
    
