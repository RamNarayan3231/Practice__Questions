//  5 4 3 2 1 0 1 2 3 4 5
//    4 3 2 1 0 1 2 3 4 
//      3 2 1 0 1 2 3 
//        2 1 0 1 2 
//          1 0 1 
//            0 
//          1 0 1 
//        2 1 0 1 2 
//      3 2 1 0 1 2 3 
//    4 3 2 1 0 1 2 3 4 
//  5 4 3 2 1 0 1 2 3 4 5
#include <iostream>
using namespace std;
int main() {
    int tr;
    cin >> tr;
    // upper part..............................
    int row=1;
    while(row<=tr){
        //space....
        int i=1;
        while(i<=row-1){
            cout << " "<<" ";
            i++;
        }
        //number...
        int j=1;
        int tr1=tr-row+1;
        while(j<=tr-row+1){
            cout << tr1<<" ";
            tr1--;
            j++;
        }
        //zero(0).....
        cout << "0"<<" ";
        //number...
        j=1;
        tr1=tr-row+1;
        while(j<=tr-row+1){
            cout << j<<" ";
          //  tr1--;
            j++;
        }
        row++;
        cout << endl;
        
    }
    //Mid Row.......................................
    int k=1;
    //space....
    while(k<=tr){
        cout << " "<<" ";
        k++;
    }
    //zero.....
    cout <<"0"<<" ";
    cout << endl;

    //Lower part....................................
    row=1;
    while(row<=tr){
        //space....
        int i=1;
        while(i<=tr-row){
            cout << " "<<" ";
            i++;
        }
        //number...
       int j=row;
        while(j>=1){
                cout << j<<" ";
                j--;
        }
        //zero(0).....
        cout << "0"<<" ";
        //number...
        j=1;
        while(j<=row){
            cout << j<<" ";
            j++;
        }
        row++;
        cout << endl;
        
    }
    return 0;
}
