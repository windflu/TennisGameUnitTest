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
    if ( ( m_nPlayer1Score != m_nPlayer2Score ) && 
          ( ( m_nPlayer1Score >= 4 ) || ( m_nPlayer2Score >= 4 ) ) )
    {
        if ( m_nPlayer1Score > m_nPlayer2Score )
        {
            if ( ( m_nPlayer1Score - m_nPlayer2Score ) >= 2 )
                return m_strPlayer1 + " Win";
            if ( ( m_nPlayer1Score - m_nPlayer2Score ) == 1 )
                return m_strPlayer1 + " Adv";
        }
        else if ( m_nPlayer2Score > m_nPlayer1Score )
        {
            if ( ( m_nPlayer2Score - m_nPlayer1Score ) >= 2 )
                return m_strPlayer2 + " Win";
            if ( ( m_nPlayer2Score - m_nPlayer1Score ) == 1 )
                return m_strPlayer2 + " Adv";
        }
    }
    else if ( m_nPlayer1Score == m_nPlayer2Score && m_nPlayer1Score >= 3 )
    {
        return "Deuce";
    }
    else if ( m_kScoreMap[m_nPlayer1Score] == m_kScoreMap[m_nPlayer2Score] )
    {
        return m_kScoreMap[m_nPlayer1Score] + " " + "all";
    }
    else
    {
        return m_kScoreMap[m_nPlayer1Score] + " " + m_kScoreMap[m_nPlayer2Score];
    }
}