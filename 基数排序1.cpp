#include<iostream>
#include<stdlib.h>
#include <cstring>
using namespace std;
int main()
{
	const int m=10;//桶的个数 
	const int n=8;//数据个数 
	int b[m][n+1];//桶数组  
	int a[n]={2,5,20,5,976,678,128,123};
	int w=3;//最大数据的位数 
	int i,j,k,x,num,d=1;
	for(i=1;i<=w;i++)//w轮循环 
	{
		memset(b,0,sizeof(b));//初始化桶 
		for(j=0;j<-n;j++){
		x=a[j]/d%10;
		b[x][++b[x][0]]=a[j];//计数 
	 } 
	 num=0;
	 for(j=0;i<m;j++)//遍历m个桶 
	 for(k=1;k<=b[j][0];k++)
	 a[num++]=b[j][k];
	 d*=10;//当前位数放大10倍 
}
	for(i=0;i<n;i++)cout<<a[i]<<" ";
	return 0;
}
