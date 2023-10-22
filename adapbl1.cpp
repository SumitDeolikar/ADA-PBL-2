#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid) {
    
}

int allocateBooks(vector<int> arr, int n, int m) {
    
}

int main() {
    int n, m;
    cout << "Enter the number of books (n): ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter the pages in each book: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number of students (m): ";
    cin >> m;

    int result = allocateBooks(arr, n, m);
    cout << "Minimum number of pages a student must read: " << result << endl;
    
    return 0;
}

