#include<iostream.h>
#include<conio.h>
int main()
{
int a[20],i,temp=0;
for(i=0;i<6;i++)
{
cin>>a[i];
}
for(i=0;i<2;i++)
{
if((a[i]==a[i+2])&&(a[i]==a[i+4]))
{
    temp=1;
}
}
if(temp==1)
{
    cout<<"yes"<<endl;
}
else
{
    cout<<"no\n";
}
return 0;
}
