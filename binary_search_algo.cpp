#include<bits/stdc++.h>
using namespace std;
int binary_search (int a[],int n,int key){
    int left = 0;
    int right = n-1;
    while(left<=right){
        int mid = (left+right)/2;
        if(key==a[mid]){
            return mid;
        }
        else if(key>a[mid]){
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    return -1;

}
int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(array) / sizeof(array[0]);
    int key;
    cout << "enter key to search in array :";
    cin >> key;
    int index = binary_search(array, n, key);
    cout << "the position of key " << key << " is" << index;
}