#ifndef Tournament_H
#define Tournament_H
#include "Player.h"
#include <array>
#include "Referee.h"

class Tournament{
public:
    Tournament();
    Player * run(std::array<Player *, 8>  competitors);
    Player *match(Player*player1, Player*player2);
};
#endif

