/*Pyush Sinha
CS 301
Prof. David Yang
3-22-2021*/
#pragma once
#include <cctype>
#include <string>
#include <fstream>
typedef char ItemType;
struct TreeNode;
#include "QueType.h"
enum OrderType {PRE_ORDER, IN_ORDER, POST_ORDER};

class EmptyTree
{};  
class TreeType
{
public:
  TreeType();                     // constructor
 ~TreeType();                    // destructor
  TreeType(const TreeType& originalTree); 
  void operator=(const TreeType& originalTree);
  // copy constructor
  void MakeEmpty();
  bool IsEmpty() const;
  bool HasNonAlpha() const;
  bool IsFull() const;
  bool isFlush() const;
  ItemType MinItem() const;
  int GetLength() const; 
  int CountInRange(ItemType lo, ItemType hi);
  ItemType GetItem(ItemType item, bool& found);
  void PutItem(ItemType item);
  void DeleteItem(ItemType item);
  void ResetTree(OrderType order); 
  ItemType GetNextItem(OrderType order, bool& finished);
  void Print(std::ofstream& outFile) const;
private:
  TreeNode* root;
  QueType preQue;
  QueType inQue;
  QueType postQue;
};
