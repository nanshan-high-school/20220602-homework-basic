#include <iostream>
#include <queue>
using namespace std;

int main() {
  int number = 0;
  while (cin >> number) {
    if (number == 0) {
      continue;
    }
    
    queue<int> cards;
    for (int i = 1; i <= number; i++) {
      cards.push(i);
    }

    cout << "Discarded cards: ";
    for (int i = 2; i <= number; i++) {
      cout << cards.front();
      if (i != number) {
        cout << ", ";
      }
      
      cards.pop();
      int temp = cards.front();
      cards.pop();
      cards.push(temp);
    }

    cout << "\nRemaining card: " << cards.front() << endl;
  }
}
