// 5                   5 
// 5 4               4 5 
// 5 4 3           3 4 5 
// 5 4 3 2       2 3 4 5 
// 5 4 3 2 1   1 2 3 4 5 
// 5 4 3 2 1 0 1 2 3 4 5 
// 5 4 3 2 1   1 2 3 4 5 
// 5 4 3 2       2 3 4 5 
// 5 4 3           3 4 5 
// 5 4               4 5 
// 5                   5 
#include <iostream>
using namespace std;
int main() {
    int tr;
    cin >> tr;
    // upper part..............................
    int row=1;
    while(row<=tr){  
        //number...
        int j=1;
        int tr1=tr;
        while(j<=row){
            cout <<tr1<<" ";
            tr1--;
            j++;
        }
        //space....
        int i=1;
        while(i<=2*(tr-row)+1){
            cout << " "<<" ";
            i++;
        }
        //number...
        int k=tr-row+1;
        
        while(k<=tr){
            cout << k <<" ";
            k++;
        
        }
        row++;
        cout << endl;
        
    }
    //Mid Row.......................................
    //space....
    int k=tr;
    while(k>=1){
        cout << k <<" ";
        k--;
    }
    //zero(0).....
        cout << "0"<<" ";
    //Number ....
    k=1;
    while(k<=tr){
        cout << k <<" ";
        k++;
    }
    cout << endl;
    
    //Lower part....................................
    row=1;
    while(row<=tr){
        //number...
       int j=1;
       int tr2=tr; 
        while(j<=tr-row+1){
                cout << tr2<<" ";
                tr2--;
                j++;
        }
         //space....
        int i=1;
        while(i<=2*row-1){
            cout << " "<<" ";
            i++;
        }
        
        //number...
        j=row;
        
        while(j<=tr){
            cout << j<<" ";
            j++;
        }
        row++;
        cout << endl;
        
    }
    return 0;
}
