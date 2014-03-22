TEST PLAN AND SPECIFICATIONS OUTLINE
TITLE OF TEST PLAN/SPEC
• test plan consisting of 1 or 2 paragraphs describing what is to be tested and list what
is to be tested in some format e.g. table so that it's easy to reference.
Example:
[1 or 2 paragraph describing what will be tested]
In this test plan we cover the testing of the following items:
1. Ability to accept character strings as system input
2. Ability to enter data into association list
3. Ability to proper values for each key
4. Ability to properly handle keys not in association list
• test spec of how the system is to be tested. this can be in a list and/or table form
- title and description of what to be tested (1-5 sentences)
- test environment and initial setup or conditions
- expected inputs, expected outputs
- what it is to be verified (1-5 sentences or a list of what is
to be verified)
Example:
1.0 Accepting and parsing character strings as input:
Verify that character stings are properly entered and parsed so
they may be entered as keys or values into the association list.
Test Setup:
The parser is initialized and in idle state.
Inputs/Outputs:
Input is character string in ASCII from standard in.
Output is a valid key or value.
Test Specification:
Verify that the character string is successfully parsed as a valid
word for a key or as a valid string for a value when operation is
completed.