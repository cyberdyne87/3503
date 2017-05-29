#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

bool check(char x[], char y[]){

  int index = 0;
  char *px = &(x[index]);
  char *py = &(y[index]);

  while (true){
    *px = x[index];
    *py = y[index];
    //cout << "px is: " << *px << endl;
    //cout << "py is: " << *py << endl;
    if (*px == *py){
      ++index;
      if (*px == '\0'){
        break;
      }
    }else {
      return false;
    }
  }
  return true;


}



int main (){

  char a[] = {'j','o','b'};
  char b[] = {'j','o','b'};

  if (check(a,b)){
    cout << " test 1 is true" << endl;
  }else{
    cout << "test 1 is false" << endl;
  }

  char c[] = {'j','o','b'};
  char d[] = {'j','o','g'};

  if (check(c,d)){
    cout << " test 2 is true" << endl;
  }else{
    cout << "test 2 is false" << endl;
  }

  char e[] = {'j','o','b'};
  char f[] = {'j','u','n','k'};

  if (check(e,f)){
    cout << " test 3 is true" << endl;
  }else{
    cout << "test 3 is false" << endl;
  }


}
