# Lab 03

Welcome to your third lab.

## Starting point

Use the shortcut Ctrl + Shift + V to open the README.md file in Preview mode.

## Learning objectives

After completion of this lab, students will be able to

- Understand the basics of functions
- Understand the basic of Conditionals (if , else if , else)
- Debug and do dry-runs by tracing

## Instructions

Make sure you follow these instructions carefully. Ask your TAs for any help.

### Rename the file to your BITS ID

You should see a C file: `Lab03.c`. The first thing you should do is rename it to your `BITSID.c`. For example, if your ID is 2023AXPS5678G, the file should be renamed to `2023AXPS5678G.c`.

To rename a file,

- right click on it in the explorer column on the left,
- click the rename option,
- type in the new name and hit enter.

## Running your first C program

Now open the `BITSID.c` file by double-clicking on it. The program looks exactly like the 'your first program' we saw in class.

- Open a terminal: On the menu bar at the top: Click Terminal > New Terminal.
- A `TERMINAL` window opens at the bottom of your screen with a command prompt.

Type the following command in it and hit enter (of course, replace `<BITSID>` with your actual BITS ID so it finds the file in your folder):

```sh
gcc <BITSID>.c -o lab03
```

You should see a new file `lab03` in the Explorer on the left.

Run your program by typics the following command:

```sh
./lab03
```

## Practice component

Now, look at the comments given in the code, and try to write a working code for the 2 practice questions given.

### Run against the given test cases

How do you know if your program is correct? We have some _test cases_ that do this for you.
Go to the terminal and run the command

```sh
python3 autograder.py <BITSID>.c Lab03-tests.json
```

Here are two example outputs:
When your output does not match the expected output, i.e., the test case _fails_:

```txt
Testing code for student with BITS ID: 2023AXPS5678G
-----TEST CASE NUMBER 1-----
---Given INPUT---
1
80


---Expected OUTPUT---
Enter number '1' for pass/fail and '2' for grade
Enter percentage:
PASS

---Your OUTPUT---

Final Score: 0/1
```

When your output does match the expected output, i.e., when the test case _passes_:

```txt
Testing code for student with BITS ID: 2023AX5678G
-----TEST CASE NUMBER 1-----
---Given INPUT---
1
80

---Expected Output---
Enter number '1' for pass/fail and '2' for grade
Enter percentage:
PASS

---Your Output---
Enter number '1' for pass/fail and '2' for grade
Enter percentage:
PASS


---Result: Passed---
Final Score: 1/1
```

> Your goal is to make _all_ test cases pass (in this case, only one) before you submit your lab.

- You don't have to make any submissions for this lab. So try to get the correct output by the end of this exercise in order to ensure that you have thoroughly understood the topics taught in classes and in this lab.

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