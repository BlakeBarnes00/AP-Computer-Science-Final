#ifndef CEASAR_H_
#define CEASAR_H_

#include <iostream>
#include <cctype>
#include <string>

std::string encrypt(std::string phrase, int key)
{
  for(int i = 0; i <= phrase.length(); i++)
  {
    if(std::isalpha(phrase[i]))
    {
      phrase[i] = std::tolower(phrase[i]);
      for(int j = 0; j < key; j++)
      {
        if(phrase[i] == 'z')
          phrase[i] = 'a';
        else
          phrase[i]++;
      }
    }
  }
  return phrase;
}

std::string decrypt(std::string phrase)
{
  for(int i = 1; i < 26; i++)
  {
    for(int j = 0; j < phrase.length(); j++)
    {
      if(std::isalpha(phrase[j]))
      {
        if(phrase[j] == 'z')
          phrase[j] = 'a';
        else
          phrase[j] = phrase[j] + i;
      }
    }

    std::cout << phrase << std::endl; 
  }
 return phrase; 
}

#endif
