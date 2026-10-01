# SimpleCalculator

A command-line calculator written in C. It takes two integers and an operator, prints the result, and asks whether you want to continue.

## Operations

| Operator | Operation | Output |
|----------|-----------|--------|
| `+` | Addition | Integer |
| `-` | Subtraction | Integer |
| `*` | Multiplication | Integer |
| `/` | Division | Float with 2 decimal places (e.g. `7 / 2` gives `3.50`) |
| `%` | Modulus (remainder) | Integer |
| `^` | Exponentiation (uses the `c_pow` function) | Integer |

## How It Works

1. Enter the first number.
2. Enter an operator (`+`, `-`, `*`, `/`, `%`, or `^`).
3. Enter the second number.
4. The result is printed.
5. When asked `Do you want to continue? (Y/N)`, enter `n` or `N` to quit. Any other input starts another calculation.

## Error Handling

- Dividing (`/`) or taking a remainder (`%`) with a second number of `0` prints `Cannot divide by zero`.
- Any operator other than the six above prints `Invalid Operator`.

## Build and Run

Compile with any C compiler, for example GCC:

```bash
gcc -o SimpleCalculator <your_source_file>.c
./SimpleCalculator
```

## Example Session

```text
Enter your Num 1: 7
Enter your Operator [Operators are '+' '-' '*' '/' '%' '^']: /
Enter your Num 2: 2
Result: 3.50
Do you want to continue? (Y/N) n
```

## Known Limitations

- `c_pow` only supports non-negative exponents. A negative exponent returns `1`.
- All values are `int`, so large results of `*` and `^` can overflow.
- `%` with negative numbers follows C's rules (the result takes the sign of the left operand).
- Input is not validated: typing letters where a number is expected can cause unexpected behavior.
