#include <gtest/gtest.h>
#include <core/Bank.h>

TEST(BankTest, getEquity)
{
  Bank bank;
  EXPECT_EQ(0, bank.getEquity());
}
