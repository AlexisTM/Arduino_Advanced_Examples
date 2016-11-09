// Dummy class
class Thing {
  public : 
  
    // Adding the class itself as argument allow the user to know which object sends the callback (for only one callback for multiple instances of the same object)
    // Constructor storing the callback
    Thing(void (*_callback)(Thing*, int)){
      callback = _callback;
    };
    
    void doThings(){
      if(callback) callback(this, 1337);
      // You have to test if the callback exists. Else the program will crash (NULL_POINTER_CALL).
      if(callback2) callback2(this, 1337);
    }
      

    // Callback definition
    void (*callback)(Thing*, int);
    // Callback definition which will not be defined (test case)
    void (*callback2)(Thing*, int);

    int someData = 42;
};
