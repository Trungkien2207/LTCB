#include <bits/stdc++.h>
using namespace std;
int maxArea(int height[],int heightSize){
	int res=0;
    int L=0;
    int R=heightSize-1;
    int i=heightSize-1;
    while(L<=R){
    	if(height[L]<=height[R]){
    		res=max(res,i*height[L]);
    		i--;
    		L++;
		}
		else{
			res=max(res,i*height[R]);
			i--;
			R--;
		}
	}
    
	return res;
}
bool isPalindrome(int x) {
    int res=0;
    int tmp=x;
    while(x>0){
        int k=x%10;
        res=res*10+x;
        x/=10;
    }
    if(res==tmp){
        return true;
    }
    else{
        return false;
    }
}
int main (){
int n;cin>>n;
isPalindrome(n);
  return 0;
}

