import pandas as pd
import matplotlib.pyplot as plt

# List of CSV files to plot
files = [
    ("O1.csv", "O(1)"),
    ("Ologn.csv", "O(log n)"),
    ("Osqrt_n.csv", "O(sqrt n)"),
    ("On.csv", "O(n)"),
    ("Onlogn.csv", "O(n log n)")
]

plt.figure(figsize=(10,6))

for file, label in files:
    data = pd.read_csv(file)
    plt.plot(data["n"], data["time_microseconds"], label=label)

plt.xlabel("n")
plt.ylabel("Time (microseconds)")
plt.title("Time Complexity Comparison")
plt.legend()
plt.grid(True)

plt.show()