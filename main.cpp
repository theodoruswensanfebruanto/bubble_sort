#include <iostream>
#include <vector>

using namespace std;

int main() {
  while (true) {
    #ifdef _WIN32
    system("cls");
    #else
    system("clear");
    #endif

    cout << "BUBBLE SORT";
    cout << "\n";
    cout << "\n";

    int n = 0;
    while (n <= 0) {
      cout << "Input your size of array: ";
      cin >> n;
    }
    cout << "\n";

    vector<int> a(n);

    cout << "Good, now please input the elements.";
    cout << "\n";
    for (int i = 0; i < n; i++) {
      cout << "Index " << i << ": ";
      cin >> a[i];
    }
    cout << "\n";

    cout << "Before: ";
    for (int i = 0; i < n; i++) {
      cout << a[i];
      
      if (i < n - 1) {
        cout << ", ";
      } else {
        cout << ".";
        cout << "\n";
      }
    }

    for (int i = 0; i < n - 1; i++) {
      for (int j = 0; j < n - 1 - i; j++) {
        if (a[j] > a[j + 1]) {
          int temp = a[j];
          a[j] = a[j + 1];
          a[j + 1] = temp;
        }
      }
    }

    cout << "After: ";
    for (int i = 0; i < n; i++) {
      cout << a[i];

      if (i < n - 1) {
        cout << ", ";
      } else {
        cout << ".";
        cout << "\n";
        cout << "\n";
      }
    }

    cout << "Do you want to restart?";
    cout << "\n";
    cout << "1) Yes";
    cout << "\n";
    cout << "2) No";
    cout << "\n";

    int quit_or_no = 0;
    while (quit_or_no != 1 && quit_or_no != 2) {
      cout << "Choose between 1 and 2: ";
      cin >> quit_or_no;
    }

    if (quit_or_no == 2) {
      break;
    }
  }

  return 0;
}