#include<iostream>
using namespace std;

int main() {
	int tr;
	cin>>tr;
	int row=1,j=1;
	while(row<=tr){
        int i=1;
        while(i<=row){
		cout <<j <<"\t";
		j++;
		i++;
	}
	row++;
	cout<<endl;
    }
	return 0;
}