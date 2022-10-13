#include <iostream>
using namespace std;

// // Inverted Number Pattern
// int main(){
//     int n;
//     cin >> n;
//     for(int i=1;i<=n;i++){
//         for (int j = 1; j <= i; j++){
//             cout<<j;
//         }cout<<endl;      
//     }
// }

// 0-1 Pattern
// for n =4
/* 
1
0 1
1 0 1
0 1 0 1
*/
int main(){
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
          (j%2==0 && i%2==0) || (j%2!=0 && i%2!=0) ? cout<< " 1" : cout<< " 0"; 
        }cout<<endl;
        
    }
    
}