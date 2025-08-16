#include "game_of_life.hpp"

// Rule 1: A live cell with fewer than two living neighbours dies
void rule_one (int row, int col) {
    // Verify if the specified cell is alive
    if (gol::get_cell(row, col)) {

        // Calculate the number of living neighbours
        int living_neighbours = gol::num_of_neigbours(row, col);

        // If there are fewer than two living neighbours, the cell dies
        if (living_neighbours < 2) {
            gol::set_cell(row, col, false);
        }
    }
}

// Rule 2: A live cell with two or three living neighbours stays alive
void rule_two(int row, int col) {
    // Check if the cell at the given coordinates is alive
    if (gol::get_cell(row, col)) {

        // Get the count of living neighbours
        int living_neighbours = gol::num_of_neigbours(row, col);

        // If the cell has exactly 2 or 3 living neighbours, it stays alive
        if (living_neighbours == 2 || living_neighbours == 3) {
            gol::set_cell(row, col, true);
        }
    }
}

// Rule 3: A live cell with more than three living neighbours dies
void rule_three(int row, int col) {
    // Confirm if the cell at the specified position is alive
    if (gol::get_cell(row, col)) {

        // Determine the count of living neighbours
        int living_neighbours = gol::num_of_neigbours(row, col);

        // If neighbours exceed three, the cell dies
        if (living_neighbours > 3) {
            gol::set_cell(row, col, false);
        }
    }
}

// Rule 4: A dead cell with exactly three living neighbours becomes alive
void rule_four(int row, int col) {
    // Check if the cell is currently dead
    if (!gol::get_cell(row, col)) {

        // Count the number of living neighbours
        int living_neighbours = gol::num_of_neigbours(row, col);

        // If the cell has exactly three living neighbours, it becomes alive
        if (living_neighbours == 3) {
            gol::set_cell(row, col, true);
        }
    }
}

  // // This is a test function: Highlight this block and use ctrl/cmd + /
  // // to uncommment the gol::run_gol function to test your functions.
  // // Note task 5 is below!
  // gol::run_gol(rule_one,rule_two,rule_three,rule_four);

  // Task 5: Using the functions available in game_of_life.hpp and
  // the pseudocode in worksheet 4, implement the main program code to
  // traverse the grid, apply your functions and generate the Gif
  //See this projects readme for details on the gol library.

int main() {
    gol::init_game_of_life("Asa_GameOfLife.gif");
    gol::seed_grid("start_grid.txt");
    gol::write_frame();

    int NumberOfFrames = 100;

    for (int frame = 0; frame < NumberOfFrames; ++frame) {

        for (int x = 0; x < gol::get_x_dimension(); ++x) {
            for (int y = 0; y < gol::get_y_dimension(); ++y) {
                rule_one(x, y);
                rule_two(x, y);
                rule_three(x, y);
                rule_four(x, y);
            }
        }

        gol::write_frame();
    }

    gol::render();

    return 0;
}
