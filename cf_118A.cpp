#include<iostream>
#include<set>
#include<vector>
#include<string>
using namespace std;

char toLowerCase(char c){
	if(c>='a'&&c<='z'){
		return c;
	}
	else{
		return c-('A'-'a');
	}
}

int main(){
	int gap='A'-'a';
	vector<char> tmp={'A','O','Y','E','U','I'};
	set<char> vowels(tmp.begin(), tmp.end());

	string str;
	cin>>str;

	string newStr="";
	for(int i=0;i<str.size();i++){
		if(vowels.find(str[i])==vowels.end()&&vowels.find((char)(str[i]+gap))==vowels.end()){
			newStr+=".";
			newStr+=toLowerCase(str[i]);
		}
	}

	cout<<newStr<<endl;
	return 0;
}