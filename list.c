#include <stdio.h>

//정수형과 node 포인터로 이루어져 있음 
typedef sturct_node {
	int key;
	struct _node* next;
} node;

node* head, * tail;

//리스트 초기화 
void init_list(void) {
	head = (node*)malloc(sizeof(node));
	tail = (node*)malloc(sizeof(node));
	
	head->next = tail;
	tail->next = tail;
}

//다음 노드 삭제 
int delete_next(node* t) {
	node* s;
	
	//tail을 삭제할 순 없다. 
	if(t->next == tail) {
		return 0;	
	}
	
	s = t->next; //t의 다음 노드를 삭제하기 위해 주소를 s에 보관.
	t->next = t->next->next; //삭제할 노드의 다음 노드를 가리키게 한다. 
	free(s); //t의 다음 노드를 삭제.
	
	return 1;
}
 
node* insert_after(int k, node* t) {
	node* s;
	s = (node*)malloc(sizeof(node));
	
	s->key = k;
	s->next = t->next; //이전 노드가 가리키던 다음 노드를 s노드가 가리키게 함
	t->next = s; //이전 노드가 자신을 가리키게 함 
	
	return s;
} 

node* find_node(int k) {
	node* s;
	s = head->next;
	
	//찾는 노드가 아니거나 tail인 경우 반복문 종료 
	while(s->key != k && s != tail) {
		s = s->next;
	}
	
	return s;
} 

int delete_node(int k) {
	node* s;
	node* p;
	p = head;
	s = p->next;
	
	//해당 키가 아니거나 꼬리까지 가지 않았다면 
	while(s->key != k && s != tail) {
		p = p->next; //p와 s를 한칸씩 옮겨간다. 
		s = p->next;
	}
	
	if(s != tail) {
		p->next = s->next; //삭제할 노드의 다음 노드를 이전 노드가 가리키게 한다. 
		free(s); //해당 노드를 삭제한다. 
		
		return 1; //정상적 삭제를 의미 
	}
	
	else
		return 0; //삭제 실패를 의미 
} 

int main() {
	
	return 0;
}
