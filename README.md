<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>

<header>
  <h1>Yoga Studio Customer Search Program 🧘‍♀️</h1>
  <p>
    The program allows a yoga studio to find loyal customers who have attended a certain number of lessons from a dataset. It reads customer information from a file and searches for customers who meet the specified lesson count. 
  </p>
</header>

<hr>

<details>
  <summary>Table of Contents 📖</summary>
  <ul>
    <li><a href="#task">Task</a></li>
    <li><a href="#input-and-output">Input and Output</a></li>
    <li><a href="#examples">Examples</a></li>
    <li><a href="#requirements">Requirements</a></li>
    <li><a href="#usage">Usage</a></li>
  </ul>
</details>

<hr>

<section id="task">
  <h2>Task 🛠️</h2>
  <p>
    Write a C program to search a list of customers based on the number of lessons they have attended. The program should read customer data from a file, search for customers who have attended more than a specified number of lessons, and then write the results to an output file.
  </p>
</section>

<hr>

<section id="input-and-output">
  <h2>Input and Output 🖥️</h2>
  <h3>Input</h3>
  <ul>
    <li>A file <code>customers.csv</code> containing customer data in the format: 
      <ul>
        <li><code>email_address, number_of_lessons, name</code> (one customer per line).</li>
      </ul>
    </li>
    <li>The user will input the minimum number of lessons to search for.</li>
  </ul>

  <h3>Output</h3>
  <ul>
    <li>The program will generate an output file <code>result.csv</code> containing customers who have attended more than the specified number of lessons. The output format should match the input format.</li>
  </ul>
</section>

<hr>

<section id="examples">
  <h2>Examples 📋</h2>
  <h3>Example #1</h3>
  <div class="code-block">
    Enter number of lessons: 15<br>
    Output file name: result.csv<br>
  </div>
  <p><strong>Explanation:</strong></p>
  <ul>
    <li>The program reads customer data from <code>customers.csv</code>, searches for those who have attended more than 15 lessons, and writes the result to <code>result.csv</code>.</li>
  </ul>
</section>

<hr>

<section id="requirements">
  <h2>Requirements ✔️</h2>
  <ol>
    <li>The program must include the function:
      <ul>
        <li><code>int search(struct customer list[], int n, int num_lessons, struct customer result[]);</code></li>
        <li>The function should search the customer list and store customers with more than <code>num_lessons</code> in the result array.</li>
        <li>The program should handle reading and writing files as described in the input and output sections.</li>
      </ul>
    </li>
    <li>The input file format should be as specified with each customer on a new line, including the email address, number of lessons, and name.</li>
    <li>The program should handle at most 200 customers.</li>
  </ol>
</section>

<hr>

<section id="usage">
  <h2>Usage 🚀</h2>
  <p><strong>1. Compile the Program:</strong></p>
  <div class="code-block">gcc -o yoga_studio_search yoga_studio_search.c</div>
  <p><strong>2. Run the Program:</strong></p>
  <div class="code-block">./yoga_studio_search</div>
  <p><strong>3. Input Required:</strong></p>
  <ul>
    <li>Number of lessons to search for.</li>
    <li>Output file name.</li>
  </ul>
</section>

</body>
</html>
