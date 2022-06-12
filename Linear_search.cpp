#include<iostream>
#include<vector>
using namespace std;

int lin_search(vector<int> &v, int target){
    int size = v.size();

    for(int i = 0;i < size;i++){
        
        if(v[i] == target){
            return i;
        }
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

    loc = lin_search(arr, target);

    if(loc == -1){
        cout << target << " is not found." << endl;
    }
    else{
        cout << target << " is found at index " << loc << endl;
    }

    return 0;
}