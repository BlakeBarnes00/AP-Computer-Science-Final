#include <iostream>
#include <stdio.h>
#include "ceasar.h"

int main(int argc, char **argv)
{
  std::string input;
  std::cout << "Enter phrase: ";
  getline(std::cin, input); // Use the getline() to avoid the C++ space character issue

  std::string einput  = encrypt(input, 2);
  std::cout << "Encrypted: " << einput << std::endl;

  // TODO: This is for testing, not working at the moment
  //std::string dinput = decrypt(einput);
  //std::cout << "Decrypted: " << dinput << std::endl;
  
  std::cin.get();
  return 0;
}
