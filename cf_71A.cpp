#include<iostream>
#include<string>
using namespace std;

string abbreviate(string word){
	if(word.size()<=10){
		return word;
	}

	int count=0;
	string new_word(1, word[0]);
	for(int i=1;i<word.size();i++){
		if(i==word.size()-1){
			new_word+=to_string(count)+word[i];
		}
		else{
			count++;
		}
	}

	return new_word;
}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string str;
		cin>>str;
		cout<<abbreviate(str)<<endl;
	}
	return 0;
}
