#include "LinkedList.h"


//1. 템플릿 클래스로 확장해야함
//2. Stack형식으로 Delete 함수 재정의해야함
//주의: first, current_size는 class의 멤버 변수이기 때문에 this 포인터를 사용하여 가져와야함

template <class autotype>
//LinkedList class를 상속받음
class Stack : public LinkedList<autotype>{
	public:
		bool Delete (autotype &element){
			//first가 0이면 false반환
			if((this->first) == 0)
				return false;
			// LinkedList와 달리 Stack은 current가 가리키는 곳을 삭제
			Node<autotype> *current = this->first; 	//current가 first를 가리킴
			this->first = this->first->link; 	//처음을 제거한 노드의 다음 노드로 변경
			delete current;		//current제거
			(this->current_size)--; 	//first노드 한 개 제거
			return true; 	//end delete
			}
};
