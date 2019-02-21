#pragma once

#include <vector>
#include <string>
#include <iostream>

/** Base class for all (private) banks.
 *
 *  A bank can take deposits, loan money out, transfer money, ...
 *
 *  We start with a non-abstract class and will only go fully abstract, if there is a sufficiently large need
 *  for different types of banks.
 */
class Bank {
public:
  /** Name-taking constructor. */
  Bank (std::string const & name = "Beste Bank") : _name (name)
  {
    std::cout << "Bank created with name " << name << std::endl;
  }

  //Copy Constructor ?

  /** As a base class, destructor should be virtual. */
  virtual ~Bank(){
    std::cout << "Bank destructed with name " << _name << std::endl;
  }

  virtual int getEquity(){
    return _reserves;
  }

  /** This function adds to the account of the bank with the Central Bank.
   *
   *  In the real world, this could be achieved, e.g. if the gov't donates bonds to the bank, which
   *  the CB buys from the bank and adding the transaction value to the account of the bank with the CB.
   */
  virtual void addCBReserves(int value){
    _reserves += value;
  }

private:
  /** Deposits are the most sinple form of liabilities on the bank balance sheet. */
  std::vector<int> _deposits = {0};

  //Holdings at the CB
  int _reserves = 0;

  std::string const _name;
};
