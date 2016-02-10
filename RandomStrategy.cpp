#include "RandomStrategy.h"

namespace TicTacToe {

std::pair<unsigned int, unsigned int> RandomStrategy::MakeMove(unsigned int round, 
	unsigned int move, std::vector<unsigned int> field, std::vector<unsigned int> macroboard) 
{
	std::pair<unsigned int, unsigned int> result;
	std::vector<unsigned int> possible_moves;

	unsigned int macroboard_id = -1;

	for(int i = 0; i < 9; i++) 
	{
		if (macroboard[i] == -1) 
		{
			macroboard_id = i;
			break;
		}
	}

	possible_moves = GetPossibleMoves(field, macroboard_id);
	unsigned int random_move = rand() % possible_moves.size(); 

	result.first = possible_moves[random_move] % 9;
	result.second = std::floor(possible_moves[random_move] / 9);

	return result;
}

std::vector<unsigned int> RandomStrategy::GetPossibleMoves(std::vector<unsigned int> field,
		unsigned int macroboard_id)
{
	std::vector<unsigned int> possible_moves;

	for (int y = 0; y < 9; y++)
	{
		for (int x = 0; x < 9; x++)
		{
			if ((macroboard_id == -1) || ((std::floor(x / 3) + std::floor(y / 3) * 3) == macroboard_id))
			{
				if (field[x + y * 9] == 0)
				{
					possible_moves.push_back(x + (y * 9));
				}
			}
		}
	}

	return possible_moves;
}

}