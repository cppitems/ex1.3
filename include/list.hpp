#pragma once

#include <cstddef>

class List {
public:
  using value_type = double;
  using size_type = std::size_t;

  // nested class
  struct Node {
    value_type value;
    Node *next = nullptr;
    Node(const value_type &);
  };

private:
  Node *_head = nullptr; // root element
  size_type _size = 0;   // current number of nodes in list

public:
  // default ctor
  List();
  // custom ctor
  List(size_type, const value_type &);

  // declaration of SMFs
  List(const List &);
  List(List &&);
  List &operator=(const List &);
  List &operator=(List &&);

  // dtor
  ~List();
  // access current number of nodes in list
  size_type size() const;
  // obtain root element pointer
  const Node *data() const;
  // access front element
  value_type &front();
  // push new list element at the front
  void push_front(const value_type &);
  // pop element at the front
  void pop_front();
};