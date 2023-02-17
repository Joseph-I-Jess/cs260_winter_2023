template<typename T>
class ArbitraryList {
    public:
        ArbitraryList(int initialSize = 16);
        bool add(int position, T value);
        bool remove(int position);
        T peek(int position);
    private:
        T *internalStorage;
        int endOfList;
};