#include<iostream>
#include<vector>
using namespace std;

int Bin_search(vector<int> &v, int target){
    int first = 0, last = v.size() - 1;
    int mid = (first + last) / 2;

    while(first <= last){

        if(v[mid] == target){
            return mid;
        }
        else if(target > v[mid]){
            first = mid + 1;
        }
        else{
            last = mid - 1;
        }
        mid = (first + last) / 2;

    }

    return -1;
}

int main(){
    int size, ele, target, loc;
    vector<int> arr;
    cout << "Enter no. of elements: ";
    cin >> size;

    cout << "Enter " << size << " elements in sorted order: ";
    for(int i = 0;i < size;i++){
        cin >> ele;
        arr.push_back(ele);
    }

    cout << "Enter target element to find: ";
    cin >> target;

    loc = Bin_search(arr, target);

    if(loc == -1){
        cout << target << " is not found." << endl;
    }
    else{
        cout << target << " is found at index " << loc << endl;
    }

    return 0;
}