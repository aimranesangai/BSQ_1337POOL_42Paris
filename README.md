🟩 BSQ — Biggest Square

Find the largest possible square in a map… without hitting obstacles.

📌 What is this?

BSQ (Biggest Square) is a classic algorithm project from the 42 Piscine.

You’re given a map filled with:

empty spaces
obstacles

Your job is simple (on paper):
👉 Find the biggest square made only of empty spaces
👉 Fill it visually in the output

🧠 The Idea

Think of it like this:

. → empty space
o → obstacle
x → your solution (the biggest square)

You scan the map and figure out where the largest square can fit without touching any obstacle.

If multiple squares have the same size:

pick the highest one (top)
if tied → pick the leftmost
📂 Input Format

The program takes a file as input.

First line (very important):
<number_of_lines><empty_char><obstacle_char><full_char>

Example:

9.ox

Meaning:

9 lines
. = empty
o = obstacle
x = full (your square)
Example map:
...........................
....o......................
............o..............
...........................
....o......................
...............o...........
...........................
......o..............o.....
..o.......o................
✅ Expected Output
.....xxxxxxx...............
....oxxxxxxx...............
.....xxxxxxxo..............
.....xxxxxxx...............
....oxxxxxxx...............
.....xxxxxxx...o...........
.....xxxxxxx...............
......o..............o.....
..o.......o................
⚠️ Rules for a Valid Map

If you mess this up, your program must print:

map error

Rules:

All lines must have the same length
At least one line, at least one column
Only allowed characters (from line 1)
Each line ends with a newline
⚙️ How to Run
Compile:
make
Run:
./bsq map_file
Multiple maps:
./bsq map1 map2 map3
No arguments:
./bsq

→ reads from standard input

🔧 Allowed Functions

You’re restricted (42 rules):

read
write
open
close
malloc
free
exit

No cheating with fancy stuff.

📁 Project Structure
.
├── Makefile
├── bsq
├── src/
├── includes/
└── auteur

auteur file:

login1:login2
🏁 Evaluation

You’re judged in two phases:

1. Functionality (10 pts)
Does it work correctly?
2. Optimization (10 pts)
Speed ⚡
Memory 🧠

Only the best implementations get full score here.

💡 Real Talk

This project is not about printing squares.
It’s about:

dynamic programming
memory efficiency
parsing like a normal human (not like a monkey)

If your solution is slow or brute force… it will get destroyed in evaluation.

🧪 Bonus: Map Generator

There’s a Perl script to generate maps:

perl generator.pl width height density
🚀 Summary
Parse the map
Validate it
Find the largest square
Print the result

That’s it… but doing it fast and clean is the real challenge.
