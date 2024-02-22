#include<iostream>
using namespace std;
int main () {
    int n;
    cout<< "enter the size of array";
    cin >> n;
    int arr[n] ;
    for (int i = 0; i <= n-1; i++)
    {
        cin >> arr[i];
    }
    //output
    int prod = 1;
    for (int i = 0; i <=n-1; i++)
    {
        prod *= arr[i];
    }
    cout << prod ;
    

}