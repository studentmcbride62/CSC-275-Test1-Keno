#ifndef PLAYER_H
#define PLAYER_H
#include <vector>

class Player {
private:
    std::vector<int> m_playerNumbers;
public:
    void inputPlayerNumbers();
    std::vector<int> getPlayerNumbers();
    void printPlayerNumbers();
    void clearPlayerNumbers();
};

#endif //PLAYER_H
