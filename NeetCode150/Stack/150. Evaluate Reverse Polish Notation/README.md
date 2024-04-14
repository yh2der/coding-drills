# Evaluation of Reverse Polish Notation

## Steps:

1. **Initialize a stack to store numbers**: We create an empty stack (`nums`) to store the numbers encountered while evaluating the expression.

2. **Iterate through the tokens**: We loop through each token in the given vector of strings representing the reverse polish notation expression.

3. **Process each token**:
   - If the token is an operator (`+`, `-`, `*`, `/`), pop the top two numbers from the stack, perform the operation, and push the result back onto the stack.
   - If the token is a number, convert it to an integer using `stoi` and push it onto the stack.

4. **Return the result**: After processing all tokens, the final result is the only element remaining in the stack. We return this result.

## Time Complexity:
- **Traversal through tokens**: O(n), where n is the number of tokens in the input expression.
- **Pushing and popping from the stack**: O(1) for each operation.
- Overall time complexity: O(n), where n is the number of tokens in the expression.

## Space Complexity:
- **Stack**: O(n), where n is the number of tokens in the expression. The space required is proportional to the maximum number of elements that can be stored in the stack at any given time.
- **Other variables**: O(1) extra space is used for other variables.
- Overall space complexity: O(n).

## Notes
* if it is talking about polish notation, just loop the tokens from rear.
* if it is talking about infix, convert it to postfix first.