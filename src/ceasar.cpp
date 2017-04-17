#include <iostream>
#include "ceasar.h"

int main(int argc, char **argv)
{
  
  std::string input   = "Hello";

  std::string einput  = encrypt(input, 2);
  std::cout << "Encrypted: " << einput << std::endl;

  std::string dinput = decrypt(einput);
  std::cout << "Decrypted: " << dinput << std::endl;

  

  std::cin.get();
  return 0;
}
