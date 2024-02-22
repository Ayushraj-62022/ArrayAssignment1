#include<iostream>
using namespace std;
int main(){
    int a[5] ;
    cout<< "enter five elements of array :";
    for (int i = 0; i <=4; i++)
    {
        cin >> a[i];
    }
    int x= 0;
    bool flag = false;
    for (int i = 0; i < 4; i++)
    {
        if (a[i] != x)
        {
            cout << endl;
            flag = true;
            break;
        }
        else x++;
        if (flag == false) cout << endl;
        {
            /* code */
        }
        
        
    }
    
}