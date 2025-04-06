#include "stack.h"
#include<iostream>


int main()
{
    Stack st;
    st.push(1);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);


    st.display();
    std::cout<<st.pop()<<std::endl;
    st.display();
    std::cout<<st.peek()<<std::endl;
    st.display();
    std::cout<<st.IsEmpty()<<std::endl;
    std::cout<<st.IsFull()<<std::endl;


    return 0;
}