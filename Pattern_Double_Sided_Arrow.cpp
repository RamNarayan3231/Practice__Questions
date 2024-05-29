#include <iostream>
using namespace std;
int main() {
    int tr;
    cin >> tr ; 
    int tr1=(tr+1)/2;
    int tr2=(tr-1)/2;
    //Upper part....................................................
    int row=1;
    while(row<=tr1){
        //space.........
        int i=1;        
        while(i<=2*tr1-2*row){
            cout << " " << " ";
            i++;
        }
        //number.......
        int j=1;
        int p=row;
        while(j<=row){
            cout << p << " ";
            j++;
            p--;
        }
        //space.........
        int k=1;
        while(k<=2*row-2){
            cout << " " << " ";
            k++;
        }
        //number.......
        int l=1;
        int q=1;
        while(l<=row){
            if (row==1){
                break;
            }else{
            cout << q << " ";
            l++;
            q++;
            }
        }
        row++;
        cout << endl;
    }
    //Lower part...................................
    row=1;
    while(row<=tr2){
        //space.........
        int i=1;
        while(i<=2*row){
            cout << " " << " ";
            i++;
        }
        //number.......
        int j=1;
        int p=tr2-row+1;
        while(j<=tr2-row+1){
            cout << p << " ";
            j++;
            p--;
        }
        //space.........
        int k=1;
        while(k<=2*tr2-2*row){
            cout << " " << " ";
            k++;
        }
        //number.......
        int l=1;
        int q=1;
        while(l<=tr2-row+1){
            if(row==tr2){
                break;
            }
            cout << q << " ";
            l++;
            q++;
        }
        row++;
        cout << endl;
    }
    return 0;
}
