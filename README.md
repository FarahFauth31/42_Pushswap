# 42_Pushswap
Pushswap is a simple and highly effective sorting algorithm project.
I had at my disposal a set of integer values, 2 stacks, and a set of instructions to manipulate both stacks. The instructions were:
<ul>
  <li>Swap a: Swaps the first two elements of stack a.</li>
  <li>Swap b: Swaps the first two elements of stack b.</li>
  <li>Push a: Takes the first element from stack b and puts it at the top of stack a.</li>
  <li>Push b: Takes the first element from stack a and puts it at the top of stack b.</li>
  <li>Rotate a: Shifts all elements of stack a up by one position, so the first element becomes the last.</li>
  <li>Rotate b: Shifts all elements of stack b up by one position, so the first element becomes the last.</li>
  <li>Reverse rotate a: Shifts all elements of stack a down by one position, so the last element becomes the first.</li>
  <li>Reverse rotate b: Shifts all elements of stack b down by one position, so the last element becomes the first.</li>
</ul>

The program had to display on the standard output the instructions that sorted most efficiently the input set of integer values.
My program treats differently stacks with less than 6 numbers, stacks with 6 numbers to 100 numbers and stacks wth more than 100 numbers.
I took inspiration from the quick sort algorithm and the chunk sort algorithm.
