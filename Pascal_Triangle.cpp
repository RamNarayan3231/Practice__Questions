#include <iostream>
using namespace std;
int fact(unsigned int a){
    if (a==0||a==1){
        return 1;
    }
    else{
        return a*fact(a-1);
    }
}
int main() {
    int tr;
    cin >> tr;
    int row=0;
    while(row <=tr-1){
        int i=0;
        while(i<=row){
            int c=fact(row)/(fact(i)*fact(row-i));
            cout << c << "\t";
            i++;
        }
        row++;
        cout << endl;
    }
    return 0;
}
