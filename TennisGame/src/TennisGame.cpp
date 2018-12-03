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
}

std::string CTennisGame::GetScoreResult()
{
    if ( m_kScoreMap[m_nPlayer1Score] == m_kScoreMap[m_nPlayer2Score] )
    {
        return m_kScoreMap[m_nPlayer1Score] + " " + "all";
    }
    else if ( m_nPlayer1Score == 1 & m_nPlayer2Score == 0 )
    {
        return m_kScoreMap[m_nPlayer1Score] + " " + m_kScoreMap[m_nPlayer2Score];
    }
    else if ( m_nPlayer1Score == 2 & m_nPlayer2Score == 0 )
    {
        return m_kScoreMap[m_nPlayer1Score] + " " + m_kScoreMap[m_nPlayer2Score];
    }
}