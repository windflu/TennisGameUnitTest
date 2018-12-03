#include "TennisGame.h"

CTennisGame::CTennisGame()
{
    InitMap();
}

CTennisGame::CTennisGame( std::string strPlayer1, std::string strPlayer2 )
{
    InitMap();
    m_strPlayer1 = strPlayer1;
    m_strPlayer2 = strPlayer2;
}
CTennisGame::~CTennisGame()
{
}

void CTennisGame::InitMap()
{
    m_kScoreMap[0] = "Love";
    m_kScoreMap[1] = "Fifteen";
    m_kScoreMap[2] = "Thirty";
    m_kScoreMap[3] = "Forty";
}

std::string CTennisGame::GetScoreResult()
{
    if ( m_nPlayer2Score >= 4 )
    {
        return m_strPlayer2 + " Win";
    }
    if ( m_kScoreMap[m_nPlayer1Score] == m_kScoreMap[m_nPlayer2Score] )
    {
        return m_kScoreMap[m_nPlayer1Score] + " " + "all";
    }
    else
    {
        return m_kScoreMap[m_nPlayer1Score] + " " + m_kScoreMap[m_nPlayer2Score];
    }
}