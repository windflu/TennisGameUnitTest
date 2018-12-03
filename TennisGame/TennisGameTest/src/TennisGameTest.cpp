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
        m_kTennis = CTennisGame( "A", "B" );
    }
    virtual void TearDown()
    {
    }
	CTennisGame m_kTennis;
};

TEST_F( CTennisGameTest, ScoreResult_Score0v0_LoveAll )
{
    EXPECT_EQ( m_kTennis.GetScoreResult(), "Love all" );
}

TEST_F( CTennisGameTest, ScoreResult_Score1v0_FifteenLove )
{
    m_kTennis.Player1Score();
    EXPECT_EQ( m_kTennis.GetScoreResult(), "Fifteen Love" );
}

TEST_F( CTennisGameTest, ScoreResult_Score2v0_ThrityLove )
{
    m_kTennis.Player1Score();
    m_kTennis.Player1Score();
    EXPECT_EQ( m_kTennis.GetScoreResult(), "Thirty Love" );
}

TEST_F( CTennisGameTest, ScoreResult_Score3v0_FortyLove )
{
    m_kTennis.Player1Score();
    m_kTennis.Player1Score();
    m_kTennis.Player1Score();
    EXPECT_EQ( m_kTennis.GetScoreResult(), "Forty Love" );
}

TEST_F( CTennisGameTest, ScoreResult_Score0v1_LoveFifteen )
{
    m_kTennis.Player2Score();
    EXPECT_EQ( m_kTennis.GetScoreResult(), "Love Fifteen" );
}

TEST_F( CTennisGameTest, ScoreResult_Score0v2_LoveThirty )
{
    m_kTennis.Player2Score();
    m_kTennis.Player2Score();
    EXPECT_EQ( m_kTennis.GetScoreResult(), "Love Thirty" );
}