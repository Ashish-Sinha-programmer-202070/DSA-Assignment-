#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter array size : "<<endl;
    int a=0,b=0;
    cin>>a>>b;
    int arr[a][b];
    cout<< "The matrix is of size : "<< a<<"X"<< b <<endl<<endl;
    cout<< "Enter Array Elements : "<< endl;

    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cin>>arr[i][j];
        }
        cout<< endl;
    }

    cout<<"Array Entered : "<<endl;
    for(int i=0; i<a; i++){
        for (int j=0; j<b; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int z;
    cout<<"Enter element to search : ";
    cin>>z;
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            if(arr[i][j]==z){
                cout<<"Element found at : "<< "Array["<<i+1<<"]" << "["<< j+1<<"]" << endl;
            }
            else{
            cout<<"Element not found!"<< endl;
            return 0;
            }
        }
        
    }
    return 0;
}