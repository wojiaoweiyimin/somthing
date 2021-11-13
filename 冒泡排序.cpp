
#include <iostream>
#include <string>
using namespace std;
 
int main() {
	int n[10];
	int i, j;
	int temp;                                 //作为交换的媒介 
	cout << "请输入十个数字！" << endl;
	for (i = 0; i < 10; i++) {
		cin >> n[i];
	}
	//将最大的数浮上来 
	for (i = 0; i < 9;i++) {                  //共进行9步
		for (j = 0; j < 9 - i;j++) {      //在每一步进行10-i次两两比较
	//交换 
			if (n[j] > n[j + 1]) {
				temp = n[j];
				n[j] = n[j + 1];
				n[j + 1] = temp;
			}
		}
	}
	cout << "排序后的数据是：" << endl;
	for (i = 0; i < 10; i++)
	{
	    cout << n[i] << ' ';
	}
	cout << endl;
    system("pause");
	return 0;
}
