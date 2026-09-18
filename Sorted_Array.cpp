#include <iostream>
#include <cassert>

using namespace std;
bool isSorted(const int* arr, const int size);

//sorted array
void testsorted(){
    int arr []={1,2,3,4,5};
    bool result= isSorted(arr,5);
    assert(result == true);
}

// unsorted array
void unsorted(){
    int arr []={1,2,6,4,5};
    bool result= isSorted(arr,5);
    assert(result == false);
}

// duplicated values but sorted 
void duplicate_sorted(){
    int arr []={1,2,3,4,4};
    bool result= isSorted(arr,5);
    assert(result == true);
}

// one element
void one_element(){
    int arr []={1};
    bool result= isSorted(arr,1);
    assert(result == false);
}

// descending sorted 
void descending(){
    int arr []={5,4,3,2,1};
    bool result= isSorted(arr,5);
    assert(result == false);
}

// negative value array
void negative_values(){
    int arr []={-5,-4,-3,-2,-1};
    bool result= isSorted(arr,5);
    assert(result == true);
}

// Negative values un dorted array
void negative_unsorted(){
    int arr []={-5,-1,-7,-8,-1};
    bool result= isSorted(arr,5);
    assert(result == false);
}

void same_values(){
    int arr []={1,1,1,1,1};
    bool result= isSorted(arr,5);
    assert(result == true);
}

// empty array 
void empty(){
    int arr []={};
    bool result= isSorted(arr,0);
    assert(result == false);
}

// Sorted Function implementation 
bool isSorted(const int* arr, const int size) {
    if(size<=1){return false;
    }

    
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false; 
            cout<<"False"<<endl;
        }
    }
    return true;
    cout<<"True"<<endl;
}




int main() {
    same_values();
    cout<<"Ran Successfully!"<<endl;
    
    return 0;
}
