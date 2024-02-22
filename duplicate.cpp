#include<iostream>
using namespace std;
int main () {
    int arr[5]= {1 ,2,2, 3,4 };
    bool flag = false;
    for (int i = 0; i < 5; i++)
    {
        for ( int j = i+1; j < 5; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true ;
                cout << arr[i];
                break;
            }
            else{
                cout << " no duplicate " << arr[i];
            }
            
        }
        
        
        
    }
    
}