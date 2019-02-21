#include <gtest/gtest.h>
#include <core/Bank.h>

TEST(BankTest, getEquity)
{
  Bank bank;
  EXPECT_EQ(0, bank.getEquity());

  bank.addCBReserves(10'000);
  EXPECT_EQ(1e4, bank.getEquity());
}
