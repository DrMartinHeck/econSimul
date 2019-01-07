#pragma once

#include <vector>

/** Base class for all (private) banks.
 *
 *  A bank can take deposits, loan money out, transfer money, ...
 *
 *  We start with a non-abstract class and will only go fully abstract, if there is a sufficiently large need
 *  for different types of banks.
 */
class Bank {
public:
  /** As a base class, destructor should be virtual. */
  virtual ~Bank(){}

  virtual int getEquity(){
    return 0;
  }

private:
  /** deposits are the most sinple form of liabilities on the bank balance sheet. */
  std::vector<int> _deposits = {0};
};
