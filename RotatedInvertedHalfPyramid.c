#include <iostream>
using namespace std;


// Rotated Inverted Half pyramid
//
int main(){
    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        // My version
        for(int j=0; j<n-(i+1);j++){
            cout<<" ";
        }
        for(int k = n-(i+1);k<n;k++){
            cout<<"*";
        }
        
        // better optimized code
        
        for(int j=0;j<n;j++){
            if(j<(n-i)){
                cout<<" ";
            }else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}
