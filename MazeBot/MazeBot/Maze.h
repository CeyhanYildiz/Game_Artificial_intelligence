#pragma once

// SFML
#include <SFML/Graphics.hpp>

//C++

// BaseClass
#include "MazeElement.h"


using namespace std; // C++
using namespace sf; //SFML

class Maze
{
public:

	// Construct & Destructor
		Maze(int size, string name = "Maze bot");
		~Maze();

	// Get info
		int getHeight() const { return Height; };
		int	getWidth() const { return Width; };
		char getMazeElementSymbol(int x, int y);
		string getMazeElementDescription(int x, int y);

	// Start Game
		void run();

private:

	// Algorithm
		void Binary_Tree_Algorithm();

	// Print Stuff
		void printMaze();
		void printMazeElement(int x, int y);
		void printBlockSymbol(const MazeElement& element);
		int mapping(int input, int fromLow, int fromHigh, int toLow, int toHigh);

	// RunStuff
		//void handleEvents();
		//void update();
		//void render();
		

	// Game API window
		RenderWindow window;

	// For printing Cell API
		RectangleShape Cell;

	// Variable
		int Height;
		int Width;
		int sizeMaze;		// Maze Size
		int MazeCellSize;	// How much Cells are in the maze
		int TrueMazeSize;	// True maze size 'sizeMaze * sizeMaze'
		int TrueSize;		// Calculation x * 3
		int count;

	// A sort of double link list
		vector<vector<MazeElement*>> maze;

	// Admin level Edit Maze 
		void removeLeftWall(int x, int y);
		void removeUpWall(int x, int y);
		void setMazeElement(int y, int x, MazeElement* newElement);

protected:

	// User level Edit Maze
		void setMazeElement_Visited(int y, int x);
		void setMazeElement_WrongTurn(int y, int x);
};

