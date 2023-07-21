#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

using namespace std;

const int grid_size = 8;

int main() {
  // Get num of grids
  int numGrids;
  cin >> numGrids;

  // Now, run once for each
  for(int currGrid = 0; currGrid < numGrids; currGrid++) {
    // Iterate over the grid, until we find the column
    // and start index of the word. Then we can just
    // iterate down
    for(int currX = 0; currX < grid_size; currX++) {
      for(int currY = 0; currY < grid_size; currY++) {
        char inp;
        cin >> inp;

        if(inp != '.') {
            cout << inp;
        }
      }
    }

    cout << endl;

  }
}