import random
import time
import csv
import matplotlib.pyplot as plt

EXPERIMENTS = 5

# Smaller sizes so slow algorithms don't freeze
N_VALUES = {
    "Bubble": 1200,
    "Selection": 1200,
    "Insertion": 1200,
    "Shell": 6000,
    "Quick": 20000,
    "Heap": 20000,
    "Merge": 20000,
    "Radix": 20000
}

# ---------- Sorting Algorithms ----------

def bubble_sort(arr):
    swaps = 0
    n = len(arr)

    for i in range(n - 1):
        for j in range(n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                swaps += 1

    return swaps


def selection_sort(arr):
    swaps = 0
    n = len(arr)

    for i in range(n - 1):
        min_i = i

        for j in range(i + 1, n):
            if arr[j] < arr[min_i]:
                min_i = j

        if min_i != i:
            arr[i], arr[min_i] = arr[min_i], arr[i]
            swaps += 1

    return swaps


def insertion_sort(arr):
    swaps = 0

    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1

        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            swaps += 1
            j -= 1

        arr[j + 1] = key

    return swaps


def shell_sort(arr):
    swaps = 0
    n = len(arr)
    gap = n // 2

    while gap > 0:

        for i in range(gap, n):

            temp = arr[i]
            j = i

            while j >= gap and arr[j - gap] > temp:
                arr[j] = arr[j - gap]
                swaps += 1
                j -= gap

            arr[j] = temp

        gap //= 2

    return swaps


def merge_sort(arr):

    swaps = 0

    def merge_sort_rec(a):

        if len(a) <= 1:
            return a

        mid = len(a) // 2
        left = merge_sort_rec(a[:mid])
        right = merge_sort_rec(a[mid:])

        result = []
        i = j = 0

        while i < len(left) and j < len(right):

            if left[i] <= right[j]:
                result.append(left[i])
                i += 1

            else:
                result.append(right[j])
                j += 1

        result.extend(left[i:])
        result.extend(right[j:])

        return result

    arr[:] = merge_sort_rec(arr)

    return swaps


def quick_sort(arr):

    swaps = 0

    def qs(a, low, high):

        nonlocal swaps

        if low < high:

            pivot = a[high]
            i = low - 1

            for j in range(low, high):

                if a[j] < pivot:

                    i += 1
                    a[i], a[j] = a[j], a[i]
                    swaps += 1

            a[i + 1], a[high] = a[high], a[i + 1]
            swaps += 1

            p = i + 1

            qs(a, low, p - 1)
            qs(a, p + 1, high)

    qs(arr, 0, len(arr) - 1)

    return swaps


def heap_sort(arr):

    swaps = 0
    n = len(arr)

    def heapify(n, i):

        nonlocal swaps

        largest = i
        l = 2 * i + 1
        r = 2 * i + 2

        if l < n and arr[l] > arr[largest]:
            largest = l

        if r < n and arr[r] > arr[largest]:
            largest = r

        if largest != i:

            arr[i], arr[largest] = arr[largest], arr[i]
            swaps += 1

            heapify(n, largest)

    for i in range(n // 2 - 1, -1, -1):

        heapify(n, i)

    for i in range(n - 1, 0, -1):

        arr[i], arr[0] = arr[0], arr[i]
        swaps += 1

        heapify(i, 0)

    return swaps


def radix_sort(arr):

    swaps = 0

    max_num = max(arr)
    exp = 1

    while max_num // exp > 0:

        output = [0] * len(arr)
        count = [0] * 10

        for num in arr:
            count[(num // exp) % 10] += 1

        for i in range(1, 10):
            count[i] += count[i - 1]

        for i in range(len(arr) - 1, -1, -1):

            index = (arr[i] // exp) % 10

            output[count[index] - 1] = arr[i]
            count[index] -= 1

        arr[:] = output
        exp *= 10

    return swaps


algorithms = {
    "Bubble": bubble_sort,
    "Selection": selection_sort,
    "Insertion": insertion_sort,
    "Shell": shell_sort,
    "Quick": quick_sort,
    "Heap": heap_sort,
    "Merge": merge_sort,
    "Radix": radix_sort
}

runtime_results: list[list[float]] = []
swap_results: list[list[int]] = []

print("\nStarting sorting experiments...\n")

for exp in range(1, EXPERIMENTS + 1):

    print(f"\n--- Experiment {exp}/{EXPERIMENTS} ---")

    runtime_row: list[float] = [float(exp)]
    swap_row: list[int] = [exp]

    for name, algo in algorithms.items():

        print(f"Running {name} Sort...", end="", flush=True)

        n = N_VALUES[name]

        arr = [random.randint(1, 10000000) for _ in range(n)]

        start = time.perf_counter()
        swaps = algo(arr)
        end = time.perf_counter()

        runtime = end - start

        runtime_row.append(runtime)
        swap_row.append(swaps)

        print(f" done ({runtime:.4f}s)")

    runtime_results.append(runtime_row)
    swap_results.append(swap_row)

print("\nExperiments complete.\n")

header = ["Experiment"] + list(algorithms.keys())

with open("runtime.csv", "w", newline="") as f:

    writer = csv.writer(f)
    writer.writerow(header)
    writer.writerows(runtime_results)

with open("swaps.csv", "w", newline="") as f:

    writer = csv.writer(f)
    writer.writerow(header)
    writer.writerows(swap_results)

print("CSV files generated: runtime.csv and swaps.csv")

# ---------- Runtime Graph ----------

for i, name in enumerate(algorithms.keys()):

    y = [row[i + 1] for row in runtime_results]
    x = range(1, EXPERIMENTS + 1)

    plt.plot(x, y, label=name)

plt.xlabel("Experiment")
plt.ylabel("Runtime (seconds)")
plt.title("Runtime vs Experiment")
plt.legend()
plt.show()

# ---------- Swap Graph ----------

for i, name in enumerate(algorithms.keys()):

    y = [row[i + 1] for row in swap_results]
    x = range(1, EXPERIMENTS + 1)

    plt.plot(x, y, label=name)

plt.xlabel("Experiment")
plt.ylabel("Number of Swaps")
plt.title("Swaps vs Experiment")
plt.legend()
plt.show()