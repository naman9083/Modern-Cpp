#include <iostream>

/*
    Threads
        std::thread : They can be used for parallel/concurrent tasks. They need to be joined or detached.
        They do not catch the return values.

        std::condition_variable : In situations where one thread has to wait for an event to happen because of some thread before completing. Due to other operations, such threads may do some work before the event, hence are launched simultaneously.

        container of std::thread : To manage multiple instances std::thread eficiently. (map to functions, join, etc);

        std::mutex v/s std::lock_gaurd v/s std::unique_lock
            - std::mutex can be locked and unlocked manually ONLY!
            - std::lock_gaurd : (Mutex who completed masters!) scope based / RAII principle following mutex. No manual LOCK/UNLOCK
            - std::unique_lock : Scope based as well as manual lock/unlock.

        

*/
