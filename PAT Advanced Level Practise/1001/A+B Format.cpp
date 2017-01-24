#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
	int i,j,k,n,m,s,t,a,b;
	char c[10];
	cin>>a>>b;
	s=a+b;
	if (s<0) sprintf(c,"%d",-s);
	else sprintf(c,"%d",s);
	if (s<0) cout<<"-";
	n=strlen(c);
	for (i=0;i<n;i++)
	{
		cout<<c[i];
		if (((n-i-1)%3==0)&&(i<n-1)) cout<<",";
	}
	return 0;
}
