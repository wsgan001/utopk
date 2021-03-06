/* Author: Bolong Zhang
 * email: blzhang.m@gmail.com
 */

#ifndef _TUPLE_H_
#define _TUPLE_H_


#include<string>
#include<vector>
#include<map>
#include<unordered_map>
#include <iostream>

/*
 * Tuple class definition to store the independent tuple 
 * 
 */
class Tuple{
    public:

        typedef std::string TupleID;
        typedef double Score;
        typedef double Confidence;
        typedef int Tag; 
        typedef std::vector<std::string> DBtype;

    private:
       
        TupleID _id;
        Tag _tag;
        Score _score;
        Confidence _confidence;
    
    public:
        /*constructor */
        Tuple(); // default zero constructor 
        Tuple(const Tuple &tuple); // copy constructor
        Tuple(Tuple &&tuple); //move constructor
        const Tuple &operator=(const Tuple &tuple); //copy assignment operator
        Tuple &operator=(Tuple &&tuple); // move assignment operator 

        ~Tuple();
        
        /*get elements */
        TupleID id() const ;
        Score score() const ;
        Tag tag() const ;
        Confidence confidence() const;

        /*modify elements */
        void modify_id(const TupleID &newid);
        void modify_score(const Score &newscore);
        void modify_tag(const Tag &newtag);
        void modify_confidence(const Confidence &newconf);

        void parse_string(const DBtype & s); // parse the dbtype string to tuple
        DBtype tuple_to_dbtype(); // convert the tuple to dbtype 

        
};
#endif
