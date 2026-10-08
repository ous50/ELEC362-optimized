1. Loops  
   A `for` loop is commonly used for counting or iterating over a range. A `while` loop is useful when the number of iterations is unknown. Here, `while (getline(...))` processes each line until reading fails or the end of the file is reached.

2. Functions  
   Split the program into functions to:
   - Get the filename from user input and apply a default.
   - Check whether the input file can be opened.
   - Convert a string to a double and calculate its square root.
   - Read the CSV and write the results.
   - Display error messages in red using ANSI escape codes.

3. File selection  
   Let the user enter a filename or path to choose the input file.

4. Error handling  
   If the specified file cannot be opened, the program throws the integer `404`, which I chose based on HTTP's “Not Found” status code. The handler in `main()` catches it and displays a red error message.

5. Triggering an error inside a function  
   Entering a nonexistent filename causes `get_file_name()` to throw `404`. The exception propagates to `main()`, where it is caught and handled.