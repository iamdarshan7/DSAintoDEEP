#include<iostream>
using namespace std;

int main() {
    // int n,m;
    // cin>>n,m;
    int arr[2][2];
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<"\ns["<<i<<"]["<<j<<"]=  ";
            cin>>arr[i][j];
        }
    }

    cout<<"Give the element of array: "<<endl;
    int k;
    cin>>k;
    bool flag = false;
    cout<<"The Matrix is: "<<endl;

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            // cout<<"\t"<<arr[i][j];
            if(arr[i][j] == k){
                cout<<i<<" "<<j<<endl;
                flag=true;
            }
        }
        cout<<endl;
    }

    if(flag){
        cout<<"Element is found"<<endl;
    }
    else{
        cout<<"Element is not found"<<endl;
    }

    return 0;
}


// int main()
// {
//     // initializing the 3-dimensional array
//     int x[2][3][2] =
//     {
//         { {0,1}, {2,3}, {4,5} },
//         { {6,7}, {8,9}, {10,11} }
//     };

//     // output each element's value
//     for (int i = 0; i < 2; ++i)
//     {
//         for (int j = 0; j < 3; ++j)
//         {
//             for (int k = 0; k < 2; ++k)
//             {
//                 cout << "Element at x[" << i << "][" << j
//                     << "][" << k << "] = " << x[i][j][k]
//                     << endl;
//             }
//         }
//     }
//     return 0;
// }