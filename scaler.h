#include <vector>
class scaler
{
    public:
    scaler() = delete;
    scaler(int min, int max,int iterations){
        int minsize = s(max-min)/iterations;
        for(int i= 0;i<iterations;i++)
            container_.push_back(min+minsize);
        for(int i= 0;i<(max-min)%iterations;i++)
            container_[i]++;
    }
    typedef std::vector<int>::const_iterator const_iterator;
    const_iterator begin() const{
        return(container_.begin());
    }
    const_iterator end() const{
        return(container_.end());
    }
    private:
    std::vector<int> container_;
};
