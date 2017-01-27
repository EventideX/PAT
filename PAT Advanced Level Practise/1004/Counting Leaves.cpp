#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	//freopen("in.txt","r",stdin);
	int i,j,k,n,m,s,t,a[101]={0},b[101]={0},c[102]={0};
	cin>>n>>m;
	for (i=0;i<m;i++)
	{
		cin>>s>>t;
		b[s]=1;
		for (j=0;j<t;j++)
		{
			cin>>k;
			a[k]=s;
		}
	}
	s=0;
	for (i=1;i<=n;i++)
	if (b[i]==0)
	{
		t=a[i];
		k=1;
		while (t>0)
		{
			k++;
			t=a[t];
		}
		c[k]++;
		if (k>s) s=k;
	}
	cout<<c[1];
	for (i=2;i<=s;i++) cout<<' '<<c[i];
	return 0;
} 