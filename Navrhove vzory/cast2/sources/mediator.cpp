template <typename T>
class Mediator
{
    typedef void (*Action)(T);
private:
    std::multimap<std::string, std::list<Action> > actions;

public:
    Mediator(void)
    {
    }
    ~Mediator(void)
    {
    }
    
    void Register(std::string message, Action action)
    {
        std::multimap<std::string, std::list<Action> >::iterator iter_ = actions.find(message);

        if (iter_ != actions.end())
        {
            iter_->second.push_back(action);
        }
        else
        {
            std::list<Action> list;
            list.push_back(action);
            actions.insert(std::pair<std::string, std::list<Action> >(message, list));
        }
    }

    void UnRegister(std::string message, Action action)
    {
        std::multimap<std::string, std::list<Action> >::iterator iter_ = actions.find(message);

        if (iter_ != actions.end())
        {
            iter_->second.remove(action);
        }
    }

    void Send(std::string message, T param)
    {
        std::multimap<std::string, std::list<Action> >::iterator iter_ = actions.find(message);

        if (iter_ != actions.end())
        {
            std::list<Action>::iterator listIter_ = iter_->second.begin();

            while (listIter_ != iter_->second.end())
            {
                (*listIter_)(param);
                listIter_++;
            }
        }
    }
};







#pragma once
#include <string>
#include "Mediator.h"
class FirstClient
{
private:
    Mediator<std::string> mediator;

public:
    FirstClient(void);
    FirstClient(Mediator<std::string> mediator);
    ~FirstClient(void);

    static void Notify(std::string message);    
    void SendMessages();
};







#include "FirstClient.h"
#include <iostream>
FirstClient::FirstClient(void)
{
}

FirstClient::FirstClient(Mediator<std::string> mediator)
{
    this->mediator = mediator;
}

FirstClient::~FirstClient(void)
{
}

void FirstClient::Notify(std::string message)
{
    std::cout << "[FirstClient]"
                << '\t'
                << message
                << std::endl;
}

void FirstClient::SendMessages()
{
    mediator.Send("1", "message 1 from FirstClient");
    mediator.Send("2", "message 2 from FirstClient");
}



// Main.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "Mediator.h"
#include "FirstClient.h"
#include "SecondClient.h"
#include "ThirdClient.h"
#include "FourthClient.h"

#include <string>
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
    Mediator<std::string> med;

    med.Register("1", FirstClient::Notify);
    med.Register("1", SecondClient::Notify);
    med.Register("1", ThirdClient::Notify);
    med.Register("1", FourthClient::Notify);
    med.Register("2", ThirdClient::Notify);
    med.Register("2", FourthClient::Notify);
    med.Register("3", SecondClient::Notify);

    FirstClient fc(med);
    SecondClient sc(med);
    ThirdClient tc(med);
    FourthClient foc(med);

    fc.SendMessages();
    sc.SendMessages();
    tc.SendMessages();
    foc.SendMessages();

    return 0;
}

