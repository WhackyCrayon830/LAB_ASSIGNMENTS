import pandas as pd
import matplotlib.pyplot as plt
import os

BASE_DIR = os.path.dirname(os.path.abspath(__file__))

# ---------- GRAPH 1 ----------
files1 = {
    "O(1)": "O1.csv",
    "O(log n)": "Ologn.csv",
    "O(√n)": "Osqrt.csv",
    "O(n)": "On.csv",
    "O(n log n)": "Onlogn.csv"
}

plt.figure()

for label, file in files1.items():
    df = pd.read_csv(os.path.join(BASE_DIR, file))
    plt.plot(df["n"], df["time_microseconds"], label=label)

plt.title("Graph 1: Basic Time Complexities")
plt.xlabel("n")
plt.ylabel("Execution Time (µs)")
plt.legend()
plt.grid(True)
plt.savefig("graph1.png")


# ---------- GRAPH 2 ----------
files2 = {
    "O(n^2)": "On2.csv",
    "O(n^3)": "On3.csv"
}

plt.figure()

for label, file in files2.items():
    df = pd.read_csv(os.path.join(BASE_DIR, file))
    plt.plot(df["n"], df["time_microseconds"], label=label)

plt.title("Graph 2: Polynomial Complexities")
plt.xlabel("n")
plt.ylabel("Execution Time (µs)")
plt.legend()
plt.grid(True)
plt.savefig("graph2.png")


# ---------- GRAPH 3 ----------
files3 = {
    "O(2^n)": "O2n.csv",
    "O(n!)": "On_factorial.csv"
}

print("\nGraph 3 Table:\n")

for label, file in files3.items():
    df = pd.read_csv(os.path.join(BASE_DIR, file))
    print(label)
    print(df)
    print()

plt.figure()

for label, file in files3.items():
    df = pd.read_csv(os.path.join(BASE_DIR, file))
    plt.plot(df["n"], df["time_microseconds"], label=label)

plt.title("Graph 3: Exponential vs Factorial")
plt.xlabel("n")
plt.ylabel("Execution Time (µs)")
plt.legend()
plt.grid(True)
plt.savefig("graph3.png")

plt.show()