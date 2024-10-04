#include <iostream>
using namespace std;

const int MAX_SIZE = 100;
int main() {
    int c;
    int arr[MAX_SIZE];
    int n = 0;
    int e, pos;
        cout << "\n---- MENU ----" << endl;
        cout << "1. Create an Array" << endl;
        cout << "2. Display Array" << endl;
        cout << "3. Insert Element" << endl;
        cout << "4. Delete Element" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> c;
        if(c>=1&&c<=5)
        {

        switch(c) {
            case 1:
                createArr(arr, n);
                break;
            case 2:
                dispArr(arr, n);
                break;
            case 3:
                cout << "Enter element to insert: ";
                cin >> e;
                cout << "Enter position to insert (1 to " << n + 1 << "): ";
                cin >> pos;
                if (pos < 1 || pos > n + 1) {
                    cout << "Invalid position!" << endl;
                } else {
                    insEl(arr, n, e, pos - 1);
                }
                break;
            case 4:
                cout << "Enter position to delete (1 to " << n << "): ";
                cin >> pos;
                if (pos < 1 || pos > n) {
                    cout << "Invalid position!" << endl;
                } else {
                    delEl(arr, n, pos - 1);
                }
                break;
            case 5:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 5." << endl;
        }
    } 
    else
    cout<<"Invalid";
    return 0;
}

void createArr(int arr[], int &n) {
    int num;

    cout << "Enter the number of elements for the array: ";
    cin >> num;

    cout << "Enter " << num << " elements:" << endl;
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    n = num;
    cout << "Array created successfully." << endl;
}

void dispArr(const int arr[], int n) {
    if (n == 0) {
        cout << "Array is empty." << endl;
        return;
    }

    cout << "Array elements:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insEl(int arr[], int &n, int e, int pos) {
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = e;
    n++;

    cout << "Element inserted successfully." << endl;
}

void delEl(int arr[], int &n, int pos) {
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    cout << "Element deleted successfully." << endl;
}
