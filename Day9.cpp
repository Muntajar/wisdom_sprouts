#include <iostream>
#include <string>
void reverse_String(std::string & text, int start, int end) {
  
  if (start >= end)
    return;

  
  std::swap(text[start], text[end]);

 
  reverse_String(text, start + 1, end - 1);
}

int main() {
  std::string text;
  std::cout << "Input a string: ";
  std::getline(std::cin, text);

  
  reverse_String(text, 0, text.length() - 1);

  std::cout << "Reversed string: " << text << std::endl;

  return 0;
}

