//swap method
#include <iostream>
using namespace std;

int main() {
  int a,b,c;
  cin >> a;
  cin >> b;
  cin >> c;
  int temp = a;
  a= b;
  b=c;

  c = temp;
  cout << "the number of a = " << a << endl ;
   cout << "the number of b = " << b << endl ;
    cout << "the number of c = " << c << endl ;



  return 0;
}
//pattern method
#include <iostream>
using namespace std;

int main() {
  // notice that the '\n' character is responsible for printing the newlines
  cout << "*\n**\n***\n****\n*****\n";
  return 0;
}
//same process
#include <iostream>
using namespace std;

int main() {
  cout << "*" << endl;
  cout << "**" << endl;
  cout << "***" << endl;
  cout << "****" << endl;
  cout << "*****" << endl;
  return 0;
}
//Data types
#include <iostream>
using namespace std;

int main() {
  int i; // declare an integer variable named i
  cin >> i; // take the number as input
  cout << "the value of the integer i = " << i << endl; // print the value of i

  long long int l;
  cin >> l;
  cout << "the value of the long long l = " << l << endl;

  char c;
  cin >> c;
  cout << "the value of the character c = " << c << endl;

  float f;
  cin >> f;
  cout << "the value of the float f = " << f << endl;

  double d;
  cin >> d;
  cout << "the value of the double d = " << d << endl;

  return 0;
}
//just print
#include <iostream>
using namespace std;

int main() {
  // Print the string "Programming is Pinik!" and a newline
  cout << "Programming is Pinik!" << endl;
  return 0;
}
//sum of integer
#include <iostream>
using namespace std;

int main() {
  int x, y;       // Declare two integer variables
  cin >> x >> y;  // Read values for x and y from user input

  int p = x + y;  // Calculate the sum of x and y, store in p
  cout << p << endl;  // Output the sum

  return 0;  // End of the program
}
