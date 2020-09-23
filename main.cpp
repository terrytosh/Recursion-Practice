#include <iostream>

std::string RecursiveReverseString(std::string str, int i, int j);
int RecursiveCountConsonants(std::string str, int ctr);
std::string RecursiveCopyString(std::string str, std::string output);
void RecursivePrintCominations(int arr[]);

int main() {
  std::string str = RecursiveReverseString("doinks", 0, 5);
  std::cout << "RecursiveReverseString():" << std::endl << str << std::endl;

  str = RecursiveReverseString("Techie Delight", 0, 13);
  std::cout << str << std::endl << std::endl;

  int num = RecursiveCountConsonants("geeksforgeeks portal", 0);
    std::cout << "RecursiveCountConsonants():" << std::endl << num << std::endl;

  num = RecursiveCountConsonants("adc34  ueilkdgaeiof", 0);
  std::cout << num << std::endl << std::endl;

  std::string str2 = RecursiveCopyString("doinks", "");
  std::cout << "RecursiveCopyString():" << std::endl << str2 << std::endl;

  std::string str3 = RecursiveCopyString("copy_this_string", "");
  std::cout << str3 << std::endl << std::endl;
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

std::string RecursiveCopyString(std::string str, std::string output){
  if(str == ""){
    return output;
  }
  output += str[0];
  return RecursiveCopyString(str.substr(1), output);
}