/*
 * Copyright: (C) 2012-2015 POETICON++, European Commission FP7 project ICT-288382
 * Copyright: (C) 2015 VisLab, Institute for Systems and Robotics,
 *                Instituto Superior Técnico, Universidade de Lisboa, Lisbon, Portugal
 * Author: Alexandre Antunes <aleksander88@gmail.com>
 * CopyPolicy: Released under the terms of the GNU GPL v2.0
 *
 */

#ifndef __GOALCOMPILER_MODULE_H__
#define __GOALCOMPILER_MODULE_H__

#include <yarp/os/Network.h>
#include <yarp/os/RFModule.h>
#include <yarp/os/Bottle.h>
#include <yarp/os/BufferedPort.h>
#include <yarp/os/Mutex.h>
#include <yarp/os/RateThread.h>
#include <yarp/os/RpcClient.h>
#include <yarp/os/Time.h>
#include <yarp/os/Vocab.h>
#include <yarp/os/Log.h>
#include <fstream>
#include <sstream>
#include <string.h>
#include <vector>
#include <algorithm>

#include "goalCompiler_IDLserver.h"

#include "Helpers.h"

using namespace std;
using namespace yarp::os;

class goalCompiler : public RFModule, public goalCompiler_IDLserver
{
    private:
        // module parameters
        
        bool closing;

        string moduleName;
        string PathName;
        string handlerPortName;

        vector<vector<string> > instructions;
        vector<vector<string> > translat;
        vector<vector<string> > subgoals;
		vector<vector<string> > action_sequence;
        vector<string> actions;
        vector<string> object_list;

        string subgoalFileName;
        string preRuleFileName;
        string goalFileName;

        //BufferedPort<Bottle> plannerPort;
        BufferedPort<Bottle> praxiconPort;

        RpcServer handlerPort;

		RpcClient objectQueryPort;

		Bottle cmd;
		Bottle reply;

        //Bottle *plannerBottle;
        Bottle *praxiconBottle;

//        ifstream objectFile;
        ifstream preRuleFile;
        ofstream goalFile;
        ofstream subgoalFile;

// RPC module functions:

    public:
        virtual bool configure(ResourceFinder &rf);
        virtual bool close();
        virtual bool updateModule();
        virtual bool interrupt();
        virtual bool quit();
        
        //IDL functions
        bool attach(yarp::os::RpcServer &source);
        string waitPraxicon();
        string compileGoals();

        // module functions
        void openFiles();
        void openPorts();
        bool loadObjs();
        
/*
    public:
        virtual bool configure(ResourceFinder &rf);
        virtual bool close();
        virtual bool updateModule();
        virtual bool interrupt();

        
        void openFiles();
        void openPorts();
        bool loadObjs();
        string plannerCommand();
        bool plannerReply(string reply);
        bool loadRules();
        bool receiveInstructions();
        bool loadInstructions();
        bool processFirstInst();
        bool compile();
        bool translate();
        bool writeFiles();
		bool checkConsistency();
        bool clearUnimportantGoals();*/
};

#endif
