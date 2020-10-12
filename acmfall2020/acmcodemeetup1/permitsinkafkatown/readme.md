# Hacker Rank - Fall 2020 - ACM Coding Meetup 1

## Description

Getting a business permit in Kafkatown requires a trip to City Hall. There you are given a permit form that must be signed by K city clerks whose names are printed at the bottom of the form.

Entering the clerks’ room, you find a long line of people working their way down a narrow aisle along the clerks’ desks. The aisle is so narrow that the line is forced to shuffle forward, single file, past each clerks’ desk in turn. Once in the line you cannot leave, back up, or change positions with other people. The desks are numbered sequentially.

As you present your permit for a signature, you are told that no clerk will sign unless all of the signatures above his or her name on the permit form have already been filled in. To your dismay, the clerks’ desks are not arranged in the same order as the names on your form.

How many times will you need to pass through the line until you can get your permit? You, or you and your team is to write a program to determine this.

### Input Format

For example, assume you need signatures from five clerks, at desks number 1, 23, 18, 13, and 99. You will have to go through the line three times: the first time to get signatures from clerks at desks 1 and 23, the second time to get a signature from the clerk at desk 18, and the third time to get signatures from clerks at desks 13 and 99.

The first line of input contains an integer K, the number of signatures you need to collect, in the range 1 to 100 inclusive. This is followed by K lines of input, each containing an integer in the range 1 . . . 100, indicating the desk numbers of each of the clerks whose signature you need, in the order that they appear on your form. (Clerks whose signatures are not needed on your form are omitted from this list.) No desk number will appear more than once.

### Constraints

* **1 ≤ k ≤ 100**
* **1 ≤ input ≤ 100**

### Output Format

Your program is to print a single line containing only an integer denoting the number of passes you will need to make through the line in order to collect all of the signatures that you need. No leading or trailing whitespace, or leading signs or zeroes, are to be printed on the line.

### Sample Input

```
5
1
23
18
13
99
```

### Sample Output

```
3
```

### Explanation

Assume you need signatures from five clerks, at desks number 1, 23, 18, 13, and 99. You will have to go through the line three times: the first time to get signatures from clerks at desks 1 and 23, the second time to get a signature from the clerk at desk 18, and the third time to get signatures from clerks at desks 13 and 99.
