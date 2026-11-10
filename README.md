# ⚡ Sorting Algorithms in C++

<p align="center">
  <img src="https://img.shields.io/badge/Language-C++-blue?style=for-the-badge&logo=cplusplus" />
  <img src="https://img.shields.io/badge/Domain-DSA-orange?style=for-the-badge" />
  <img src="https://img.shields.io/badge/Status-Completed-success?style=for-the-badge" />
</p>

<p align="center">
  <b>Understanding Sorting Through Implementation 🚀</b>
  <br>
  A menu-driven C++ program implementing four fundamental sorting algorithms.
</p>

---

## 📌 About the Project

Sorting is one of the fundamental concepts in Data Structures and Algorithms (DSA).

This project demonstrates the implementation of four popular sorting algorithms using C++ through an interactive, menu-driven console application. Users can enter an array of elements, select their preferred sorting algorithm, and view the sorted output.

Each sorting operation works on a copy of the original array, allowing users to experiment with different algorithms without modifying the original input.

## 🚀 Sorting Algorithms Implemented

| # | Algorithm | Approach |
|:---:|---|---|
| 1️⃣ | Quick Sort | Divide and Conquer |
| 2️⃣ | Merge Sort | Divide and Conquer |
| 3️⃣ | Insertion Sort | Incremental Sorting |
| 4️⃣ | Selection Sort | Selection-Based Sorting |

## ✨ Key Features

- 🔢 **Dynamic Input:** Accepts the number of elements and array values from the user.
- 📋 **Original Array Display:** Displays the unsorted array before sorting.
- ⚡ **Multiple Sorting Techniques:** Implements four different sorting algorithms.
- 🎯 **Interactive Menu:** Allows users to choose their preferred algorithm.
- 🔄 **Repeated Execution:** Supports multiple sorting operations without restarting the program.
- 🛡️ **Data Preservation:** Uses a separate vector for every sorting operation, preserving the original array.

## 📊 Time Complexity Analysis

| Algorithm | Best Case | Average Case | Worst Case |
|---|---|---|---|
| Quick Sort | O(n log n) | O(n log n) | O(n²) |
| Merge Sort | O(n log n) | O(n log n) | O(n log n) |
| Insertion Sort | O(n) | O(n²) | O(n²) |
| Selection Sort | O(n²) | O(n²) | O(n²) |

### 💾 Space Complexity

| Algorithm | Auxiliary Space |
|---|---|
| Quick Sort | O(log n) average |
| Merge Sort | O(n) |
| Insertion Sort | O(1) |
| Selection Sort | O(1) |

## 🖥️ Sample Output

```text
Enter the Number of Elements: 5

Enter the Element: 45
Enter the Element: 12
Enter the Element: 78
Enter the Element: 23
Enter the Element: 9

Original Array: 45 12 78 23 9

----- SORTING MENU -----
1. Quick Sort
2. Merge Sort
3. Insertion Sort
4. Selection Sort
5. Exit

Enter your Choice: 1

Array After Quick Sort: 9 12 23 45 78
```

## 🛠️ Technologies & Concepts Used

- 💻 **Programming Language:** C++
- 📦 **STL:** Vector
- 🔁 **Programming Concepts:** Recursion and Iteration
- 🧠 **Algorithmic Techniques:** Divide and Conquer and Comparison-Based Sorting

## 📂 Repository Structure

```text
Sorting-Algoritms-CPP/
│
├── Sorting_Algorithms.cpp
└── README.md
```

## ⚙️ How to Run

**1. Clone the Repository**

```bash
git clone https://github.com/YOUR_USERNAME/Sorting-Algoritms-CPP.git
```

**2. Navigate to the Repository**

```bash
cd Sorting-Algoritms-CPP
```

**3. Compile the C++ Program**

```bash
g++ Sorting_Algorithms.cpp -o sorting
```

**4. Execute the Program**

Windows:
```bash
sorting.exe
```

Linux / macOS:
```bash
./sorting
```

## 🎯 Learning Outcomes

Through this project, I explored:

- Understanding and implementing fundamental sorting algorithms.
- Applying recursive problem-solving techniques.
- Learning the Divide and Conquer approach.
- Working with C++ STL vectors.
- Comparing algorithm performance through time and space complexity.
- Developing interactive, menu-driven console applications.

## 🔮 Future Enhancements

- 📈 Add execution-time comparison between sorting algorithms.
- 🎨 Implement step-by-step sorting visualization.
- ➕ Include additional algorithms such as Bubble Sort, Heap Sort, and Shell Sort.
- 📊 Analyze algorithm performance using different input sizes.

---

## 👨‍💻 Author

**A Sreeram**

🎓 Artificial Intelligence & Data Science Student

💡 Interested in C++, Data Structures & Algorithms, and Machine Learning.

---

<p align="center">
  ⭐ If you find this project useful, consider giving the repository a star!
  <br><br>
  <b>Keep Learning. Keep Building. Keep Coding! 🚀</b>
</p>
