// #include <bits/stdc++.h>
// using namespace std;

// void selection_sort(int arr[], int n)
// {
//   for (int i = 0; i < n - 1; i++)
//   {
//     int mini = i;
//     for (int j = i; j < n; j++)
//     {
//       if (arr[j] < arr[mini])
//       {
//         mini = j;
//       }
//     }

//     int temp = arr[mini];
//     arr[mini] = arr[i];
//     arr[i] = temp;
//   }

//   cout << "After Selection Sort :" << endl;
//   for (int i = 0; i < n; i++)
//   {
//     cout << arr[i] << " ";
//   }
//   cout << endl;
// }

// int main()
// {
//   int arr[] = {13, 15, 45, 98, 2, 5, 23};
//   int n = sizeof(arr) / sizeof(arr[0]);
//   cout << "Before Selection sort :" << endl;
//   for (int i = 0; i < n; i++)
//   {
//     cout << arr[i] << " ";
//   }

//   cout<<endl;
//   selection_sort(arr, n);

//   return 0;
// }










// Another

#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int mini = i;
    for (int j = i; j < n; j++)
    {
      if (arr[j] < arr[mini])
      {
        mini = j;
      }
    }

    int temp = arr[mini];
    arr[mini] = arr[i];
    arr[i] = temp;
  }
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  
  cout<<"Before Selection Sort: "<<endl;
  for(int i = 0; i<n; i++)
  cin>>arr[i];
  selection_sort(arr, n);

  cout<<"After Selection Sort:" <<endl;
  for(int i = 0; i<n; i++){
    
    cout<<arr[i]<<" ";
  }
  // return 0;
} 