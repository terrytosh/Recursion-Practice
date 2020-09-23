#include <iostream>

std::string RecursiveReverseString(std::string str, int i, int j);
int RecursiveCountConsonants(std::string str, int ctr);

int main() {
  std::string str = RecursiveReverseString("doinks", 0, 5);
  std::cout << str << std::endl;

  str = RecursiveReverseString("Techie Delight", 0, 13);
  std::cout << str << std::endl;

  int num = RecursiveCountConsonants("geeksforgeeks portal", 0);
  std::cout << num << std::endl;

  num = RecursiveCountConsonants("adc34  ueilkdgaeiof", 0);
  std::cout << num << std::endl;
}

std::string RecursiveReverseString(std::string str, int i, int j){
  if(i >= j){
    return str;
  }
  char temp = str[i];
  str[i] = str[j];
  str[j] = temp;
  return RecursiveReverseString(str, i+1, j-1);
}

int RecursiveCountConsonants(std::string str, int ctr){
  if(str == ""){
    return ctr;
  }
  char ch = toupper(str[0]);
  if(!(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == ' ')){
    ctr++;
  }
  return RecursiveCountConsonants(str.substr(1), ctr);
}