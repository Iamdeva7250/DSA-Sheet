// #include <bits/stdc++.h>
// using namespace std;

// void bubble_sort(int arr[], int n) {
//     // bubble sort
//     for (int i = n - 1; i >= 0; i--) {
//         for (int j = 0; j <= i - 1; j++) {
//             if (arr[j] > arr[j + 1]) 
//             {


//                 int temp = arr[j + 1];
//                 arr[j + 1] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }

//     cout << "After Using bubble sort: " << "\n";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << "\n";
// }

// int main()
// {
//     int arr[] = {13, 46, 24, 52, 20, 9};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "Before Using Bubble Sort: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     bubble_sort(arr, n);
//     return 0;
// }











#include<bits/stdc++.h>
using namespace std;

void Bubble_sort(int arr[], int n){

  for(int i=n-1; i>= 0; i--){
    // int didswap = 0;                   // for using how many runs times
    for(int j=0; j<= i-1; j++){
      if (arr[j] > arr[j+1]){

        int temp = arr[j+1];
        arr[j+1] = arr[j];
        arr[j] = temp;

        // didswap = 1;
      }
    }
    // if(didswap == 0){
    //   break;
    // }
    // cout<<"runs\n";
  }
}

int main(){

  int n;
  cin>>n;
  int arr[n];

  cout<<"Enter Before Bubble Sort: "<<endl;
  for(int i =0; i<n; i++)
  cin>>arr[i];

  Bubble_sort(arr, n);

  cout<<"After Bubble Sorting : "<<endl;

  for(int i =0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}