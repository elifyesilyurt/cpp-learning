# 🔵 cpp-learning

> A structured collection of C++ practice programs — from fundamentals to logic-building exercises.

![Language](https://img.shields.io/badge/language-C%2B%2B-blue)
![Status](https://img.shields.io/badge/status-in%20progress-yellow)
![License](https://img.shields.io/badge/license-MIT-green)

---

## 📖 Table of Contents

- [About](#-about)
- [Project Structure](#-project-structure)
- [Topics Covered](#-topics-covered)
- [Getting Started](#-getting-started)
- [Usage Examples](#-usage-examples)
- [Roadmap](#️-roadmap)
- [Contributing](#-contributing)
- [License](#-license)
- [Author](#-author)

---

## 📌 About

This repository documents my C++ learning journey. Each file is a focused, single-concept exercise — written for clarity and readability over performance. Topics range from the basics (variables, I/O) to logic-building exercises (prime numbers, calculators).

> **Purpose:** Personal learning & practice. Not production code.

---

## 📁 Project Structure

```
cpp-learning/
├── basics/
│   ├── hello_world.cpp
│   ├── variable_types.cpp
│   ├── basic_input_output.cpp
│   └── locale_settings.cpp
├── data-types/
│   └── static_cast.cpp
├── operators/
│   ├── arithmetic_operations.cpp
│   ├── assignment_operators.cpp
│   ├── basic_summation.cpp
│   └── bitwise_shift_operations.cpp
├── conditionals/
│   ├── even_odd_checker.cpp
│   ├── vowel_consonant_checker.cpp
│   ├── character_case_control.cpp
│   ├── ternary_operator_example.cpp
│   ├── days_of_week_switch.cpp
│   └── nested_switch_case.cpp
├── loops/
│   ├── for_loop_basics.cpp
│   ├── while_loop_basics.cpp
│   ├── o_while_loop_example.cpp
│   ├── loop_continue_keyword.cpp
│   ├── nested_loops_pattern.cpp
│   └── multiplication_table_generator.cpp
├── math-logic/
│   ├── circle_area_calculator.cpp
│   ├── celsius_fahrenheit_converter.cpp
│   ├── three_number_comparison.cpp
│   └── perfect_square_checker.cpp
├── pointers/
│   └── memory_address_access.cpp
├── strings/
│   ├── char_array_basics.cpp
│   └── string_getline_usage.cpp
├── number-theory/
│   ├── prime_number_check.cpp
│   ├── interactive_prime_check.cpp
│   ├── prime_numbers_to_n.cpp
│   ├── iterative_factorial.cpp
│   ├── digit_extraction_algorithm.cpp
│   └── special_number.cpp
└── mini-projects/
    ├── simple_calculator.cpp
    ├── switch_based_calculator.cpp
    ├── days_in_month_finder.cpp
    ├── student_age_statistics.cpp
    ├── min_max_array_finder.cpp
    └── array_divisibility_filter.cpp
```

---

## 🧠 Topics Covered

- [x] Variables & data types
- [x] Input / output (`cin`, `cout`, `getline`)
- [x] Type casting (`static_cast`)
- [x] Arithmetic, assignment & bitwise operators
- [x] Conditional statements (`if/else`, `switch`, ternary)
- [x] Loops (`for`, `while`, `do-while`, `continue`)
- [x] Math & logic (area, temperature conversion, comparisons)
- [x] Pointers & memory addresses
- [x] String / character operations
- [x] Prime numbers, factorial & number theory
- [x] Console-based mini projects
- [ ] Arrays & vectors (STL)
- [ ] Functions (advanced — recursion, overloading)
- [ ] Classes & OOP
- [ ] File I/O
- [ ] STL (Standard Template Library)

---

## 🚀 Getting Started

### Prerequisites

- A C++ compiler: [g++](https://gcc.gnu.org/), [clang++](https://clang.llvm.org/), or [MSVC](https://visualstudio.microsoft.com/)
- Terminal, or an IDE like [VS Code](https://code.visualstudio.com/) with the C/C++ extension

### Installation

```bash
# Clone the repository
git clone https://github.com/elifyesilyurt/cpp-learning.git

# Navigate into it
cd cpp-learning
```

### Compile & Run

```bash
# Compile
g++ path/to/file.cpp -o output_name

# Run
./output_name        # macOS / Linux
output_name.exe      # Windows
```

---

## 💡 Usage Examples

**Hello World:**
```bash
g++ basics/hello_world.cpp -o hello
./hello
```

**Calculator (two approaches compared):**
```bash
g++ mini-projects/simple_calculator.cpp -o calculator
./calculator

g++ mini-projects/switch_based_calculator.cpp -o calculator_switch
./calculator_switch
```

**Prime number check:**
```bash
g++ number-theory/interactive_prime_check.cpp -o prime
./prime
```

---

## 🗺️ Roadmap

- [ ] Add inline comments to each file explaining the concept
- [ ] Cover arrays and vectors in depth
- [ ] Add OOP examples (classes, inheritance, polymorphism)
- [ ] Explore STL (sort, map, set, etc.)
- [ ] Add recursion examples
- [ ] Write unit-style test cases for math functions

---

## 🤝 Contributing

This is a personal learning repo, but feedback and suggestions are always welcome!

1. Fork the repository
2. Create a new branch (`git checkout -b suggestion/topic-name`)
3. Commit your changes (`git commit -m 'Add suggestion for X'`)
4. Open a Pull Request

Or simply [open an issue](https://github.com/elifyesilyurt/cpp-learning/issues) with your thoughts.

---

## 📄 License

This project is licensed under the [MIT License](LICENSE).

---

## 👩‍💻 Author

**Elif Yeşilyurt**
[github.com/elifyesilyurt](https://github.com/elifyesilyurt)

---

*This repo grows as I learn. ⭐ Star it if you find it useful!*
