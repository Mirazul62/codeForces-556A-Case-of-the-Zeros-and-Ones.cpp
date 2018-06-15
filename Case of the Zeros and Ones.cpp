#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    long long int n,i,ans=0,c0=0,c1=0;
    cin>>n;
    cin>>str;
    for(i=0;str[i]!='\0';i++)
    {

        if(str[i]=='0')
            c0++;
        else
            c1++;
    }
   // cout<<c0<<" "<<c1;
    if(c0<c1)
        ans=n-2*c0;
    else
        ans=n-2*c1;
    cout<<ans;
}
