#include <iostream>
#include <cstring>


using namespace std;


int dis_find(const char *t , const char *a) {

  unsigned init(0),
           temp(0) , count_t(0);

  for (int i = 0 ; i != strlen(t); ++i) {

    if (a[init] == t[i]) {


      temp = i;

      ++init;
      ++count_t;
    }

    else {
      init = 0;
      count_t = 0;
    }

    if (init == strlen(a)) {
      break;
    }

    if (i == strlen(t) - 1 && init != strlen(a)) {
      init = 0;
      count_t = 0;
    }

  }

  if (init > 0) {
    return temp;

  }
  else {
    return 0;
  }

}///..



int main() {

  char test[] = "victor";              /// test array.....................

  cout<<dis_find(test , "ctor")<<endl;           ////  displays the position of the last character (r) if "ctor"  was found

}
