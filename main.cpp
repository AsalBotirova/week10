#include <iostream>
using namespace std;

/*
//prob6:
int main() {
    char inputChar;
    int frequency[26] = {0};
    cout << "Enter a character (0 to terminate): ";

    while (true) {
        cin >> inputChar;
        if (inputChar == '0')
            break;

        if (islower(inputChar))
            frequency[inputChar - 'a'] ++;
    }

    cout <<"\nThe frequency of a lowercase letters:\n";
    for (int i = 0; i < 26; i++) {
        if (frequency[i] != 0)
            cout << char('a'+i) << ": " << frequency[i] << "\n";
    }
}
*/


/*
//prob7
int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    cout << "Enter array elements: ";
    for (int i=0; i<size; i++)
        cin >> arr[i];

    int temp;
    for (int i=0; i<size-1; i++) {
        for (int j=0; j<size-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout << "Sorted array: " << endl;
    for (int i=0; i<size; i++)
        cout << arr[i] << " ";
}
*/


/*
//prob 8
#include <cstdlib>
#include <ctime>
int main() {
    int frequency[6]={0};

    srand(time(0));

    for (int i=0;i<100000;i++) {
        int roll = rand() % 6+1;
        frequency[roll-1]++;
    }

    cout<<"Results of frequencies: "<<endl;
    for (int i=0;i<6;i++)
        cout<<"Number " << i +1 << ": "<<frequency[i]<<endl;
}
*/

/*
//prob 9
void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    reverseArray(arr, 0, n - 1);

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
*/


//prob10
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool isSorted = true;

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            isSorted = false;
            break;
        }
    }

    if (isSorted)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
