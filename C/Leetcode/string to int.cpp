#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int myAtoi(string s) {
int dau=1;
long long res=0;
bool check=false;
for(int i=0;i<s.size();i++){
	if(s[i]==' ' && check==false){
		continue;
	}
	if((s[i] == '-' || s[i] == '+') && check==false){
        if(s[i]=='-')
		dau=-1;
		check=true;
		continue;
	}
	if(s[0]>='A' && s[0]<='z'){
		break;
	}
    if (s[i] >= '0' && s[i] <= '9'){
    	res=res*10 + (s[i]-'0');
    	check=true;
    	if (res * dau >= INT_MAX) return INT_MAX;
        if (res * dau <= INT_MIN) return INT_MIN;
	}
	else{
		break;
	}
}
return res*dau;
    }
};


int main (){


  return 0;
}

