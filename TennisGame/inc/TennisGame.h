#include <string>
class CTennisGame
{
public:
    CTennisGame();
    CTennisGame( std::string strPlayer1, std::string strPlayer2 );
    ~CTennisGame();
    
    std::string GetScoreResult();
    void Player1Score() { m_nPlayer1Score++; }

private:
    int m_nPlayer1Score = 0;
    int m_nPlayer2Score = 0;
    std::string m_strPlayer1;
    std::string m_strPlayer2;
};