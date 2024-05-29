#include<iostream>
using namespace std;
int main() {
	int tr;
	cin>>tr;
	int row=1;
	while(row<=tr){
		int i=1;
		while(i<=row){
			cout<<"*";
			i++;
		}
		
		cout<<endl;
		row++;
	}
	return 0;
}