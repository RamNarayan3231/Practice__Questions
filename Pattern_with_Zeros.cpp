#include<iostream>
using namespace std;
int main(){
    int tr;
    cin >> tr;
    int row=1;
    while(row<=2){
        int i=1;
        while(i<=row){
            cout << row << "\t";
            i++;
        }
        row++;
        cout << endl;   
    }    
    
    row=1;
    while(row<=tr-2){
        cout << row+2 << "\t";
            int j=1;
            while(j<=row){
                cout << "0" << "\t";
                j++;
            }
            cout << row+2 << "\t";
        row++;
        cout << endl;
        
    } 
    return 0;
}