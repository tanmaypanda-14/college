#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v;
  int n, temp;

  cout << "Enter number of elements " << endl;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> temp;
    v.push_back(temp);
  }
  cout<<endl;

  // iterating using stl
  vector<int>::iterator it;
  for (it = v.begin(); it != v.end(); it++) {
    cout << *it << " ";
  }

  // // default way to iterate vector
  // for (int i = 0; i < v.size(); i++) {
  //   // v[i] += 3;
  //   cout << v[i] << endl;
  // }

  return 0;
}
