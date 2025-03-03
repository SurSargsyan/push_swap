<a name="readme-top"></a>
<div align="center">
 
  <!-- Project Name -->
  <h1>Push-Swap Project</h1>

  <!-- Short Description -->
  <p align="center">
	  <b>42 Malaga Push-Swap</b><br>
	  For further information about 42cursus and its projects, please refer to <a href="https://github.com/SurSargsyan/push_swap/tree/main"><b>42cursus repo</b></a>.
  </p>

  <!-- Badges -->
  <p>
    <img src="https://img.shields.io/badge/score-100%20%2F%20100-success?style=for-the-badge" />
    <img src="https://img.shields.io/github/repo-size/dpetrosy/42-Push-Swap?style=for-the-badge&logo=github">
    <img src="https://img.shields.io/github/languages/count/dpetrosy/42-Push-Swap?style=for-the-badge&logo=" />
    <img src="https://img.shields.io/github/languages/top/dpetrosy/42-Push-Swap?style=for-the-badge" /
  </p>

  <h3>
      <a href="#-about-project">📜 About Project</a>
    <span> · </span>
      <a href="#-operations-list">📑 Operations List</a>
    <span> · </span>
	  <a href="#-algorithm">🧮 Algorithm</a>
    <span> · </span>
	  <a href="#-bonus-part">🌟 Bonus Part</a>
    <span> · </span>
      <a href="#-usage">👨‍💻 Usage</a>
  </h3>
</div>

---

## 📜 About Project

* This project will make you sort data on a stack, with a limited set of operations, using the lowest possible number of actions.

* The Push_swap project is a very simple and highly effective algorithm project: data will need to be sorted.  
You have at your disposal a set of int values, 2 stacks and a set of operations to manipulate both stacks.  

* The goal is to write a program in C called push_swap which calculates and displays on the standard output the operations, that sort the integers received as arguments.

* The learning objectives of this project are rigor, use of C and use of basic algorithms. Especially looking at the complexity of these basic algorithms.

* You are allowed to use the following functions: malloc, free, exit, write, read.

For detailed information, refer to the [**subject of this project**](https://github.com/SurSargsyan/push_swap/blob/main/es.subject.pdf).

	🚀 TLDR: Given a set of integers, sort it using a predefined set of operations using 
 		 two stacks. The operations list is defined below. This program outputs 
	         push_swap operations that sorts the input integers.

> [!NOTE]  
> Because of 42 School norm requirements:
> * Each function can't have more then 25 lines of code.
> * All variables are declared and aligned at the top of each function.
> * Project should be created just with allowed functions otherwise it's cheating.

## 📑 Operations List

The program is only allowed to work with two stacks: stack A and stack B. \
All the numbers are initially added to stack A, and stack B is empty.

The possible operations are:

| Code  | Operations                          | Action                                                 |
|:-----:|:-----------------------------------:|:------------------------------------------------------:|
| `sa`  | swap a                              | swaps the 2 top elements of stack a                    |
| `sb`  | swap b                              | swaps the 2 top elements of stack b                    |
| `ss`  | swap a + swap b                     | both `sa` and `sb`                                     |
| `pa`  | push a                              | moves the top element of stack b at the top of stack a |
| `pb`  | push b                              | moves the top element of stack a at the top of stack b |
| `ra`  | rotate a                            | shifts all elements of stack a from bottom to top      |
| `rb`  | rotate b                            | shifts all elements of stack b from bottom to top      |
| `rr`  | rotate a + rotate b                 | both `ra` and `rb`                                     |
| `rra` | reverse rotate a                    | shifts all elements of stack a from top to bottom      |
| `rrb` | reverse rotate b                    | shifts all elements of stack b from top to bottom      |
| `rrr` | reverse rotate a + reverse rotate b | both `rra` and `rrb`                                   |

## 🧮 Algorithm

I use `Butterfly` algorithm for sorting. Here is a short description:

* First, need to generate a chunk number.
* After I iterate through stack A look for a number, whose index is smaller than the counter (numbers count in stack B).
* If I find that number, I do `pb` and `rb`.
* If no, I check if the number is smaller than counter + chunk, and do only `pb`.
* Repeat these operations until stack A becomes empty.
* In stack B we will have numbers in order like 90-degree rotated butterfly 🦋.
* After that, I will iterate through stack B and push the maximum index in stack A (i.e. `pa`) until stack B becomes empty.
* After these operations, stack A becomes sorted.

## 👨‍💻 Usage

### Requirements

The program is written in C language and thus needs the **gcc compiler** and some standard **C libraries** to run.

### Instructions

**1. Compiling the program**

To compile the program, run:

```shell
$ cd path/to/push_swap && make
```

To compile the checker, run:

```shell
$ cd path/to/push_swap && make bonus
```

**2. How to run the program**

Run the executable together with the set of numbers separated by a space:
```shell
./push_swap 5 7 10 4 6 8 9 2 1 3
```

To run the checker on push_swap, use the pipe:
```shell
ARG="5 7 10 4 6 8 9 2 1 3"; ./push_swap $ARG | ./checker $ARG
```

Use `clean` to delete all object files, `fclean` to remove executable and all object files, and `re` to recompile the program:
```shell
make clean / make fclean / make re
```

# Author ✍🏼

<table>
  <tr>
    <td align="center"><a href="[https://github.com/SurSargsyan/](https://profile.intra.42.fr/users/susargsy)"><img src="https://github.com/user-attachments/assets/10784ded-47b7-48bd-afb0-97907cdd652b" width="100px;" alt="100px"/><br /><sub><b>SurSargsyan</b></sub></a><br /><a href="https://profile.intra.42.fr/users/susargsy title="Intra 42"><img src="https://img.shields.io/badge/Malaga-FFFFFF?style=plastic&logo=42&logoColor=000000" alt="Intra 42"/></a></td>
  </tr>
</table>

# Contact 📥

◦ Email: sargsyansuren11@gmail.com

◦ Linkedin: https://www.linkedin.com/in/suren-sargsyan-25582a27a/

# You Might Be Interested!

### - To see mt progression in the 42 common core ↙️

[HERE](https://github.com/SurSargsyan?tab=repositories)

### - My profile on the intranet ↙️
[HERE](https://profile.intra.42.fr/users/susargsy)
