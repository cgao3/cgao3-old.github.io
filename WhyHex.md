The game of Hex was first described to public by polymath [Piet Hein](https://en.wikipedia.org/wiki/Piet_Hein_(scientist)) in 1942 under the name Polygon. 

### Principle idea
Piet Hein followed several principles to design the new game: 

1. Fair: means both player shall have equal chance to win. 

2. Progressive: game positions do not reappear. 

3. Final: guarantee to have limited number of moves to end. 

4. Comprehensible rules: beginners should be able to know how to play quickly.

5. Strategic: must be versatile in its possibilities for combination. 

6. Decisive: never end with a draw. 

### First design 
Piet Hein's initial idea was a game in a [quadrilateral](https://en.wikipedia.org/wiki/Quadrilateral) board, where two players (like two groups of armies in battle field) each is assigned two opposite sides. Player alternately places their stones at square cells in the board. Player who joins its two sides by a line wins the game. Indeed, on a [planar graph](https://en.wikipedia.org/wiki/Planar_graph), the underlying topological property of Hex is also the basis of the [four color theorem](https://en.wikipedia.org/wiki/Four_color_theorem), which was proven in 1976. Piet Hein initially considered a board with square cells, but one could quickly realize that in such a game, undesired situation could happen,   

Instead of square cells, in 1942, Piet Hein finished the game after seeing that the mutual-blocking problem can be solved if they are replaced with hexagonal cells. He chose 11x11 diamond board shape, and the design is complete. 

![](./imgs/grid2.png "A failure design for the game of Hex")
![](imgs/Hex-board-11x11.jpg "11x11 Hex proposed by Piet Hein") 
![](imgs/grid_nash2.png "Board format originally described by John Nash, playing at intersections")

Middle picture from: https://en.wikipedia.org/wiki/Hex_(board_game)

### Reinvention by John Nash

Six years later, in 1948, [John Nash]() at Princeton reinvented the game with the grid format where stones are placed at intersections, similar to the game of Go. [David Gale](https://en.wikipedia.org/wiki/David_Gale) soon converted it into a more natural hexagonal style.  



Nash then proved by [strategy stealing argument](https://en.wikipedia.org/wiki/Strategy-stealing_argument) that, from the empty board, there exists a first player winning strategy. Yet theoretic value for each individual opening is unknown. As such, a *swap* rule is introduced, which says the second player has the option to *steal* the first player's first move at the second player's first turn (equivalent to swap colors). 

### Playing Hex is hard
Hex has extremely simple rules, but this does not make the game simple to play! Just watch a few games played by two strong computer Hex players, can you follow the strategies? 

![](imgs/ezo-mohex-2018-11x11-04.png "Ezo vs MoHex, MoHex won") 
![](imgs/mohex-ezo-2018-11x11-05.png "MoHex vs Ezo, MoHex won")


Visit [Prof. Ryan Hayward's homepage](https://webdocs.cs.ualberta.ca/~hayward/) for more about the game of Hex. 


### Complexity aspects of Hex

Solving arbitrary Hex position is [PSPACE-complete](https://en.wikipedia.org/wiki/PSPACE-complete), since Hex is equivalent to Quantified SAT. 

[QSAT](https://en.wikipedia.org/wiki/True_quantified_Boolean_formula) is a fundamental problem that is believed to be harder than NP-complete. 

[Beyond NP](http://beyondnp.org/)

[Alternating Turning Machine](https://en.wikipedia.org/wiki/Alternating_Turing_machine)


[Computing Nash-equilibrium in general two-player zero-sum game is PPAD-complete](https://en.wikipedia.org/wiki/PPAD_(complexity))


### Mathematical aspects of Hex
[Hex theorem](http://web.mit.edu/sp.268/www/hex-notes.pdf)

[Brouwer fixed point](https://en.wikipedia.org/wiki/Brouwer_fixed-point_theorem)


### Artificial Intelligence in Hex

1. Solving Hex 

2. Playing Hex