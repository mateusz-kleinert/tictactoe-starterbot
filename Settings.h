#ifndef TICTACTOE_SETTINGS_H_
#define TICTACTOE_SETTINGS_H_

#include <iostream>
#include <string>
#include <vector>
#include <utility>

namespace TicTacToe {

struct Settings 
{
public:
    unsigned int GetTimebank() { return timebank_; }
    unsigned int GetTimePermove() { return time_per_move_; }
    unsigned int GetBotId() { return bot_id_; }
    unsigned int GetRound() { return round_; }
    unsigned int GetMove() { return move_; }
    std::string GetPlayerName() { return player_name_; }
    std::pair<std::string, std::string> GetPlayerNames() { return player_names_; }
    std::vector<unsigned int> GetField() { return field_; }
    std::vector<unsigned int> GetMacroboard() { return macroboard_; }
    void SetTimebank(unsigned int timebank) { timebank_ = timebank; }
    void SetTimePerMove(unsigned int time_per_move) { time_per_move_ = time_per_move; }
    void SetPlayerNames(std::pair<std::string, std::string> player_names) { player_names_ = player_names; }
    void SetPlayerName(std::string player_name) { player_name_ = player_name; }
    void SetBotId(unsigned int bot_id) { bot_id_ = bot_id; }
    void SetRound(unsigned int round) { round_ = round; }
    void SetMove(unsigned int move) { move_ = move; }
    void SetField(std::vector<unsigned int> field) { field_ = field; }
    void SetMacroboard (std::vector<unsigned int> macroboard) { macroboard_ = macroboard; }

private:
    unsigned int timebank_;
    unsigned int time_per_move_;
    unsigned int bot_id_;
    unsigned int round_;
    unsigned int move_;
    std::string player_name_;
    std::pair<std::string, std::string> player_names_;
    std::vector<unsigned int> field_;
    std::vector<unsigned int> macroboard_;
};

}

#endif // TICTACTOE_SETTINGS_H_