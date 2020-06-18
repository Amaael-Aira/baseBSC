//
// Created by Amaael  on 6/17/20.
//

#ifndef BASEBSC_BASELIST_H
#define BASEBSC_BASELIST_H


class baseList {
public:
    baseList();
    virtual ~baseList();

    /*
     * Functions
     */
    void newList(const int **combos);       // build list of groups
    void step();                            // process one bit
    void transmission();                    // process a communication phase y bit
    void confirmation();                    // process a confirmation phase y bit
    void merge();                           // merge sets S0, S1 back into sorted list Head
    void update();                          // update states of list based on received bit y
    void remove();                          // remove low probability items from list
    void rejoin();                          // recover items into main list when Ptail is large
    void partition();                       // build S0, S1
    void printList();                       // display state of main list
    void printSets();                       // display state of partitions S0, S1
    void printTail();                       // display state of Tail list




    /*
     * Pe: decoding threshold
     * p: crossover probability
     */
    const double Pe;

    baseList(const double pe, const double p, const unsigned int k, const double pout, const double pin,
             const unsigned int minLenth);

    const double p;
    const unsigned int K;

    /*
     * Pout: probability threshold to remove back of list
     * Pin:  probability threshold to recover items from list
     * minLength: threshold for minimum length of main list
     */
    const double Pout;
    const double Pin;
    const unsigned int minLenth;

    int cUpdates;                       // confirmation rounds, track the number of confirmation steps

    /*
     *
     */
    double P0;                          // P0: posterior probability of set S0
    double P1;                          // P1: posterior probability of set S1
    double Ptail;                       // Tail's accumulated posterior
    double Wtail;                       // Tail's accumulated weight update

    struct group{
        group();
        // Next: pointer to item in front
        group *Next;
        unsigned long long count;       // count of messages in group
        unsigned long long Start;       // index of first message in group
        double rho;                     // shared message posterior in group
        double grho;                    // group accumulated posterior, count*rho
        bool isTheta;                   // track if true message, for use only by transmitter
    };


    void split(group *temp, unsigned const long long backN);
    void printProperties(group *temp);

    group *Head;                        // pointer to start of list
    group *S0;                          // pointer to partition set S0
    group *S1;                          // pointer to partition set S1
    group *Tail;                        // pointer to first separated segment
    group *Tail2;                       // pointer to second sseparated segment

};


#endif //BASEBSC_BASELIST_H
