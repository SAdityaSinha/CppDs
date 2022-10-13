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

// // Inverted Half pyramid
//
// int main(){
//     int n;
//     cin>>n;
//     for(int i=n;i>0;i--){
//         for(int j=0;j<i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// // Rotated Inverted Half pyramid
// //
// int main(){
//     int n;
//     cin>>n;
//     for(int i =0;i<n;i++){
//         // // My version
//         // for(int j=0; j<n-(i+1);j++){
//         //     cout<<" ";
//         // }
//         // for(int k = n-(i+1);k<n;k++){
//         //     cout<<"*";
//         // }
//         //
//         // // better optimized code
//         for(int j=0;j<n;j++){
//             if(j<(n-i)){
//                 cout<<" ";
//             }else{
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }
// }

// // Half pyrimed of nUmbers
// //
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=0;j<i;j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }

// // Floyed's Triangle
// //
// int main(){
//     int n;
//     cin>>n;
//     int v=0;
//     for(int i=1;i<=n;i++){
//         for(int j=0;j<i;j++){
//             cout<<++v<<" ";
//         }
//         cout<<endl;
//     }
// }

// Butterfly Pattern
//
// int main(){
//     int n;
//     cin>>n;
    //
    // created bymistake but its a nice butterfly pattern to have a look at
    //n *=2;
    // for(int i = 1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         if(i== n/2 || i == n/2 +1 || i ==j || j ==1 || j == n || j == n-i+1){
    //             cout<<"* ";
    //         }else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }
    //
    //Givin another try with myself
    //
    //
    //
//    

//Attempt for utterfly
/*
    required pattern 
    let's say for 
    n=4

    *      *
    **    **
    ***  ***
    ********
    ********
    ***  ***
    **    **
    *      *
    
    now --
    thinking it of with two parts

    */

//    int j,jRdm;
//    for (int i = 1; i <= n; i++)
//    {
//     for (int j = 1; j <= n*2; j++)
//     {
//         if(j<=4){
//             j<=i ? cout<<" *" : cout<<"  ";
//         }else{
//             jRdm = j%4 == 0 ? 0:4-j%4 +1;
//             jRdm<=i ? cout<<" *" : cout<<"  ";
//         }
//     }
//     cout<<endl;
//    }
//    //
//     for (int i = n; i >= 1; i--)
//    {
//     for (int j = 1; j <= n*2; j++)
//     {
//         if(j<=4){
//             j<=i ? cout<<" *" : cout<<"  ";
//         }else{
//             jRdm = j%4 == 0 ? 0:4-j%4 +1;
//             jRdm<=i ? cout<<" *" : cout<<"  ";
//         }
//     }
//     cout<<endl;
//    }
   //
   //
   //
//   /*
//   finally made the pattern all by myself Idont know how much time it took but 
//   finally I did it all by my own 
//  I dont know that wether this code is efficient or not thus lets check
//   */
  //
  //
  //viewing their code

//My also is better...





