#ifndef _STACK_H_
#define _STACK_H_

#define ElemType int
typedef void(*traverse)(ElemType&);

//#define ARRAY_STACK
#define LINK_STACK

#ifdef ARRAY_STACK
	#define MAXSIZE 100
	struct Stack
	{
		ElemType *data;
		int top;
	};
#endif 

#ifdef LINK_STACK
	typedef struct SNode{
		ElemType data;
		struct SNode *next;
	}*Stack;
#endif

bool InitStack(Stack &s);
bool DestroyStack(Stack &s);
bool ClearStack(Stack &s);
bool StackEmpty(Stack s);
int StackLength(Stack s);
bool GetTop(Stack s, ElemType &e);
bool Push(Stack &s, ElemType e);
bool Pop(Stack &s, ElemType &e);
void StackTraverse(Stack &s, void(*traverse)(ElemType&));


#endif