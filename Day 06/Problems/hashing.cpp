#include<bits/stdc++.h>
using namespace std;
//   int hashh[10000000];


// int main(){
//   int n;
//   cin>>n;

//   int arr[n];
//   for(int i = 0; i < n; i++){
//     cin>>arr[i];
//   }
//   for(int i = 0; i < n; i++){
//     hashh[arr[i]] += 1;
//   }

//   int q;
//   cin>>q;

//   while(q--){
//     int number;
//     cin>>number;


//     cout<<hashh[number]<<endl;
//   }
//   return 0;

// }


// NUMBER HASHING 
// ASSCII 

// int main(){
//   string s;
//   cin>>s;

//   // pre Compute
//   int hash[256] = {0};
//   for(int i = 0; i <s.size(); i++){
//     hash[s[i]]++;
//   }

//   int q;
//   cin>>q;
//   while (q--)
//   {
//     char c;
//     cin>>c;

//     // fetch

//     cout<<hash[c]<<endl;
//   }

//   return 0;
// }




int main(){
  int n;
  cin>>n;
  int arr[n];
  unordered_map<int, int>mpp;

  for(int i = 0; i<n; i++){
    cin>>arr[i];
  }

  // pre -compute

  for(int i = 0; i< n; i++){
    mpp[arr[i]]++;
  }

  // iterate in the map
  for(auto it : mpp) {
  cout<<it.first<<"->" <<it.second<<endl;
  }

  int q;
  cin>>q;

  while (q--)
  {
    int number;
    cin>>number;

    cout<<mpp[number]<<endl;
  }
  return 0;
}