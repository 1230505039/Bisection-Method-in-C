# Bisection Method in C

## 📌 Introduction
The **Bisection Method** is a numerical technique for finding the root of a function within a given interval. This repository contains a **C implementation** of the Bisection Method, allowing users to input a polynomial equation, specify an interval, and compute the root with a desired error tolerance.

## 🚀 Features
✅ Accepts **user-defined polynomial equations** 📊  
✅ Allows **custom error tolerance** for accuracy ⚡  
✅ Implements **the Bisection Algorithm** for reliable root finding 🔍  
✅ Simple and easy-to-understand **C code** 🖥️  

## 📂 File Structure
```
📁 Bisection-Method-C
 ├── 📜 bisection.c  # Main program file
 ├── 📜 README.md   # Documentation (this file)
 ├── 📜 LICENSE     # Project license
```

## 🛠️ How It Works
1. **User inputs** the polynomial equation and its degree.
2. **User specifies** an interval `[a, b]` where the function changes sign.
3. **The program applies** the Bisection Method iteratively:
   - Computes the midpoint `c = (a + b) / 2`
   - Checks the sign of `f(c)` to decide which half of the interval contains the root
   - Continues until the error is within the given tolerance
4. **Outputs the approximate root** of the equation.

## 📥 Installation & Usage
### 1️⃣ Clone the Repository
```bash
git clone https://github.com/yourusername/Bisection-Method-C.git
cd Bisection-Method-C
```
### 2️⃣ Compile the Code
```bash
gcc bisection.c -o bisection -lm
```
### 3️⃣ Run the Program
```bash
./bisection
```
### 4️⃣ Sample Input
```
Enter target error ratio: 0.001
Enter top limit: 2
Enter bottom limit: 0
Enter number of terms: 3
Enter term 1: 2
Enter term 2: -4
Enter term 3: -1
```
### 5️⃣ Sample Output
```
0.736816 is root of equation.
```

## 🎯 Advantages
✔ **Guaranteed Convergence** if a root exists in the interval.  
✔ **No Need for Derivatives**, unlike Newton-Raphson.  
✔ **Adjustable Accuracy** based on error tolerance.  

## ⚠️ Limitations
❌ **Slow Convergence** for high precision requirements.  
❌ **Requires Opposite Signs** at interval endpoints.  

## 📝 License
This project is licensed under the **MIT License** – see the [LICENSE](LICENSE) file for details.

## ⭐ Contribute & Support
- Feel free to **fork** this repository, improve the code, and **submit a pull request**!
- If you like this project, **give it a ⭐ on GitHub**!
- Reach out with suggestions or improvements.

---
📢 **Happy Coding!** 🎯
