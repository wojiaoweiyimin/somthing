#include<iostream>
using namespace std;
int f(int n){
	if(n==1)return 1;
	if(n==2)return 2;
	return f(n-1)+f(n-2);
} 
int main()
{
	cout<<f(10); //最好时间复杂度为O（1），最坏时间复杂度为O(N)，平均复杂度是O(N)
	
}
