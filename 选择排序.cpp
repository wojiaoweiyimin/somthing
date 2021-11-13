#include<iostream>
using namespace std;
int main()
{
	int num1[10] = { 10,56,73,9,15,36,22,89,115,3 }; // 创建一个数组，存放需要排序的数字
	int min = num1[0];  // 假设第一个元素为最小值           
	int min_Index = 0;  // 最小值下标
	int temp;
	/*如果需要自行输入再创建一个输入循环就可以了
	int num1[10]{};
	for(int i = 0; i < 10; i++)
	{
		cin>>num1[i];
	}*/
	cout << "排序前:" << endl;      // 直接输出排序前的数
	for (int i = 0; i < 10; i++)         
	{
		cout << num1[i] << " ";
	}
	cout << endl;
 
	for (int i = 0; i < 10; i++)     // 外层循环控制比较轮数
	{
		min = num1[i];           // 假设第一个元素为最小值，为了方便下面找最小值
		min_Index = i; 
		for (int j = i + 1; j < 10; j++)  // 内层循环控制第i轮后需要比较的次数
		{
			if (num1[j] < min)        // 按照从小到大顺序排序
			{
				min = num1[j];    // 找最小值
				min_Index = j;
			}
	}
		temp = num1[min_Index];     // 把取得的最小值和第一个数相交换
		num1[min_Index] = num1[i];
		num1[i] = temp;
	
   //第二轮循环从第二个数开始相同原理再找最小值，直到结束
}
 
 
	cout << "排序后:" << endl;
	for (int i = 0; i < 10; i++)          // 顺序输出排序后的数
	{
		cout << num1[i] << " ";
	}
	cout << endl;
	return 0;
}
