#include<iostream>
using namespace std;
int main()
{
	int num1[10] = { 10,56,73,9,15,36,22,89,115,3 }; // ����һ�����飬�����Ҫ���������
	int min = num1[0];  // �����һ��Ԫ��Ϊ��Сֵ           
	int min_Index = 0;  // ��Сֵ�±�
	int temp;
	/*�����Ҫ���������ٴ���һ������ѭ���Ϳ�����
	int num1[10]{};
	for(int i = 0; i < 10; i++)
	{
		cin>>num1[i];
	}*/
	cout << "����ǰ:" << endl;      // ֱ���������ǰ����
	for (int i = 0; i < 10; i++)         
	{
		cout << num1[i] << " ";
	}
	cout << endl;
 
	for (int i = 0; i < 10; i++)     // ���ѭ�����ƱȽ�����
	{
		min = num1[i];           // �����һ��Ԫ��Ϊ��Сֵ��Ϊ�˷�����������Сֵ
		min_Index = i; 
		for (int j = i + 1; j < 10; j++)  // �ڲ�ѭ�����Ƶ�i�ֺ���Ҫ�ȽϵĴ���
		{
			if (num1[j] < min)        // ���մ�С����˳������
			{
				min = num1[j];    // ����Сֵ
				min_Index = j;
			}
	}
		temp = num1[min_Index];     // ��ȡ�õ���Сֵ�͵�һ�����ཻ��
		num1[min_Index] = num1[i];
		num1[i] = temp;
	
   //�ڶ���ѭ���ӵڶ�������ʼ��ͬԭ��������Сֵ��ֱ������
}
 
 
	cout << "�����:" << endl;
	for (int i = 0; i < 10; i++)          // ˳�������������
	{
		cout << num1[i] << " ";
	}
	cout << endl;
	return 0;
}
