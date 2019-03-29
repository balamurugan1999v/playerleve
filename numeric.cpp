#include <iostream>
#include<string.h>

using namespace std;

int main()
{
char a[100],i,j=0,len;
cin>>a;
len=strlen(a);
for(i=0;i<len;i++)
if(a[i]>'0'&&a[i]<='9')
{
    j=j+1;
}
if(j==len)
{
    cout<<"yes";
}
else
{
    cout<<"no";
}
return 0;
}
