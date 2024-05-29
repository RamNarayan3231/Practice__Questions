#include<iostream>
using namespace std;
int main(){
    int tr;
    cin >> tr;
   
    //first to second lat row......................

    int row=1;
    while(row<=tr-1){
        int a=1;
        while(a<=row){
            cout << "*";
            a++;
        }
        int b=1 ;
        while(b<=2*tr-1-2*row){
            cout << " ";
            b++;
        }

         a=1;
        while(a<=row){
            cout << "*";
            a++;
        }
        row++;
        cout << endl; 
    }

    
    //LAst row...................................
    int i=1;
    while(i<=2*tr-1){
        cout << "*";
        i++;
    }
    return 0;
}