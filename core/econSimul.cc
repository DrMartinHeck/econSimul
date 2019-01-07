#include <core/Bank.h>

#include <vector>
#include <iostream>

int main()
{
  std::cout << "Hello World!" << std::endl;

  //Bank failure and creation is out of the scope of the simulation, so we start with just a fixed set of banks:
  std::vector<Bank>  banks {{"Erste Bank"}};

  std::cout << banks[0].getEquity() << std::endl;

  //Setting the scene
  //Starting a time-discreet simulation
}
