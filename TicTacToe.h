#ifndef TICTACTOE_TICTACTOE_H_
#define TICTACTOE_TICTACTOE_H_

#include <memory>
#include <utility>
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>

#include "Settings.h"
#include "Strategy.h"

namespace TicTacToe {

class TicTacToe {
public:
	TicTacToe (std::unique_ptr<Settings>& settings, std::unique_ptr<Strategy>& strategy) 
	: settings_(std::move(settings)), strategy_(std::move(strategy)){}
	void Start ();
private:
    std::unique_ptr<Settings> settings_;
    std::unique_ptr<Strategy> strategy_;
	std::vector<std::string> Split(std::string& input, char delimiter);
};

}

#endif // TICTACTOE_TICTACTOE_H_