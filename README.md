Galway Adventure Game (Assignment10 which is C program)
1. Summary
   
   The assignment focuses on Using the file adventure_locations.txt, implement the movement commands (N, S, E, W, IN, OUT) as well as LOOK,
HELP and QUIT and Displays the description of each location as the player moves to it.
2. Purpose
  > How files are handled in C
  > Command- based user interaction
   > Basic game logic implememtation
3.The files
> Adventure_locations = contains location data
> sem2Lab10.c = the main program file

4. How to run the code
   The adventure_locations.txt should be in the same directory as the main C program

   6.What the programm does
   > The program reads location data from adventure_locations.txt
   >  Each location contains possible movement directions (N, S, E, W, IN, OUT)
    >  The player starts at location 1
    > The user can enter commands to move between locations
5. Commands in programm
   IN → Move inside
   OUT → Move outside
   LOOK → Display current location description
   HELP → Show available commands
   QUIT → Exit the game
    N → Move north
    S → Move south
    E → Move east
    W → Move west
6. outcome
   Welcome to Galway Adventure. Type 'help' for help.

On the NUIG campus, outside the CS building.

Command: help
I know these commands:
n, s, e, w, in, out, look, help, quit.

On the NUIG campus, outside the CS building.

Command: w
In Knocknacarra.

In Knocknacarra.

Command: s
You can't go that way.

In Knocknacarra.

Command: e
On the NUIG campus, outside the CS building.

On the NUIG campus, outside the CS building.

Command: in
In the Computer Science Building, outside a computer lab

In the Computer Science Building, outside a computer lab

Command: out
On the NUIG campus, outside the CS building.

   

