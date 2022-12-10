#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> &arr, int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x){
            
            return mid;
        }
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }

    return -1;
}

int main(){
    cout<<"Enter size of array"<<endl;
    int n;
    cin>>n;
    cout<<"Enter elements of array"<<endl;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<"Enter element to be found:"<<endl;
    int x;
    cin>>x;
    sort(v.begin(),v.end());
    int result = binarySearch(v, 0, n - 1, x);
    if(result == -1) cout << "Element is not present in array";
    else cout << "Element is present at index " << result;
}
