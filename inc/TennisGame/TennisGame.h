#include <string>
#include <map>
class CTennisGame
{
public:
    CTennisGame();
    CTennisGame( std::string strPlayer1, std::string strPlayer2 );
    ~CTennisGame();
    
    std::string GetScoreResult();
    void Player1Score() { m_nPlayer1Score++; }

private:
    void InitMap();

private:

    std::map < int, std::string >m_kScoreMap;
    int m_nPlayer1Score = 0;
    int m_nPlayer2Score = 0;
    std::string m_strPlayer1 = "Player1";
    std::string m_strPlayer2 = "Player2";
};