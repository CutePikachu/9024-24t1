### Pseudocode
hasTwoSum(A, v):
|  Input:  array A[1..n] of integers
|          integer v
|  Output: true if A contains two elements that sum to v, false otherwise
|
|  for all i=1..n-1 do
|  |  for all j=i+1..n do
|  |  |  if A[i] + A[j] = v then
|  |  |     return true
|  |  |  end if
|  |  end for
|  end for
|
|  return false

 1 2 3 4 

null   (1, 2) (1, 3) (1, 4)
(2, 1) null   (2, 3) (2, 4)
(3, 1) (3, 2) null   (3, 4)
(4, 1) (4, 2) (4, 3) null

### Time complexity
O(n^2)

### C code
```c
bool hasTwoSum(int a[], int n, int v) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1, j < n; j++) {
            if(a[i] + a[j] == v) return true;
        }
    }
    return false;
}
```


