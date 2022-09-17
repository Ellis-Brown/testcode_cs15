// CharArrayList AL 
void main() {
    AL one;

    ///
    /// CharArrayList &CharArrayList(
    ///         const &CharArrayList other)
    ///
    AL two = one; // two is a copy of one
    
    fun_function(one);

    AL three;
    three.pushAtBack('a');

    one = three; // assignment operator
    three  = one;
    AL four = one; // copy constructor
}
// operator= 
//

void fun_function(AL example) { // copy constructor

    // example is a copy of whatever AL called it

}

// Copy Constructor 
// Assignment Operator (overload)

// if the data type is one the line, its a copy consturctor
// this is true in function decl, and in creating new instances of a class
//
// if the = sign is there, but BOTH instances already were declared,
// its overload =
//
