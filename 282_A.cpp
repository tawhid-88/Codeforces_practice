#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int sum=0;
	string s;
	while(n--){
	    cin>>s;
	    if(s[0]=='+' && s[1]=='+' && s[2]=='X'){
	        sum+=1;
	    }else if(s[0]=='X' && s[1]=='+' && s[2]=='+'){
	        sum+=1;
	    }else if(s[0]=='X' && s[1]=='-' && s[2]=='-'){
	        sum-=1;
	    }
	    else if(s[0]=='-' && s[1]=='-' && s[2]=='X'){
	        sum-=1;
	    }
	}
	cout<<sum;
	return 0;
}