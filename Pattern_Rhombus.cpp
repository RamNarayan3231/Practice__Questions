#include<iostream>
using namespace std;
int main(){
    int tr;
    cin >> tr;
    int row=1;
    int a;
    int b;
     //upper part (tr)..........................................................
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
            b=2*row-2;
            while(s<=row){
                cout << b <<"\t";
                b--;
                s++;
            }
        }
        row++;
        cout << endl;
    }
    //Lower part (tr-1)..........................................................
    int tr1=tr-1;
    row=1;
    while(row<=tr1){
        int i=1;
        while(i<=row){
            cout << " " <<"\t";
            i++;
        }
         int j=1;
        a=tr1-row+1;
        while(j<=tr1-row+1){
            cout << a <<"\t";
            a++;
            j++;
        }
        
            int s=1;
            b=2*tr1-2*row;
            while(s<=tr1-row){
                cout << b <<"\t";
                b--;
                s++;
            }
        
        row++;
        cout << endl;
    }
    
    return 0;
}