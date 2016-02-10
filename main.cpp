#include "TicTacToe.h"
#include "Settings.h"
#include "Strategy.h"
#include "RandomStrategy.h"

#include <memory>

int main() {
    std::unique_ptr<TicTacToe::Settings> settings(new TicTacToe::Settings());
    std::unique_ptr<TicTacToe::Strategy> strategy(new TicTacToe::RandomStrategy());
    std::unique_ptr<TicTacToe::TicTacToe> game(new TicTacToe::TicTacToe(settings, strategy));
    
    game->Start();

    return 0;
}
