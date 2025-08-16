# Worksheet 4

Forked the provided repo and continued to clone it:

![MY_SCREENSHOT](https://imgur.com/Fq8uQ71.png)

Then I run the command below to clone the repo.

```
git clone https://gitlab.uwe.ac.uk/h29-hassan/Worksheet4.git
```

Navigated to the directory :
```
cd worksheet4_tasks
```
This shows the content of the forked online repo on the cloud.

To open the specific the window in VScode I ran the following:
```
code .
```

### **Task 1: Implement the Rule One Function**

Defines and implements the logic for the first rule in Conway's Game of Life. This function processes the grid at position `(x, y)` to determine the outcome based on Rule 1.

![My SCREENSHOT](https://imgur.com/znBlv7c.png)
### **Task 2: Implement the Rule Two Function**

Defines and implements the logic for the second rule in the game, applying it to the cell at position `(x, y)`.

![My SCREENSHOT](https://imgur.com/PvrbyYH.png)
### **Task 3: Define and Implement the Rule Three Function**

Adds the definition and logic for Rule 3 of the game. This section ensures cells behave as expected when the third condition is met.

![My SCREENSHOT](https://imgur.com/BhewYXp.png)
### **Task 4: Define and Implement the Rule Four Function**

Handles Rule 4's logic, completing the set of rules for the Game of Life.

![My SCREENSHOT](https://imgur.com/GBfviWB.png)
### **Main Function**

1.  **Test Block:** Includes code to test the implemented rules using the `gol::run_gol` function. This block is commented out by default and can be used to verify functionality.
2.  **Grid Traversal and GIF Generation:** Implements the main program logic. It traverses the grid, applies the defined rules, and generates a GIF visualisation of the game using the functions provided in `game_of_life.hpp`.

![My SCREENSHOT](https://imgur.com/zQMJJOt.png)
## Outcome of the main function:

After running the code by using the complier:

> Ctrl + Shift + B

This will trigger the creation of a new .gif file as shown below.

![My SCREENSHOT](https://imgur.com/VoK4AtS.png)

## start_grid.txt customisation:

#### Below is a combination of the different cell combination that make up my gif:

![My SCREENSHOT](https://imgur.com/U23KxLO.png)

In the image above it contains "asa.cells" which is a pattern I used from a 3rd party linked below along with how I made the .cells file:

https://en.wikipedia.org/wiki/Conway%27s_Game_of_Life
![My SCREENSHOT](https://imgur.com/kSVogrw.png)



### Git commit and push to online repo:

 1. `Git add .`  
 2. `Git commit -m "Completed Tasks`
 3. `Git push -u origin master`
 4. After entering your credentials your push will finalise.