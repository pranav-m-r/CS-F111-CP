# Lab 01

Welcome to your first lab.

## Starting point

Use the shortcut Ctrl + Shift + V to open the README.md file in Preview mode.

## Learning objectives

After completion of this lab, students will be able to

* download the questions from the FTP server
* write the solution in a C program
* check it against the given test cases
* submit their work on local quanta

## Instructions

Make sure you follow these instructions carefully. Ask your TAs for any help. This is the only evaluative lab in which you will be able to ask TAs for help.

### Rename the file to your BITS ID

You should see a C file: `Lab01.c`. The first thing you should do is rename it to your `BITSID.c`. For example, if your ID is 2023AX5678G, the file should be renamed to `2023AX5678G.c`. This is the only way we can identify your submission in the pool of 1000+ students. If you fail to rename it properly, your submission is lost, and you will not get any marks for your lab.

We will run a script to evaluate these automatically. If it fails, you will receive zero marks.

To rename a file,

* right click on it in the explorer column on the left,
* click the rename option,
* type in the new name and hit enter.

## Running your first C program

Now open the `BITSID.c` file by double-clicking on it. The program looks exactly like the 'your first program' we saw in class.

* Open a terminal: On the menu bar at the top: Click Terminal > New Terminal. 
* A `TERMINAL` window opens at the bottom of your screen with a command prompt.

Type the following command in it and hit enter (of course, replace `<BITSID>` with your actual BITS ID so it finds the file in your folder):

```sh
gcc <BITSID>.c -o lab01
```

You should see a new file `lab01` in the Explorer on the left.

Run your program by typics the following command:

```sh
./lab01
```

It should produce the output `My first program` in the terminal.

### Modify the program

Let's make small changes to the program and compile and run it to see the effects.

* Add a `printf` below the given one that prints the string `Welcome to CSF111!`
  * Run it using the steps above and check the output.
* Does it appear on the same line as `My first program`?
* How can you make them appear on two different lines? (Use the escape character `\n`)
* Modify it further so that it prints `Yours, <your name>` on a separate line.

The final output should look like:
```sh
My first program
Welcome to CSF111
Yours, <your name>
```

## Evaluative component

Now, delete all the `printf` statements you have written so far.

Add new `printf`s so that the program prints the following on the console:

```sh
Hangzhou 2022 Asian Games:
India won 28 gold, 38 silver, and 41 bronze medals.
```

You can use format modifiers `"%d"`, but you don't have to at this point. Do not worry if you are not taught format modifiers in class yet. You do not need it for this lab.

### Run against the given test cases

How do you know if your program is correct? We have some *test cases* that do this for you.

In this lab, you are writing a program that does not depend on the input - so we have only one test case.

Go to the terminal and run the command

```sh
python3 autograder.py <BITSID>.c Lab01-tests.json
```

Here are two example outputs:

When your output does not match the expected output, i.e., the test case *fails*:

```txt
Testing code for student with BITS ID: 2023AX5678G
-----TEST CASE NUMBER 1-----
---Given INPUT---

---Expected OUTPUT---
Hangzhou 2022 Asian Games:
India won 28 gold, 38 silver, and 41 bronze medals.

---Your OUTPUT---
Hangzhou 2022 Asian Games:India won 28 gold, 38 silver, and 41 bronze medals.
---Result: Failed---
Final Score: 0
```

When your output does not match the expected output, i.e., when the test case *passes*:

```txt
Testing code for student with BITS ID: 2023AX5678G
-----TEST CASE NUMBER 1-----
---Given INPUT---

---Expected OUTPUT---
Hangzhou 2022 Asian Games:
India won 28 gold, 38 silver, and 41 bronze medals.

---Your OUTPUT---
Hangzhou 2022 Asian Games:
India won 28 gold, 38 silver, and 41 bronze medals.

---Result: Passed---
Final Score: 1
```

> Your goal is to make *all* test cases pass (in this case, only one) before you submit your lab.

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
>
> You can submit as many times as you want, but only the latest submission will be considered for grading.
