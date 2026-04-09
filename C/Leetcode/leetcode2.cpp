#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <vector>
#include <climits>
#include <climits>
using namespace std;
int main (){
vector<int> a={1,1,1,1,1,1,1,1};
int target=7;
int sum=0;
int left=0;
int res=INT_MAX;
for(int i=0;i<a.size();i++){
	sum+=a[i];
	while(sum>=target){
		res=min(res,i-left+1);
		sum-=a[left];
		left++;
	}
}
printf("%d",res);
  return 0;
}

