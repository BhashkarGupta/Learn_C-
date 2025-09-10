// 3. Define a class Actor with name, age as instance variables and setter, getters as instance methods. 
// Define a class TVActor as a derived class of Actor with instance variable to store number of TV projects 
// done or running and define setter, getter. Also define setTVActor() and showTVActor(). Define a class 
// MovieActor as a derived class of Actor with instance variable to store number of movies doe or running 
// and define setter, getter. Also define setMovieActor() and showMovieActor(). Derive a class AllScreenActor 
// from TVActor and MovieActor. Define a method to setActorData() and showActorData().

#include<iostream>
#include<string>
using namespace std;

class Actor{
    private:
    string name;
    int age;

    public:
    void setActor(string name, int age){
        this->name = name;
        this->age = age;
    }
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
};

class TVActor:virtual public Actor{
    private:
    int TVProjectCount;

    public:
    void setTVProjectCount(int count){
        TVProjectCount = count;
    }
    int getTVProjectCount(){
        return TVProjectCount;
    }
    void setTVActor(string name, int age, int TVProjectCount){
        setActor(name, age);
        this->TVProjectCount = TVProjectCount;
    }
    void getTVActor(){
        cout << "Name : " << getName() << endl;
        cout << "Age : " << getAge() << endl;
        cout << "TV Projects done or running: " << TVProjectCount << endl;
    }
};

class MovieActor:virtual public Actor{
    private:
    int MoviesDoneCount;

    public:
    void setMoviesDoneCount(int count){
        this->MoviesDoneCount = count;
    }
    int getMoviesDoneCount(){
        return MoviesDoneCount;
    }
    void setMovieActor(string name, int age, int MoviesDoneCount){
        setActor(name, age);
        this->MoviesDoneCount = MoviesDoneCount;
    }
    void getMovieActor(){
        cout << "Name : " << getName() << endl;
        cout << "Age : " << getAge() << endl;
        cout << "Movies done " << MoviesDoneCount << endl;        
    }
};

class AllScreenActor:public TVActor, public MovieActor{
    public:
    void setActorData(string name, int age, int moviesDone, int tvShowsDone){
        Actor::setActor(name, age);
        setMoviesDoneCount(moviesDone);
        setTVProjectCount(tvShowsDone);
    }
    void getActorData(){
        getTVActor();
        getMovieActor();
    }
};

int main() {
    AllScreenActor allScreenActor;
    allScreenActor.setActorData("Bhaskar Gupta", 67, 85, 10);
    allScreenActor.getActorData();
    return 0;
}