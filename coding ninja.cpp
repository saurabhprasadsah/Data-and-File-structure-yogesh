#include <iostream>
using namespace std;
int main() {
  // coding ninjs solution


    int i = 10;
    int &j=i;
    cout<<i<<" "<<j<<" ";
    j=20;
    cout<<i<<" "<<j;
    return 0;
}
