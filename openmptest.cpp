#include <iostream>
#include <vector>
#include <array>
#include<omp.h>

int main(void){
  std::vector<std::array<int, 4096>> vec;

  for(int i = 0; true; i++){
    std::array<int, 4096> array;
    //vec.push_back(array);
    std::cout << sizeof(array) << std::endl;
  }

  return 0;
  
}
