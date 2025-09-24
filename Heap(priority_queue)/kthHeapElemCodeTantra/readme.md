## K-th Largest Element with Removal

### Problem Description

Given an array of N integers and Q queries, for each query find the K-th largest element and then remove it from the array for subsequent queries.

##### Input:

Array size N, array elements, number of queries Q, then Q integers K (1-indexed)

##### Output:

For each query, print K-th largest element. If K > current array size, print -1.

**Constraints**:

    - 1 ≤ N ≤ 10⁵, 1 ≤ Q ≤ 10³

    - Array values between -10⁹ to 10⁹

### Approach & Algorithm

**Core Idea**

    - Use a max heap to efficiently find and remove K-th largest elements while maintaining the heap property.

    - Algorithm Steps

        - Build Max Heap from the input array

        - For each query K:

        - If K > current heap size → output -1

        - Temporarily remove (K-1) larger elements

        - Extract K-th largest from heap top

        - Permanently remove the K-th largest element

        - Restore temporarily removed elements back to heap

##### Time Complexity

    - Heap construction: O(N)

    - Each query: O(K log N)

    - Total: O(N + Q × K log N)

##### Space Complexity

    - O(N) for heap storage

    - O(K) temporary storage per query

## Key Insight

Using heap properties allows efficient K-th largest extraction without full re-sorting after each removal.

