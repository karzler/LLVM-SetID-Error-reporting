/* This file provides shuffle functionality to the random number generators.
 * Since template functions cannot be inherited, this is the next best thing.
 * It's still a hack, though.
 */

    /**
     * Shuffles an *array* of type T.
     *
     * Uses the Durstenfeld version of the Fisher-Yates method (aka the Knuth
     * method).  See http://en.wikipedia.org/wiki/Fisher%E2%80%93Yates_shuffle
     */
    template<typename T>
    void shuffle(T* array, unsigned length) {
        int i;
        uint32_t j;
        for (i = length - 1; i > 0; i--) {
            j = randnext(length);
            swap(&array[j], &array[i]);
        }
    }

    /**
     * Shuffles a SmallVector of type T, default size N
     */
    template<typename T, unsigned N>
    void shuffle(llvm::SmallVector<T, N>& sv) {
        if (sv.empty()) return;
        for (size_t i = sv.size() - 1; i > 0; i--) {
            uint32_t j = randnext(sv.size());
            T k = sv[j];
            sv[j] = sv[i];
            sv[i] = k;
        }
    }

    /**
     * Shuffles an iplist of type T
     */
    template<typename T>
    void shuffle(llvm::iplist<T>& list){
        if(list.empty()) return;
        llvm::SmallVector<T*, 10> sv;
        for(typename llvm::iplist<T>::iterator i = list.begin(); i != list.end(); ){
            /* iplist<T>::remove() actually increments the iterator, so the for 
             * loop shouldn't increment it either.
             */
            T* t = list.remove(i);
            sv.push_back(t);
        }
        shuffle<T*, 10>(sv);
        for(typename llvm::SmallVector<T*, 10>::size_type i = 0; i < sv.size(); i++){
            list.push_back(sv[i]);
        }
    }

