#include<iostream>
#include<stdlib.h>
#include <cstring>
using namespace std;
int main()
{
	const int m=10;//Ͱ�ĸ��� 
	const int n=8;//���ݸ��� 
	int b[m][n+1];//Ͱ����  
	int a[n]={2,5,20,5,976,678,128,123};
	int w=3;//������ݵ�λ�� 
	int i,j,k,x,num,d=1;
	for(i=1;i<=w;i++)//w��ѭ�� 
	{
		memset(b,0,sizeof(b));//��ʼ��Ͱ 
		for(j=0;j<-n;j++){
		x=a[j]/d%10;
		b[x][++b[x][0]]=a[j];//���� 
	 } 
	 num=0;
	 for(j=0;i<m;j++)//����m��Ͱ 
	 for(k=1;k<=b[j][0];k++)
	 a[num++]=b[j][k];
	 d*=10;//��ǰλ���Ŵ�10�� 
}
	for(i=0;i<n;i++)cout<<a[i]<<" ";
	return 0;
}
