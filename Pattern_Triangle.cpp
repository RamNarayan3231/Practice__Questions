#include<iostream>
using namespace std;
int main(){
    int tr;
    cin >> tr;
    int row=1;
    int a;
    int b;
    while(row<=tr){
        int i=1;
        while(i<=tr-row){
            cout << " " <<"\t";
            i++;
        }
         int j=1;
        a=row;
        while(j<=row){
            cout << a <<"\t";
            a++;
            j++;
        }
        if(row>=2){
            int s=2;
            b=row;
            while(s<=row){
                cout << b <<"\t";
                
                b--;
                s++;
            }
        }
        row++;
        cout << endl;
    }
    
    return 0;
}