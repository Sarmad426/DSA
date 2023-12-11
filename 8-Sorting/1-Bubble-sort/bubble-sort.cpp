#include<iostream>
using namespace std;

class Bubble_Sort {
    int size;
    int *arr; 
public:
    Bubble_Sort() {
        cout << "Input array Size: " << endl;
        cin >> size;

        // Dynamically allocate memory for the array
        arr = new int[size];
    }

    ~Bubble_Sort() {
        // Deallocate memory when the object is destroyed
        delete[] arr;
    }

    void input_array() {
        cout << "Input " << size << " values in array: " << endl;
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
            cout << endl;
        }
    }

    void display_array() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << ", ";
        }
    }

    void swap(int &num1, int &num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    void sort() {
    	bool sorted;
          for(int i=0;i<size;i++){
          	sorted = true;
        	for(int j=1;j<size - i;j++){
         		if(arr[j] < arr[j-1]){
         			swap(arr[j],arr[j-1]);
         			sorted = false;
        		}
			}	
			if(sorted){
        			return;
				}	   
    	}
	}
};

int main() {
    Bubble_Sort array;
    array.input_array();
    array.sort();
    array.display_array();
}

