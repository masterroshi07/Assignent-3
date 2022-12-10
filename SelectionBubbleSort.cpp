#include <iostream>
using namespace std;
int bubble_comparisons=0,bubble_swaps=0,selection_comparisons=0,selection_swaps=0;
void Bubble_Sort(int arr[], int n) 
{
    for(int i = 1; i < n; ++i)     
    {   
                for(int j = 0; j <= (n - i - 1); ++j)  
        {   
            bubble_comparisons++;
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]); 
                bubble_swaps++;
            }
                
        }
    }
}
void Selection_Sort(int arr[], int n) 
{
    for(int i = 0; i < n - 1; ++i) 
    {
        int min_index = i; 
        for(int j = i + 1; j < n; ++j) 
        {   
            selection_comparisons++;
            if(arr[j] < arr[min_index]) 
                min_index = j;
        }
        swap(arr[i], arr[min_index]); 
        selection_swaps++;
    }
}

int main(){
    cout<<"Enter size of array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    
    cout<<"Enter elements of array"<<endl;
	for(int i=0;i<n;i++) {cin>>arr[i];}
    int arr2[n];
    for(int i=0;i<n;i++){
        arr2[i] = arr[i];
    }
    Selection_Sort(arr,n);
    Bubble_Sort(arr2,n);
    cout<<"Number of Bubble sort comparions: "<<bubble_comparisons<<' '<<"Number of Bubble sort swaps: "<<bubble_swaps<<endl;
    cout<<"Number of Selection sort comparions: "<<selection_comparisons<<' '<<"Number of Selection sort swaps: "<<selection_swaps<<endl;
}
