# Welcome to My Mastermind
***

## Task
At this task we have to make a game Mastermind. 

## Description
Mastermind is a game composed of 8 pieces of different colors.
A secret code is then composed of 4 distinct pieces.

The player has 10 attempts to find the secret code.
After each input, the game indicates to the player the number of well placed pieces and the number of misplaced pieces.

Pieces will be '0' '1' '2' '3' '4' '5' '6' '7'.

If the player finds the code, he wins, and the game stops.
A misplaced piece is a piece that is present in the secret code butthat is not in a good position.

You must read the player's input from the standard input.

I have created one "Main" function and 3 auxilary functions, two of auxilary functions are cheking if user entered 
correct input and function mastermind is cheking sectret code with input entered by user.

## Installation
To make this task I've used headers like: stdbool, stdio, string, ctype, stdlib and time

## Usage
gcc -o my_mastermind my_mastermind.c 
./my_mastermind -c "sectret code" -t "number of attempts" //(by default: t = 10, if you do not give secret code, the programm will generate it byself)

### The Core Team
Xusanov Abduvoris


<span><i>Made at <a href='https://qwasar.io'>Qwasar Silicon Valley</a></i></span>
<span><img alt='Qwasar Silicon Valley Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
