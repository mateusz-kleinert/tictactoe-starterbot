#ifndef TICTACTOE_RANDOM_STRATEGY_H_
#define TICTACTOE_RANDOM_STRATEGY_H_

#include <utility>
#include <vector>
#include <cmath>
#include <stdlib.h>
#include <time.h>

#include "Strategy.h"

namespace TicTacToe {

class RandomStrategy : public Strategy {
public:
	RandomStrategy () : Strategy() { srand (time(NULL)); }
	std::pair<unsigned int, unsigned int> MakeMove(unsigned int round, 
		unsigned int move, std::vector<unsigned int> field, std::vector<unsigned int> macroboard);
private:
	std::vector<unsigned int> GetPossibleMoves(std::vector<unsigned int> field,
		unsigned int macroboard_id);
};

}

#endif // TICTACTOE_RANDOM_STRATEGY_H_