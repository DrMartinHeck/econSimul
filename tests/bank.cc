#include <gtest/gtest.h>
#include <banks/Bank.h>

TEST(BankTest, getEquity)
{
  Bank bank;
  EXPECT_EQ(0, bank.getEquity());
}
