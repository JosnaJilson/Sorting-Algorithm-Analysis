\# Sorting Algorithm Analysis



\## Problem Statement



A social media application needs to sort the following fixed-length IDs:



324, 125, 456, 218, 102, 389, 275, 147



The sorting algorithms implemented are:



1\. Merge Sort

2\. Quick Sort



The algorithms are executed using the given input data and their

performance is analysed based on passes, partitions, comparisons,

time complexity and additional space.



\---



\## Input Data



324 125 456 218 102 389 275 147



\---



\## Algorithms Implemented



\### Merge Sort



An iterative Merge Sort is implemented. The array is divided into

smaller sorted parts and the parts are merged until the complete

array is sorted.



For the given input:



\- Number of passes: 3

\- Number of comparisons recorded: 17

\- Time complexity: O(n log n)

\- Additional space: O(n)



\### Quick Sort



Quick Sort is implemented using the first element as the pivot.



For the given input:



\- Number of partitions: 6

\- Number of comparisons recorded by the program: 27

\- Best/Average time complexity: O(n log n)

\- Worst-case time complexity: O(n²)



\---



\## Final Sorted Sequence



102 125 147 218 275 324 389 456



\---



\## Performance Comparison



| Criteria | Merge Sort | Quick Sort |

|----------|------------|------------|

| Passes / Partitions | 3 passes | 6 partitions |

| Comparisons | 17 | 27 |

| Best Case | O(n log n) | O(n log n) |

| Average Case | O(n log n) | O(n log n) |

| Worst Case | O(n log n) | O(n²) |

| Additional Space | O(n) | O(log n) average, O(n) worst |



\---



\## Conclusion



For the given input, both algorithms produce the same sorted

sequence.



Merge Sort provides predictable O(n log n) worst-case time

complexity, while Quick Sort can have O(n²) worst-case time

complexity depending on pivot selection.



For large datasets where predictable worst-case performance is

important, Merge Sort can be justified as a suitable approach.

Quick Sort can be useful when lower auxiliary array memory is

preferred and pivot selection is handled effectively.



\---



\## Repository Contents



\- `sorting.c` - C source code

\- `input.txt` - Input data

\- `output.txt` - Program output

\- `trace\_table.txt` - Merge Sort passes and Quick Sort partitions

\- `complexity\_analysis.txt` - Complexity analysis

\- `comparison\_table.txt` - Algorithm comparison

\- `README.md` - Project description and summary

