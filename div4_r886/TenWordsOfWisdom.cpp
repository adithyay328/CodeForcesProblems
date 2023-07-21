#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

using namespace std;

int main() {
  // Get num of test cases
  int numCases;
  cin >> numCases;

  for( int i = 0; i < numCases; i++ ) {
    int lengthOfCase;
    cin >> lengthOfCase;

    int highestQuality = -1;
    int index = -1;

    for( int line = 0; line < lengthOfCase; line++ ) {
      int length;
      cin >> length;

      int quality;
      cin >> quality;

      if( length <= 10 && quality > highestQuality ) {
        index = line + 1;
        highestQuality = quality;
      }
    }

    cout << index << endl;
  }
}