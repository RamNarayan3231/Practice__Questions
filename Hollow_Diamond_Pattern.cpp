#include<iostream>
using namespace std;
int main(){
    int tr;
    cin >> tr;
    //first row..................................
    int i=1;
    while(i<=tr){
        cout << "*";
        i++;
    
    }
    cout << endl;
    //first half middle row......................

    int row=1;
    int p=(tr+1)/2;
    int x=1;
    while(row<=p-1){
     int x=1;   
     while(x<=p-row){
        cout << "*";
        x++;
     }
     int y=1;
     while(y<=2*row-1){
        cout << " ";
        y++;
     }
     int s=1;
     while(s<=p-row){
        cout << "*";
        s++;
     }
     row++;
     cout << endl;
}
    //Second half middle row.....................
    row=1;
    int r=(tr-1)/2;
    while(row<=r-1){
        int a=1;
        while(a<=row+1){
            cout << "*";
            a++;
        }
        int b=1 ;
        //int c=r-1;
        while(b<=2*r-1-2*row){
            cout << " ";
            b++;
           //c--;
        }

        a=1;
        while(a<=row+1){
            cout << "*";
            a++;
        }
        row++;
        cout << endl; 
    }

    
    //LAst row...................................
    i=1;
    while(i<=tr){
        cout << "*";
        i++;
    }
    return 0;
}