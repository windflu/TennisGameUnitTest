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

TEST_F( CTennisGameTest, ScoreResult_Score0v3_LoveForty )
{
    m_kTennis.Player2Score();
    m_kTennis.Player2Score();
    m_kTennis.Player2Score();
    EXPECT_EQ( m_kTennis.GetScoreResult(), "Love Forty" );
}

TEST_F( CTennisGameTest, ScoreResult_Score0v4_Player2Win )
{
    m_kTennis.Player2Score();
    m_kTennis.Player2Score();
    m_kTennis.Player2Score();
    m_kTennis.Player2Score();
    EXPECT_EQ( m_kTennis.GetScoreResult(), "Player2 Win" );
}

TEST_F( CTennisGameTest, ScoreResult_Score4v0_Player1Win )
{
    m_kTennis.Player1Score();
    m_kTennis.Player1Score();
    m_kTennis.Player1Score();
    m_kTennis.Player1Score();
    EXPECT_EQ( m_kTennis.GetScoreResult(), "Player1 Win" );
}

TEST_F( CTennisGameTest, ScoreResult_Score1v1_FifteenAll )
{
    m_kTennis.Player1Score();
    m_kTennis.Player2Score();
    EXPECT_EQ( m_kTennis.GetScoreResult(), "Fifteen all" );
}

TEST_F( CTennisGameTest, ScoreResult_Score1v2_FifteenThirty )
{
    m_kTennis.Player1Score();
    m_kTennis.Player2Score();
    m_kTennis.Player2Score();
    EXPECT_EQ( m_kTennis.GetScoreResult(), "Fifteen Thirty" );
}

TEST_F( CTennisGameTest, ScoreResult_Score1v3_FifteenForty )
{
    m_kTennis.Player1Score();
    m_kTennis.Player2Score();
    m_kTennis.Player2Score();
    m_kTennis.Player2Score();
    EXPECT_EQ( m_kTennis.GetScoreResult(), "Fifteen Forty" );
}

TEST_F( CTennisGameTest, ScoreResult_Score1v4_Player2Win )
{
    m_kTennis.Player1Score();
    m_kTennis.Player2Score();
    m_kTennis.Player2Score();
    m_kTennis.Player2Score();
    m_kTennis.Player2Score();
    EXPECT_EQ( m_kTennis.GetScoreResult(), "Player2 Win" );
}

TEST_F( CTennisGameTest, ScoreResult_Score2v1_ThirtyFifteen )
{
    m_kTennis.Player1Score();
    m_kTennis.Player1Score();
    m_kTennis.Player2Score();
    EXPECT_EQ( m_kTennis.GetScoreResult(), "Thirty Fifteen" );
}

TEST_F( CTennisGameTest, ScoreResult_Score2v2_ThirtyAll )
{
    m_kTennis.Player1Score();
    m_kTennis.Player1Score();
    m_kTennis.Player2Score();
    m_kTennis.Player2Score();
    EXPECT_EQ( m_kTennis.GetScoreResult(), "Thirty all" );
}

TEST_F( CTennisGameTest, ScoreResult_Score2v3_ThirtyForty )
{
    m_kTennis.Player1Score();
    m_kTennis.Player1Score();
    m_kTennis.Player2Score();
    m_kTennis.Player2Score();
    m_kTennis.Player2Score();
    EXPECT_EQ( m_kTennis.GetScoreResult(), "Thirty Forty" );
}

TEST_F( CTennisGameTest, ScoreResult_Score2v4_Player2Win )
{
    m_kTennis.Player1Score();
    m_kTennis.Player2Score();
    m_kTennis.Player2Score();
    m_kTennis.Player2Score();
    m_kTennis.Player2Score();
    EXPECT_EQ( m_kTennis.GetScoreResult(), "Player2 Win" );
}

TEST_F( CTennisGameTest, ScoreResult_Score3v1_FortyFifteen )
{
    m_kTennis.Player1Score();
    m_kTennis.Player1Score();
    m_kTennis.Player1Score();
    m_kTennis.Player2Score();
    EXPECT_EQ( m_kTennis.GetScoreResult(), "Forty Fifteen" );
}

TEST_F( CTennisGameTest, ScoreResult_Score3v2_FortyThirty )
{
    m_kTennis.Player1Score();
    m_kTennis.Player1Score();
    m_kTennis.Player1Score();
    m_kTennis.Player2Score();
    m_kTennis.Player2Score();
    EXPECT_EQ( m_kTennis.GetScoreResult(), "Forty Thirty" );
}

TEST_F( CTennisGameTest, ScoreResult_Score3v3_Deuce )
{
    m_kTennis.Player1Score();
    m_kTennis.Player1Score();
    m_kTennis.Player1Score();
    m_kTennis.Player2Score();
    m_kTennis.Player2Score();
    m_kTennis.Player2Score();
    EXPECT_EQ( m_kTennis.GetScoreResult(), "Deuce" );
}

TEST_F( CTennisGameTest, ScoreResult_Score4v2_Player1Win )
{
    m_kTennis.Player1Score();
    m_kTennis.Player1Score();
    m_kTennis.Player1Score();
    m_kTennis.Player1Score();
    m_kTennis.Player2Score();
    m_kTennis.Player2Score();
    EXPECT_EQ( m_kTennis.GetScoreResult(), "Player1 Win" );
}

TEST_F( CTennisGameTest, ScoreResult_Score4v3_Player1Adv )
{
    m_kTennis.Player1Score();
    m_kTennis.Player1Score();
    m_kTennis.Player1Score();
    m_kTennis.Player1Score();
    m_kTennis.Player2Score();
    m_kTennis.Player2Score();
    m_kTennis.Player2Score();
    EXPECT_EQ( m_kTennis.GetScoreResult(), "Player1 Adv" );
}

TEST_F( CTennisGameTest, ScoreResult_Score4v4_Deuce )
{
    m_kTennis.Player1Score();
    m_kTennis.Player1Score();
    m_kTennis.Player1Score();
    m_kTennis.Player1Score();
    m_kTennis.Player2Score();
    m_kTennis.Player2Score();
    m_kTennis.Player2Score();
    m_kTennis.Player2Score();
    EXPECT_EQ( m_kTennis.GetScoreResult(), "Deuce" );
}