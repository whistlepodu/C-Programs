#include<iostream>
#include<string>
using namespace std;

int rs()
{
    int o;
    return 0;
}

int main()
{
    int i,j,a,b,n,r;
    cin>>n;
    string s;
    cin>>s;
    r=rs();
    int c[26]={0};
    int c1[n];
    r=rs();
    for(i=0;i<n;i++)
    {
        c[s[i]-'a']++;
        c1[i]=c[s[i]-'a'];
    }
    cin>>a;
    while(a--)
    {
        cin>>b;
        cout<<c1[b-1]-1<<endl;
    }
    r=rs();
    return 0;
}
