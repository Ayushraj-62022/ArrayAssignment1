#include<iostream>
#include<climits>
using namespace std;
int main() {
    int arr[6] = {23, 19 , 16 ,14 ,17,11 };
    int max1 = INT_MIN;
    int max2 = INT_MIN ;
    for (int i = 0; i <=5; i++)
    {
        if (max1 <arr[i])
        {   max2 = max1 ;
            max1 =arr[i];
        }
        else if (max2 < arr[i] && arr[i] != max1)
        {
            max2 = arr[i];
        }
        
        
    }
    cout << max1 << endl;
    cout << max2 ;
    
}