#include <iostream>

template <typename T>
class List {
public: 
  struct Node {
  Node* next;
  T data;
  };
private:
  Node* m_head;
  int count;
public: 
  List();
  void insert(int index, const T& elem);
  T fetch(int index);
  void remove(int index);
  void print();
  ~List(){};
};
template <typename T>
class Vector {
private:
    T* arr;
    int count;
public: 
    Vector();
    void insert(int index, const T& elem);
    T fetch(int index);
    void remove(int index);
  //  void print();
    ~Vector();
};
    template <typename T, template <typename>typename Container >
class Stack {
private:
    Container<T> m_container;
public:
    void insert(const T& elem) {
      m_container.insert(0, elem);    
    }
    void remove() {
      std::cout<<"removed:"<<m_container.fetch(0)<<std::endl;
      m_container.remove(0);
    }
    void print(){
    m_container.print();
    }
    };
template<typename T>
Vector<T>::Vector() {
  count = 0;
  arr = new T[count];
}
template<typename T>
Vector<T>::~Vector() {
 delete[] arr;
}
template<typename T>
void Vector<T>::insert(int index, const T& elem) {
  int count2;

  T* arr1 = new T[count2];
  for(int i = 0; i < count2; ++i) {
  arr1[i] = arr[i];
  }
  count2 = count*2;
  arr = new int[count2];
  for(int i = 0; i < count2/2; ++i){
    if(i < index){
  arr[i] = arr1[i];
    }
    else if(i == index){
      arr[i] = elem;
    }
    else if(i > index){
      arr[i] = arr1[i-1];
    }
  }
  delete [] arr1;

    count++;

 std::cout<<"inserted:"<<elem<<std::endl;
}
 template<typename T>

void Vector<T>::remove(int index)

  {
   T* arr1 = new T[count];
  for(int i = 0; i < count; ++i){
  arr1[i] = arr[i];
  }
  for(int i = 0; i < count; ++i){
  if(i < index)
  arr[i] = arr1[i];
  else if(i > index) 
  arr[i-1] = arr1[i];
  }
  delete[] arr1;
  count--;
  }
  template<typename T>
T Vector<T>::fetch(int index) {
  return arr[index];
}
template<typename T>
List<T>::List():count(0),m_head(NULL) {}
template<typename T>
void List<T>::insert(int index,const T& elem) {
  List<T>::Node* node = new Node();
  node->data = elem;
  node->next = m_head;
  m_head = node;
  count++;
  std::cout<<"inserted "<<node->data<<std::endl;
}
template<typename T>

T List<T>::fetch(int index) {
  if(count != 0)
  return m_head->data;
  exit(EXIT_FAILURE);
}
 template<typename T>
void List<T>::remove(int index)
  {
  Node* node = new Node();
  node=m_head;
  m_head=m_head->next;
  node->next=NULL;
  //std::cout<<"Popped "<<node->data<<std::endl;
  delete node;
  count--;
  }
 template<typename T>
  void List<T>::print(){
  Node* node = new Node();
  node=m_head;
  while(node!=NULL)
  {
  std::cout<<node->data<<std::endl;
  node=node->next;
  }
  delete node;
  }

int main()
{
 Stack<int, List> st;
  st.insert(12);
  st.insert(25);
  st.insert(3);
  st.insert(15);
  st.insert(14);
  st.insert(21);
  st.remove();
  st.remove();
  st.remove();
 return 0;

  }
