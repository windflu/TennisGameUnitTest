// AccountingTest.cpp : Defines the entry point for the console application.
//

#include <gtest/gtest.h>
#include "TennisGame/TennisGame.h"
using namespace testing;

class CTennisGameTest : public Test
{
protected:
    virtual void SetUp()
    {

    }
	CTennisGame kTennis;
};

TEST_F(CTennisGameTest, Score_1_0 )
{

}