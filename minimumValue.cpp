#include<iostream>
using namespace std;
int main(){
    int arr[6] = {23, 45, 67 ,12 ,32 ,14 };
    int min= arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        
    }
    cout << min ;
    
}