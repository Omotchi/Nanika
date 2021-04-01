
#include <iostream>
using namespace std;
int main() {
  string s = R"*(
#include <iostream>
using namespace std;
int main() {
  string s = R"*(?*";
  s.replace(s.find('?'), 1, s + ")");
  cout << s;
  return 0;
}
)*";
  s.replace(s.find('?'), 1, s + ")");
  cout << s;
  return 0;
}
