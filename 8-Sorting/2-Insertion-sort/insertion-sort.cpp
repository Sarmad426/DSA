#include<iostream>
using namespace std;

class Insertion_Sort {
    int size;
    int *arr; 
public:
    Insertion_Sort() {
        cout << "Input array Size: " << endl;
        cin >> size;

        // Dynamically allocate memory for the array
        arr = new int[size];
    }

    ~Insertion_Sort() {
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

   void sort(){
            for(int i=1;i<size;i++){
                int current = arr[i];
                int j= i-1;
                while(j>=0 && arr[j]> current){
                    arr[j+1] = arr[j];
                    j--;
                }
                arr[j+1] = current;
            }
        }
};

int main() {
    Insertion_Sort array;
    array.input_array();
    array.sort();
    array.display_array();
}
