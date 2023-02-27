#ifndef STACK_H
#define STACK_H
class Stack
{
    struct Link {
        double data;
        Link* next;
        void initialize(double dat, Link* nxt) {
			data = dat;
			next = nxt;
		}
    }*head;
    public:
        Stack(){
            head = 0;
        }
        Stack(int nums){
            head = 0;
            double first_n = 1.0;
            for(int i = 0; i < nums; i++){
                push(first_n);
                first_n = first_n + 0.1;
            }
        }
        void push(double data){
            Link* newLink = new Link;
            newLink->initialize(data, head);
            head = newLink;
        }
        double peek() {
            if (head == 0) {
                std::cout << "Stack is empty";
            }
            return head->data;
        }
        double pop() {
            if(head == 0){
                return 0;
            }
            double result = head->data;
            Link* oldHead = head;
            head = head->next;
            delete oldHead;
            return result;	
        }
        ~Stack(){
            while(head != 0){
                std::cout << pop() << " ";
            }
        }	
};
#endif