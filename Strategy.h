#ifndef TICTACTOE_STRATEGY_H_
#define TICTACTOE_STRATEGY_H_

#include <utility>
#include <vector>

namespace TicTacToe {

class Strategy {
public:
	virtual std::pair<unsigned int, unsigned int> MakeMove(unsigned int round, 
		unsigned int move, std::vector<unsigned int> field, std::vector<unsigned int> macroboard) = 0;
	virtual ~Strategy() {}
};

}

#endif // TICTACTOE_STRATEGY_H_

