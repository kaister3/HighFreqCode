// golang stack with linkedlist

import "container/list"

stack := list.New()

stack.PushBack()

stack.Len()

stack.Back()

stack.Back().Value.(int)

stack.Remove(stack.Back())

// with built in stack


// with array
// be careful of memory!
var stk []int

stk = append(stk, n)

stk = stk[0: len(stk) - 1]