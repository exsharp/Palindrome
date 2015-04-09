#include <iostream>
#include <string>
using namespace std;

#include "queue.h"
#include "stack.h"

int main()
{
	while (1){
		string str;
		cout << "����һ���ַ���" << endl;
		cin >> str;

		Stack stack;
		Queue queue;
		InitStack(stack);
		InitQueue(queue);

		for (unsigned int i = 0; i < str.length(); i++){
			Push(stack, (int)str[i]);
			EnQueue(queue, (int)str[i]);
		}

		bool flag = true;
		while (!StackEmpty(stack) && !QueueEmpty(queue))
		{
			ElemType stackPop;
			ElemType queuePop;
			Pop(stack, stackPop);
			DeQueue(queue, queuePop);
			if (stackPop != queuePop){
				flag = false;
				break;
			}
		}

		cout << (flag ? "�ǻ��Ĵ�" : "���ǻ��Ĵ�") << endl << endl;

		DestroyStack(stack);
		DestroyQueue(queue);
	}
}