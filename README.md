# Command line Rock-Paper-Scissors game. 

This game has following functional requirements:
1. Prompt the human player for the number of rounds the user wants to play (Each game can have a maximum of 20 rounds).
2. Prompt the human player for each round’s choice of rock, paper, or scissors as characters (R/r = Rock, P/p = Paper, S/s = Scissors).
3. If the user selects one of the three characters then go to step 4, else the computer should prompt invalid selection. 
4. Prompt the human player to enter their name for the game.
5. The computer makes a random choice between rock, paper, and scissors(RandomChooser).
6. Display whoever has won the game (player or computer).
7. Display the scoreboard to show wins/ties/losses and total rounds played.

# Expected Future Enhancements to the Game: 
1. Expanding the player’s choices (beyond rock, paper, scissors) by simply inserting the more choices in the UnOrderedDataSets.
2. Expand the modes for the computer choice selection(SmartChooser()/ GeniusChooser()). 
    - SmartChooser(): This chooser could utilize machine learning to make progressively smarter decisions. 
    - GeniusChooser(): This chooser could utilize algorithms or have the bot make specific decisions based on the user's input, so the computer's response would be less random. 

However, we have implemented the rock paper scissors game in its basic form where the computer makes a random choice(RandomChooser()) between rock, paper, or scissors.

