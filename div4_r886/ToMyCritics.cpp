#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

using namespace std;

int main() {
  // Get first integer
  int numLines;
  cin >> numLines;
  
  for(int lineNum; lineNum < numLines; lineNum++) {
    array<int, 3> line;
    cin >> line[0];
    cin >> line[1];
    cin >> line[2];

    sort( line.begin(), line.end() );

    if( line[2] + line[1] >= 10 ) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
  }
}