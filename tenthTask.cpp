 #include <iostream>

   float meters_to_kilometers(float meter) {
    meter /= 1000; 
    return meter;
   }
  int main() {
   long kilometer;
   std::cout << "Please enter size in meter: ";
   std::cin >> kilometer;
   std::cout << kilometer << " meters equals "
   << meters_to_kilometers(kilometer) << " kilometers" << std::endl; 
  return 0;
  }
   
