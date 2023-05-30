# Queue

**Definition**: Like as many collection type, Queue also is a collection that contains value as a node. It's an application of Linked List, but follow First - In - First - Out (FIFO) principle.

They are used to store a collection of elements that need to accessed in the order they were added.

Queues are usefu when we need to process elements in the order they were received.
It means, what is come first, will be processed first.

The operations with Queue, we have:
* EnQueue(TType value): Insertion of elements to the queue
* DeQueue(): Removal of elements from the queue (take the first value of head node and remove that node then)
* IsFull(): Validates if the Queue is full (Implements this when we config the Queue has a size)
* IsNull(): Checks if the Queue is empty
* Peek(): Acquires the data element available at the front node of the queue without deleting it

Other operations:
* EnMultipleToQueue(TValueCollection values)
* DeQueueBySize(number size)


New knowledge:
* For determining the length of an array, we have a trick
code: length = *(&arr + 1) - arr
here: arr is the array

before deep dive to this, we must know * and & operations, they're both the symbol in pointer in c++
* for getting value in specific variable or in a particular memory location
& for getting address which hold the value

First we have &arr, that means we get the the value that arr variable store.
**Notice, an array does not store it's values, it store "the address or memory location of first value in that array!**

So, example, we have an array have 5 elements
int arr[] = {0,1,2,3,4};

so when we call *arr -> what we get is the address of memory which store value 0 (first value in sequence). The value is a 0x hexadecimal ...

Ok, when we call &arr which return the address of memory that store value 0. But now compiler treats arr is an integer array with size is 5, that means when we plus &arr to 1. This below will happen then.

Compiler take the size of integer variable, its 4 bytes, and arr has 5 integer elements, then compiler caculate like: 4 * 5 = 20 bytes.
That means arr take 20 bytes in memory.


=> So when &arr + 1, its just like, Compiler: OK I have the first address of first value is 0x0000 (example), and I know this has 5 elements behind the first.
0x0000 0x0004 0x0008 0x0012 0x0016 => arr

Compiler treats this plus operation like getting a new integer array with size is 5 behind the arr variable. its return that new array.

And then we call *(expression), for getting the address of the new array.

we minus this then, it means, from the address of first value in the new array, compiler take this address and minus the first value of arr array.
Because this is hexadecimal value, we can understand that when the minus operation finish, its return 5.
Means from this address of first value in new array, it takes 5 integer units (4 bytes) to come to the first value of arr array.


