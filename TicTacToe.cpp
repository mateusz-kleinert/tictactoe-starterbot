#include "TicTacToe.h"

namespace TicTacToe {

void TicTacToe::Start () 
{
    std::string line;

    while (getline(std::cin, line)) 
    {
        std::vector<std::string> tokens = Split(line, ' ');

        if (tokens[0] == "settings")
        {
            if (tokens[1] == "timebank")
            {
                settings_->SetTimebank(std::stoi(tokens[2]));
            }
            else if (tokens[1] == "time_per_move")
            {
                settings_->SetTimePerMove(std::stoi(tokens[2]));
            }
            else if (tokens[1] == "player_names") 
            {
                std::vector<std::string> player_names = Split(line, ',');
                settings_->SetPlayerNames(std::pair<std::string, std::string>(player_names[0], player_names[1]));
            }
            else if (tokens[1] == "your_bot")
            {
                settings_->SetPlayerName(tokens[2]);
            }
            else if (tokens[1] == "your_botid")
            {
                settings_->SetBotId(std::stoi(tokens[2]));
            }
        }
        else if (tokens[0] == "update")
        {
            if (tokens[2] == "round")
            {
                settings_->SetRound(std::stoi(tokens[3]));
            }
            else if (tokens[2] == "move")
            {
                settings_->SetMove(std::stoi(tokens[3]));
            }
            else if (tokens[2] == "field")
            {
                std::vector<std::string> fields = Split(tokens[3], ',');
                std::vector<unsigned int> result;

                std::for_each(fields.begin(), fields.end(), 
                    [&result](std::string s) { result.push_back(std::stoi(s)); });

                settings_->SetField(result);
            }
            else if (tokens[2] == "macroboard")
            {
                std::vector<std::string> macroboard = Split(tokens[3], ',');
                std::vector<unsigned int> result;

                std::for_each(macroboard.begin(), macroboard.end(), 
                    [&result](std::string s) { result.push_back(std::stoi(s)); });

                settings_->SetMacroboard(result);
            }
        }
        else if (tokens[0] == "action")
        {
            std::pair<unsigned int, unsigned int> move = strategy_->MakeMove(
                settings_->GetRound(), settings_->GetMove(), 
                settings_->GetField(), settings_->GetMacroboard());

            std::cout << "place_move " << move.first << " " << move.second << std::endl; 
        }
    }
}

std::vector<std::string> TicTacToe::Split(std::string& input, char delimiter) 
{
  std::vector<std::string> tokens;
  std::stringstream ss(input);
  std::string token;
  
    while (getline(ss, token, delimiter)) 
    {
        tokens.push_back(token);
    }
  
  return tokens;
}

}