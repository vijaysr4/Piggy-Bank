#include <iostream>

int main() {
  // Declaring variables 
  double pesos, reais, soles, dollars;
  //User inputs
  std::cout << "Enter number of Colombian Pesos: \n";
  std::cin >> pesos;
  std::cout << "Enter number of Brazilian Reais: \n";
  std::cin >> reais;
  std::cout << "Enter number of Peruvian Soles: \n";
  std::cin >> soles;
  
  // Pesos conversion rate: 0.049
  // Reais conversion rate: 0.18
  // Soles conversion rate: 0.25

  //Total amount conversion to USD
  dollars = (0.049 * pesos) + (0.18 * reais) + (0.25 * soles);
  //final USD output
  std::cout << "US Dollars = $" << dollars << "\n";
}