# Hacker Rank - Fall 2020 - ACM Coding Meetup 1 - Checkerboard

## Description

An 𝒓×𝒄 grid of squares is to be colored in a checkerboard style. The board will be filled with rectangles made up of the grid squares. The heights and widths of the rectangles will be specified. Black and White are the only two colors of the rectangles. Any two adjacent rectangles that share a side should be colored differently. The top-left rectangle should be Black. Print the checkerboard.

### Input Format

The first line contains four space-separated integers 𝒓, 𝒄, 𝒗 and 𝒉 (1 ≤ 𝒗 ≤ 𝒓 ≤ 50, 1 ≤ 𝒉 ≤ 𝒄 ≤ 50) where the checkerboard is to have 𝒓 rows and 𝒄 columns, with 𝒗 rectangles vertically and 𝒉 rectangles horizontally.

Each of the next 𝒗 lines contain a single positive integer 𝒂. The sum of the 𝒂 values will be exactly 𝒓. These are the heights of the 𝒗 rectangles in each column, in order from top to bottom.

Each of the next 𝒉 lines contain a single positive integer 𝒃. The sum of the 𝒃 values will be exactly 𝒄. These are the widths of the 𝒉 rectangles in each row, in order from left to right.
### Constraints

* 1 ≤ 𝒗 ≤ 𝒓 ≤ 50

* 1 ≤ 𝒉 ≤ 𝒄 ≤ 50

### Output Format

Print the described checkerboard, in the form of 𝒓 strings of length 𝒄, one per line. The strings should only contain the characters upper-case B (for a Black square) and upper-case W (for a White square).

### Sample Input 0

```
6 5 3 2
1
2
3
3
2
```

### Sample Output 0

```
BBBWW
WWWBB
WWWBB
BBBWW
BBBWW
BBBWW
```

### Sample Input 1

```
4 4 2 2
1
3
3
1
```

### Sample Output 1

```
BBBW
WWWB
WWWB
WWWB
```