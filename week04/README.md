# COMP1511 Tutorial 04

## Arrays

- Stores a collection of values with the same data type
- Must be declared with a constant size (**CANNOT BE A VARIABLE**)
- Contents must be explicitly initialized otherwise elements are "empty"
- Use square brackets `[]` and index to access a specific element
  - Index starts at `0`
  - Index of last element is always `SIZE - 1`

```c
// Array of 5 integers, explicitly initialized
int array1[5] = {1, 2, 3, 4, 5};
printf("%d\n", array1[1]); // prints "2"

// Array of 3 doubles, all 0
double array2[10] = {0};
array2[8] = 3.14;
// array2 is now: {0, 0, 0, 0, 0, 0, 0, 0, 3.14, 0, 0}
```

## Functions

- Should only do 1 logical task
- Can be split into many smaller functions
- Should be maximum 50 lines long (split into smaller functions if needed)
- Can be reused with different arguments

### Function Implementations (Definitions)

- Goes below `main`, and contains the actual code for what the function should do
- Follows the syntax below where
  - `return type` is the data type of the return value, which can be stored
  - `parameters` are variables which are given value when the function is called
  - The `return` statement is not required when return type is `void`

```c
/* return type */ function_name(/* parameters */) {
    // Function body

    return /* value */;
}
```

### Function Prototypes

- Goes above `main`
- Only declares the return type, parameter types and function name
- Looks like the first line of the function, without its body

### Example

```c
// Prototype above main
int sum(int num1, int num2);

int main(void) {
    int a = 1;
    int b = 2;

    // Call the function and save return value to variable called "total"
    // Note how the name of variables passed to the function
    // doesn't need to match the name of the parameter
    int total = sum(a, b);

    return 0;
}

// Function implementation
int sum(int num1, int num2) {
    return num1 + num2;
}
```

## Refactoring

1. Identify a section of code which contributes to a single task. Copy
out this section, leaving a placeholder comment where it used to be.
2. Write a template function (using placeholders for return type and
paramaters) at the bottom of your file and paste the section into the
body.
3. Identify what variables are being used in the code section you pasted
which haven't been declared. Most of the time these will be your parameters.
4. Figure out what this function should output. Fill out the return type
and add a return statement if necessary.
5. Add a function prototype for this function by copying the first line
(only the return type, name and parameters), pasting it above `main` and
adding a semicolon.
6. Going back to where this section of code was extracted from, replace
the placeholder comment with a call to your function, assigning the
return value to a variable if needed.
