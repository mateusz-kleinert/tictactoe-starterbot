# tictactoe-starterbot
This is a starter bot for [The AI Games's][1] [TicTacToe competition][2]. 

This bot implements communication with the game server and a random strategy as an example of usage. It means the bot makes correct random moves. To start working with the bot just implement your own class which inherits from Strategy and replace RandomStrategy with it.

Feel free to use it and have fun :)

[1]: http://theaigames.com/
[2]: http://theaigames.com/competitions/ultimate-tic-tac-toe

Compilation
-----------

```sh
$ g++ main.cpp TicTacToe.cpp RandomStrategy.cpp -o main -std=c++1y -O2
```
License
----

The MIT License (MIT)

Copyright (c) 2016 Mateusz

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
