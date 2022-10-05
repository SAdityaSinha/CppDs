#include <iostream>
using namespace std;


// // Rectangle pattern
// int main(){
//     int rows,col;
//     cin >>rows>>col;
//
//     for(int i =0 ; i<rows;i++){
//         for(int j = 0;j<col;j++){
//             cout<<"*";
//         }
//         cout<< endl;
//     }
// }

// // Hollow rectangle pattern 
// int main(){
//     int row,col;
//     cin>>row>>col;
//
//     //my approach  #it woeked but we have a bettee one 
//
//     // for(int i = 0;i<row;i++){
//     //     if(i==0 || i==row-1){
//     //         for(int j = 0;j<col;j++){
//     //             cout<<"*";
//     //         }
//     //         cout<<endl;
//     //     }else{
//     //         cout<<"*";
//     //         for(int k = 0 ; k <col-2;k++){
//     //             cout<<" ";
//     //         }
//     //         cout<<"*"<<endl;
//     //     }
//     // }
//
//
//     // better approach 
//
//     for(int i = 0;i<row;i++){
//         for(int j=0;j<col;j++){
//             if(i==0 || j == 0 || i == row-1 || j == col-1){
//                 cout<<"*";
//
//             }else{
//                 cout<<" ";
//             }
//
//         }
//         cout<<endl;
//     }
// }

// Inverted Half pyramid

int main(){
    int n;
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
