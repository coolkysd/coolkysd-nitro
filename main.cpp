#include <iostream>
#include <random>
#include <string>

int main() {
  std::cout << "Enter the number of nitro codes to generate: ";
  int num_iterations;
  std::cin >> num_iterations;
  int str_length = 19;
  std::string charset = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dis(0, charset.size() - 1);
  for (int i = 0; i < num_iterations; i++) {
    std::string random_str;
    for (int j = 0; j < str_length; j++) {
      random_str += charset[dis(gen)];
    }
    std::cout << "http://discord.gift/" << random_str << std::endl;
  }
  return 0;
}
