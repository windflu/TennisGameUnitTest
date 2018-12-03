#include "TennisGame.h"

CTennisGame::CTennisGame()
{
}

CTennisGame::CTennisGame( std::string strPlayer1, std::string strPlayer2 )
{
    m_strPlayer1 = strPlayer1;
    m_strPlayer2 = strPlayer2;
}
CTennisGame::~CTennisGame()
{
}

std::string CTennisGame::GetScoreResult()
{
    if ( m_nPlayer1Score == 0 & m_nPlayer2Score == 0 )
    {
        return "Love all";
    }
    else if ( m_nPlayer1Score == 1 & m_nPlayer2Score == 0 )
    {
        return "Fifteen Love";
    }
}