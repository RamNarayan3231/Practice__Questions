#include <iostream>
using namespace std;
int main() {
    int tr,fibo=1;
    cin >> tr;
    int fibo1=0;
    int fibo2=1;
    cout <<fibo1<<"\t"<<endl;
    cout << fibo2 <<"\t";
    int row=1;
    while(row<=tr-1){        
        int i=1;
        while(i<=row+1){
            if(row==1){
                cout <<fibo << "\t";
                fibo1=fibo2;
                fibo2=fibo;
                fibo=fibo1+fibo2;
                break;
            }
            else{
            cout << fibo <<"\t";
            i++;
            }
             fibo1=fibo2;
             fibo2=fibo;
             fibo=fibo1+fibo2;
        }
        row++;
        cout << endl;
    }
    return 0;
}
