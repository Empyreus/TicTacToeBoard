/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

/* EXAMPLE TEST FORMAT
TEST(TicTacToeBoardTest, unitTestName)
{
	ASSERT_TRUE(true);
}
*/

TEST(TicTacToeBoardTest, toggleTurnO)
{
	TicTacToeBoard board;

	ASSERT_EQ(board.toggleTurn(), O);
	
}

TEST(TicTacToeBoardTest, toggleTurnX)
{
	TicTacToeBoard board;
	board.toggleTurn();

	ASSERT_EQ(board.toggleTurn(), X);
}

TEST(TicTacToeBoardTest, toggleTurnX2)
{
	TicTacToeBoard board;
	board.toggleTurn();
	board.toggleTurn();
	board.toggleTurn();

	ASSERT_EQ(board.toggleTurn(), X);
}

TEST(TicTacToeBoardTest, toggleTurnO2)
{
	TicTacToeBoard board;
	board.toggleTurn();
	board.toggleTurn();
	board.toggleTurn();
	board.toggleTurn();
	
	ASSERT_EQ(board.toggleTurn(), O);

}

TEST(TicTacToeBoardTest, placePieceX11)
{
	TicTacToeBoard board;
   	board.placePiece(1,1);	

	ASSERT_EQ(board.getPiece(1,1), X); 
}

TEST(TicTacToeBoardTest, placePieceO22)
{
	TicTacToeBoard board;
	board.placePiece(2,2);
	
	ASSERT_EQ(board.getPiece(2,2), O); 
}

TEST(TicTacToeBoardTest, getPieceBlank)
{
	TicTacToeBoard board;
	
	ASSERT_EQ(board.getPiece(1,1), ' '); 
}


