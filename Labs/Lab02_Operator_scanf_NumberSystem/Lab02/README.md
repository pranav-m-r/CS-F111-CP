# Lab 02

Welcome to your second lab.

## Starting point

Use the shortcut Ctrl + Shift + V to open the README.md file in Preview mode.

## Learning objectives

After completion of this lab, students will be able to

* practice input/output functions
* understand operators

## Instructions

Make sure you follow these instructions carefully. Ask your TAs for any help.

### Rename the file to your BITS ID

You should see a C file: `Lab02.c`. The first thing you should do is rename it to your `BITSID.c`. For example, if your ID is 2023AXPS5678G, the file should be renamed to `2023AXPS5678G.c`. 

To rename a file,

* right click on it in the explorer column on the left,
* click the rename option,
* type in the new name and hit enter.

## Running your C program

Now open the `BITSID.c` file by double-clicking on it. 

* Open a terminal: On the menu bar at the top: Click Terminal > New Terminal. 
* A `TERMINAL` window opens at the bottom of your screen with a command prompt.

Type the following command in it and hit enter (of course, replace `<BITSID>` with your actual BITS ID so it finds the file in your folder):

```sh
gcc <BITSID>.c -o lab02
```

You should see a new file `lab02` in the Explorer on the left.

Run your program by typics the following command:

```sh
./lab02
```
## Practice Question

Alice goes to a supermarket where she buys some apples, mangoes and oranges respectively.
Their costs are given in dozens. Help her find the total cost.

You will be taking as input the quantity of each type of fruit and their respective costs per dozen.

For example:

INPUT:
```sh
15 27 48
50 45 65
```

This input means that the quantity of apples is 15. The cost of apples is 50 per dozen. Similarly the quantity and cost per dozen for mangoes are 27 and 45, and for oranges 48 and 65.

Convert each fruit's quantity into dozens. After grouping a fruit type into dozens, the left over quantity is not considered in the cost. 
For example, the quantity of apples given is 15. So the cost will take into account 1 dozen, that is 12 apples. The remaining 3 apples are not taken into account when calculating the cost.

Print the cost of each fruit, the total cost and the remaining quantities for each fruit not considered in the cost.

For the inputs above, the sample OUTPUT is:

```sh
Cost of Apples-50
Cost of Mangoes-90
Cost of Oranges-260
Total Cost-400
Remaining Apples-3
Remaining Mangoes-3
Remaining Oranges-0
```

In the code provided: Follow the TODOs.

### Run against the given test cases

How do you know if your program is correct? We have some *test cases* that do this for you.
Go to the terminal and run the command

```sh
python3 autograder.py <BITSID>.c Lab02-tests.json
```

Here are two example outputs:
When your output does not match the expected output, i.e., the test case *fails*:
```txt
Testing code for student with BITS ID: 2023AXPS5678G
-----TEST CASE NUMBER 1-----
---Given INPUT---
15
27
48
50
45
65

---Expected OUTPUT---
Cost of Apples-50
Cost of Mangoes-90
Cost of Oranges-260
Total Cost-400
Remaining Apples-3
Remaining Mangoes-3
Remaining Oranges-0

---Your OUTPUT---
Cost of Apples-50
Cost of Mangoes-80
Cost of Oranges-260
Total Cost-400
Remaining Apples-3
Remaining Mangoes-2
Remaining Oranges-0

---Result: Failed---

Final Score: 0/1
```

When your output does match the expected output, i.e., when the test case *passes*:

```txt
Testing code for student with BITS ID: 2023AX5678G
-----TEST CASE NUMBER 1-----
---Given INPUT---
12
24
48
50
45
65

---Expected Output---
Cost of Apples-50
Cost of Mangoes-90
Cost of Oranges-260
Total Cost-400
Remaining Apples-3
Remaining Mangoes-3
Remaining Oranges-0

---Your Output---
Cost of Apples-50
Cost of Mangoes-90
Cost of Oranges-260
Total Cost-400
Remaining Apples-3
Remaining Mangoes-3
Remaining Oranges-0

---Result: Passed---

Final Score: 1/1
```

> Your goal is to make *all* test cases pass (in this case, only one) before you submit your lab.

* You don't need to make any submissions for this lab. So try to get the correct output by the end of this exercise in order to ensure that you have thoroughly understood the topics taught in classes and in this lab.

However, if you want your solution on quanta for personal use follow the steps below:

## Preparing the submission

1. First, make sure the .c file is renamed properly and works as expected (Your ID should end with a G).

2. Run the following command in the terminal to make the program to prepare submission an executable:

   ```sh
   chmod u+x prepare_submission
   ```

3. Execute that program to produce the submission file `YOURBITSID.tar.gz`:

   ```sh
   ./prepare_submission
   ```

4. Upload the created file to the appropriate assignment on <https://quanta.bits-goa.ac.in/>.
   Be sure to leave the 'Save As' option blank while uploading the your solution on quanta.

   Also, check that the correct .tar.gz file has been uploaded before logging out from quanta. 
   Also, ensure that your submission is not in a draft form.

> This is a non-evaluative lab. Your submission will NOT be graded.