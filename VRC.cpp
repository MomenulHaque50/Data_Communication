#include<bits/stdc++.h>
using namespace std;

int main(){
int n,c=0;

cout<<"Enter number of massage bits:";
cin>>n;

int m[n+1];

cout<<"Enter massage bits:\n";
for(int i=0;i<n;i++)
{
    cin>>m[i];
}
for(int j=0;j<n;j++)
{
    if(m[j]==1)
    {
        c++;
    }
}
if(c%2==0)
{
    m[n]=0;
}
else{

  m[n]=1;
}
cout<<"After adding VRC final massage is:\n";
for(int i=0;i<n+1;i++)
{
    cout<<m[i];
}
return 0;
}
