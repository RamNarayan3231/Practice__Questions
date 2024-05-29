#include <iostream>
using namespace std;
int main() {
    int tr;
    cin >> tr;
	
    cout << endl;
// UPPER HALF
    int row=1;
    int p=(tr+1)/2;
    while(row<=p){
         // space--------
        int i=1;
        while(i<=p-row){
            cout << " \t";
            i++;
        }
         // star--------
        int j=1;
        while (j<=2*row-1){
            cout << "*\t";
            j++;
        }
        cout << endl;
        row++;
        } 
// /LOWER HALF
        row=1;
        int  r=(tr-1)/2;
        while(row<=r){
            //space--------
            int i=1;
            while(i<=row){
                cout << " \t";
                i++;
            }
            // star--------
            int j=1;
            while(j<=2*r-2*row+1){
                cout << "*\t";
                j++;
            }
            row++;
            cout << endl;
    }
    return 0;
}
