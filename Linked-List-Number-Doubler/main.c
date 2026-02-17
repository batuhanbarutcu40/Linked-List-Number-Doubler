#include <stdio.h>

struct ListNode* doubleLinkedList(struct ListNode* head);

struct ListNode{
	int val;
	struct ListNode* next;
};
struct ListNode* createNode(int val) {
	struct ListNode* node = (struct ListNode*) malloc(sizeof(struct ListNode));
	node->val=val;
	node->next = NULL;
	return node;
}
void printList(struct ListNode* head){
	while(head){
		printf("%d", head->val);
		if(head->next) printf(" -> ");
		head = head->next;
	}
	printf("\n");
}

int main(){
	struct ListNode* head = createNode(9);
	struct ListNode* n2 = createNode(9);
	struct ListNode* n3 = createNode(9);
	head->next = n2;
	n2->next = n3;
	
	printf("Original: ");
	printList(head);
	
	struct ListNode* result = doubleLinkedList(head);
	
	printf("Doubled: ");
	printList(result);
	
	return 0;
}
struct ListNode* doubleLinkedList(struct ListNode* head){
	int a;
	int b;
	int c;
	int sayi;
	int binler;
	int yuzler;
	int onlar;
	int birler;
	
	a=(head->val)*100;
	b=(head->next->val)*10;
	c=(head->next->next->val);
	sayi=(a+b+c)*2;
	binler=sayi/1000;
	yuzler=(sayi%1000)/100;
	onlar=((sayi%1000)%100)/10;
	birler=(((sayi%1000)%100)%10);
	
	struct ListNode* node1 = createNode(binler);
	struct ListNode* node2 = createNode(yuzler);
	struct ListNode* node3 = createNode(onlar);
	struct ListNode* node4 = createNode(birler);
	node1->next=node2;
	node2->next=node3;
	node3->next=node4;
	
	return node1;
	
	
	
	
	
	
	
}

