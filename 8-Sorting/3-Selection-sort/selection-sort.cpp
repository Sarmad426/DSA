#include<iostream>
using namespace std;

class Selection_Sort {
    int size;
    int *arr; 
public:
    Selection_Sort() {
        cout << "Input array Size: " << endl;
        cin >> size;

        // Dynamically allocate memory for the array
        arr = new int[size];
    }

    ~Selection_Sort() {
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
        for (int i = 0; i < size - 1; i++) {
            int min = i;
            for (int j = i + 1; j < size; j++) {
                if (arr[j] < arr[min]) {
                    min = j;
                }
            }
            swap(arr[i], arr[min]);
        }
    }
};

int main() {
    Selection_Sort array;
    array.input_array();
    array.sort();
    array.display_array();
}
