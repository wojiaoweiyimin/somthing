#include<iostream>
  #include<algorithm>
  #include<queue>
  #include<cmath>
  using namespace std;
  
  priority_queue<int> big;
  priority_queue<int,vector<int>,greater<int> > small;
  int a[100010];
 
 int main(){
     int n;
     cin >> n;
    for(int i = 1; i <= n; i++) 
        cin >> a[i];
     big.push(a[1]);
    cout << a[1] << endl;
    for(int i = 2; i <= n; i++){
        if(a[i] > big.top()) small.push(a[i]);
         else big.push(a[i]);
         while(abs(int(big.size() - small.size())) > 1){
             if(big.size() > small.size())
                 small.push(big.top()) , big.pop();
             else
                 big.push(small.top()) , small.pop();
         }
         if(i % 2)
             cout << (big.size() > small.size() ? big.top() : small.top()) << endl;
    }
   
     return 0;
 }
