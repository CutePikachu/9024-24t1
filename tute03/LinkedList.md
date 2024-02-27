## Q4

Palindrom (L)
Input: Singly linked list 
Output: true if L is a palindrom, otherwise false
ptr = L
copy = NULL

while ptr != NULL do
  copy = insertLL(copy, p.value)
  ptr = ptr.next
end while

ptr = L
ptr2 = R

while ptr != NULL do
  if (ptr.value != ptr2.value) return false
  ptr = ptr.next
  ptr2 = ptr2.next
end while
return true

## Q5

17 -> 26 -> 54 -> 77 -> 93

insert 31

17 -> 26 -> 31 -> 54 -> 77 -> 93

insertOrdered(L, v):
  Input L: ordered linked list, v: the value to be inserted
  Output L: with the inserted node

ptr = L, prev = NULL
while (ptr != null and ptr.value< v) {
   prev = ptr
   ptr = ptr.next
}
if (ptr == null) {
  prev.next = newNode(v)
  return L
}
if (prev == null) {
  node = newNode(v)
  node.next = L
  return node
}
node = newNode(v)
prev.next = node
node.next = ptr
return L

## Q6

Null <- 1 -> 2 -> 3 -> null 
          <-   <-

1 -> 3
  <-

0 -> 1 -> 3
  <-   <-

1 -> 2 -> 3
  <-   <-
