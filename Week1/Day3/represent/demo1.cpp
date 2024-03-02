#include <iostream>

int main()
{
    return 0;
}

/*
        Representing state of "something"!


 */
enum class ID
{

};
class TrainingSession
{
private:
    // duration: float
    // count: unsigned int
    // trainerName: string
    // sessionTopic: string
    // date: Date;

public:
    TrainingSession() {}
    ~TrainingSession() {}

}; // represent state

class Batch
{
private:
    /*
        _id: ID
        _strength: unsigned int
        _trainer: Trainer--------------------___EMPLOYEE
        _pmt_coordinator: coordinator--------
        _schedule: Schedule
        _talents : Container<Talent>


     */
public:
    Batch(/* args */) {}
    ~Batch() {}
};

/*
        Pointer ka state representaion
            -----> Smart Pointer
        Reference ka state representation
            -----> reference_Wrapper
        Thread(set of instructions)
            -----> std::async
        Semaphore ka state
            -----> lock_guard
            -----> unique_lock
        Union ka state represent
            -----> std::variant



 */