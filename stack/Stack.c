Stack: Linear data structure following the principle of LIFO or FILO.
Queque: Linear data structure with 2 ends, and thereby follwoing the principle of last in last out (LILO) or First In First Out (FIFO)

Key points on Stack:
1. Abstract datatype: meaning, it can store elements of a limited size.
2. Either FILO or LIFO.

Stack using LinkedList:
S1: Create node first and allocate memory to it.
S2: If list empty, push item at the start of the list (assign value to the data part of the list, and NULL to the address part). 
S3: If there are pre-existing nodes, add new element in the beginning of the list (for this purpose), assign the address of th starting element to the address field of the new node and make the new node, the starting node of the list.

