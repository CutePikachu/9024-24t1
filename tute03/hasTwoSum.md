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

### Time complexity


### C code
```c
bool hasTwoSum(int a[], int n, int v) {
    return false;
}
```


