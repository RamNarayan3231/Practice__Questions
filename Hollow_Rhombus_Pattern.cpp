#include <iostream>
using namespace std;
int main() {
    int tr;
     cin >> tr;
    // first part ..............
    int i=1;
    while(i<=tr-1){
        cout << " ";
        i++;
    }
    int j=1;
    while(j<=tr){
        cout << "*";
        j++;
    }
    cout << endl;
    //second part..................
    int row=1;
    while(row<=tr-2){
        int p=1;
    while(p<=tr-1-row){
        cout<< " ";
        p++;
    }
    cout << "*";
    int q=1;
    while(q<=tr-2){
        cout <<" ";
        q++;
    }
    cout << "*";
    row++;
    cout << endl;

    }

    //third part....................
    //  int x=1;
    // while(x<=tr-1){
    //     cout << " ";
    //     x++;
    // }
    int y=1;
    while(y<=tr){
        cout << "*";
        y++;
    }
   // cout << endl;




    return 0;
}
