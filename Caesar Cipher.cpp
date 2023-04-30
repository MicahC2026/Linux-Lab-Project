#include <iostream>
using namespace std;

int main()
{
  alphabet = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']

  count = 0;
  x = int(sys.argv[1]);
  
  for line in sys.stdin;
    for letter in line;
      letter = letter.upper();
      if(letter in alphabet);
        n_index = alphabet.index(letter) + x;
        if(n_index > 25);
          n_index = n_index - 26;
        print(alphabet[n_index], end="");
        count = count + 1;
        if(count % 50 == 0);
          print("\n", end="");
        elif(count % 5 == 0);
          print(" ", end="");
  return 0;
}

