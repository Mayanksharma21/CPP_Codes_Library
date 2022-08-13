#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> &v){
    for(int i = 0;i < v.size();i++){
        cout << v[i] << " ";
    }
}

void swipeAlternate(vector<int> &a){
    for(int i = 0;i < a.size();i += 2){
        if(i + 1 < a.size()){
            swap(a[i], a[i + 1]);
        }
    }
}

int main(){
    int size, element;
    vector<int> arr;
    
    cout << "Enter number of elements: ";
    cin >> size;
    
    cout << "Enter " << size << " elements: " << endl;
    for(int i = 0;i < size;i++){
        cin >> element;
        arr.push_back(element);
    }
    
    cout << "Original list is: ";
    print(arr);
    
    swipeAlternate(arr);
    cout << "\nSwapped list is: ";
    print(arr);

    return 0;
}