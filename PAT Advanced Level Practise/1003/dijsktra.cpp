#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	//freopen("in.txt","r",stdin);
	int i,j,k,n,m,s,t,c1,c2,a[502][502],b[502],c[502],d[502],e[502],f[502]={0};
	memset(a,0x3f,sizeof(a));
	memset(d,0x3f,sizeof(d));
	cin>>n>>m>>c1>>c2;
	for (i=0;i<n;i++) cin>>b[i];
	for (i=0;i<m;i++)
	{
		cin>>j>>k>>t;
		a[j][k]=a[k][j]=t;
	}
	c[c1]=b[c1];	
	d[c1]=0;
	e[c1]=1;
	for (i=0;i<n;i++)
	{
    	s=0x3f3f3f3f;
    	t=-1;
		for (j=0;j<n;j++)
		if ((f[j]==0)&&(d[j]<s))
		{
			t=j;
			s=d[j];
		}
		if (t==-1) break;
		f[t]=1;
		for (j=0;j<n;j++)
		if (f[j]==0)
		if (d[j]>d[t]+a[t][j])
		{
			d[j]=d[t]+a[t][j];
			c[j]=c[t]+b[j];
			e[j]=e[t];
		}
		else
		if (d[j]==d[t]+a[t][j])
		{
			e[j]+=e[t];
			if (c[j]<c[t]+b[j]) c[j]=c[t]+b[j];
		}
	}
	cout<<e[c2]<<' '<<c[c2];
	return 0;
}