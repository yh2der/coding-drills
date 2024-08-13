# Encode and Decode Strings
## Understand
**Clarifying Questions**:
- Does the problem require all strings to be encoded and decoded without ambiguity?
- Could the string array contain empty strings or special characters?

**Example**:
- **Input**: `["hello", "world"]`
- **Expected Output**:
  - **Encoded**: `"5#hello5#world"`
  - **Decoded**: `["hello", "world"]`
- **Edge Cases**:
  - Empty string: `[""]` -> `"0#"`
  - String containing `#`: `["hello#world"]` -> `"11#hello#world"`

## Match
**Problem Category**:
- **Strings**: This problem involves string manipulation, including concatenation and splitting.

**Pattern**:
- For encoding, concatenate the length of the string with the string itself, separated by a `#`.
- For decoding, use the length information to extract each original string step by step.

## Plan
1. **Encode**:
   - Initialize an empty string `result`.
   - For each string in `strs`:
     - Calculate its length and convert it to string format.
     - Concatenate the length, `#`, and the original string, and append to `result`.
   - Return `result`.

2. **Decode**:
   - Initialize an empty string array `result`.
   - Use two pointers `i` and `j` to traverse the encoded string `s`.
   - Determine the length `length` of each string based on the position of `#`, then extract the substring of that length.
   - Append the extracted string to `result`, and adjust `i` to continue processing the next string.
   - Return `result`.

## Implement
see sol.cpp

## Review
- Use the examples above (such as `["hello", "world"]`) and edge cases (like empty strings or strings containing `#`) to test the code, ensuring both the encode and decode functions work correctly.
- **Debugging**:
  - Check if the string length calculations are correct.
  - Confirm that the pointer movements during decoding are accurate.

## Evaluate
- **Time Complexity**:
  - **Encode**: `O(n)`, where `n` is the total length of all strings since we need to traverse each string.
  - **Decode**: `O(n)`, as we similarly need to traverse the entire encoded string.
- **Space Complexity**:
  - Storage of the encoded string `result` and the decoded `result` list both require `O(n)` space.