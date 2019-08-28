# ECard
Kaiji ECard Written in C

## Dependencies
- `gcc` or `clang` -> Preferably Compiled with `-ansi` flag
- Any terminal/terminal emulator should work

## Bugs
- Let me know!
- Fair play **COULD** be fairer
## Intended features
- Multiplayer across LAN
- Potentially a scoreboard
- Multiple Matches to a Scoring System
- Game mode variations

## Rules
You can choose to either be the Emperor, or the Slave.
Each player has 5 Cards. 4 Civilians, and Either an Emperor or a Slave
The Emperor gets the Emperor Card, and the Slave gets the Slave Card

Both players select a card and place it facedown. Then reveal at the same time.
- Civilian vs Civilian is a Tie
- Emperor Beats Civilian
- Civilian Beats Slave
- Slave Beats Emperor

Once a Slave beats the Emperor, Players swap sides
Civilians that were played, resulting in a draw DO NOT go back to your hand until someone wins the round
