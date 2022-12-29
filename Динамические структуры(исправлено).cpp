using namespace std;

void display(const vivod){
}

struct Node{
int data;
Node * next, * prev;
};

class List{
public:
int count;
Node * head, * tail;
List();
void getElem(int p = 0);
void Del(int p = 0);
void Insert(int p = 0);
void Display();
void addTail(int n);
void addHead(int n);
};

List::List(){
head = tail = NULL;
count = 0;
}
void List::addHead(int n){
Node * temp = new Node;
temp->prev = 0;
temp->data = n;
temp->next = head;

if(head != 0){
head->prev = temp;
}
if(count == 0){
head = tail = temp;
}else{
head = temp;
}
count++;
}

void List::addTail(int n){
Node * temp = new Node;
temp->next = 0;
temp->data = n;
temp->prev = tail;

if(tail != 0){
tail->next = temp;
}

if(count == 0){
head = tail = temp;
}
else{
tail = temp;
}
count++;
}

void List::Insert(int p){


if(p<=0){

//cin»p;
}else if(p==1){
int data;

cin » data;
addHead(data);
return;
}else{
int data;

cin » data;
addTail(data);
return;
}

int i = 1;

Node * Ins = head;

while(i < p){
Ins = Ins->next;
i++;
}

Node * PrevIns = Ins->prev;

Node * temp = new Node;


cin » temp->data;

if(PrevIns != 0 && count != 1)
PrevIns->next = temp;

temp->next = Ins;
temp->prev = PrevIns;
Ins->prev = temp;

count++;
}

void List::Del(int p){
if(p == 0){

//cin » p;
}

if(p < 1 || p > count){

return;
}

int i = 1;
Node * Del = head;

while(i < p){
Del = Del->next;
i++;
}

Node * PrevDel = Del->prev;
Node * AfterDel = Del->next;

if(PrevDel != 0 && count != 1){
PrevDel->next = AfterDel;
if(AfterDel != 0 && count != 1){
AfterDel->prev = PrevDel;
}
}

if(p == 1){
head = AfterDel;
}
if(p == count)
tail = PrevDel;

delete Del;

count--;
}

void List::Display(){
if(count != 0){
Node * temp = head;

while(temp->next != 0){

temp = temp->next;
}


}
}

void List::getElem(int p){
if(p == 0){

//cin » p;
}

if(p < 1 || p > count){

return;
}

Node * temp;

if(p <= count / 2){
temp = head;
int i = 1;

while(i < p){
temp = temp->next;
i++;
}
}
else{
temp = tail;
int i = 1;

while(i <= count - p){
temp = temp->prev;
i++;
}
}

}

ostream & operator « (ostream & os, const List& s){
{
Node * temp = s.head;
os « "( ";
while(temp->next != 0){
os « temp->data « ", ";
temp = temp->next;
}

os « temp->data « " )" « endl;
}
return os;
}

void showEvenNumbers(){
Node * temp, * head;
while (temp){
}
temp->next = temp;
}

int main(){
List lst;
int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
vivod a(lst);
display(a);

cout « "List: " « endl;;
cout « lst;
lst.Insert();
cout « lst;
lst.getElem();

}