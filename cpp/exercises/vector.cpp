#include <iostream>
#include <vector>

using namespace std;

/*
  More dinamic and easy code example with C++
*/

int swap_array_elements() {
  int n;
  cout << "Enter the number of elements: ";
  cin >> n;

  vector<int> arr(n);
  cout << "Enter the elements: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int pos1, pos2;
  cout << "Enter the positions to swap: ";
  cin >> pos1 >> pos2;

  swap(arr[pos1], arr[pos2]);

  cout << "Array with swapped positions: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}