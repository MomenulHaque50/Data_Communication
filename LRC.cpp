#include<bits/stdc++.h>
using namespace std;

int main(){
int n,p,c=0;

cout<<"Enter number of bits per block:";
cin>>n;
cout<<"Enter number of blocks:";
cin>>p;
int m[n*p];
int v[n];

cout<<"Enter massage bits:\n";
for(int i=0;i<n*p;i++)
{
    cin>>m[i];
}
for(int i=0;i<n;i++)
{
    c=0;
    for(int j=0; j<p;j++){
    if(m[n*j+i]==1)
    {
        c++;
    }
}
if(c%2==0)
{
    v[i]=0;
}
else{

  v[i]=1;
}
}
cout<<"LRC Block:\n";
for(int i=0;i<n;i++)
{
    cout<<v[i];
}
cout<<endl;
cout<<"After adding LRC final massage is:\n";
for(int i=0;i<n*p;i++)
{
    cout<<m[i];
}
for(int i=0;i<n;i++)
{
    cout<<v[i];
}
return 0;
}

