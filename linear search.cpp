#include <iostream>
using namespace std;

int linearS(int arr[],int n,int key){
    for( int i = 0 ; i < n ; i++ ){
        if( arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter no of elements : ";
    cin>>n;

    int arr[n];

    cout<<"Enter elements : ";
    for(int i=0 ; i<n; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the element : ";
    cin>>key;

    cout<<linearS(arr,n,key)<<endl;
} 
