#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	for(int i=0;i<=2*n;i++){
		int row=i<=n?i:2*n-i;
		int num=0;
		for(int j=0;j<=n+row;j++){
			if(j!=0){
				cout<<" ";
			}

			if(j>=n-row&&j<n){
				cout<<num++;
			}
			else if(j>=n&&j<=n+row){
				cout<<num--;
			}
			else{
				cout<<" ";
			}

		}
		cout<<endl;
	}

	return 0;
}