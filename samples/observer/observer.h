/*
 * Observer.h
 *
 *  Created on: 2013-9-3 based on boost library
 *  Updated on: 2022-2-10 change to c++ 11 shared_ptr
 *      Author: walter.fan@gmail.com
 */

#ifndef WF_OBSERVER_H_
#define WF_OBSERVER_H_

#include <vector>
#include <memory>

namespace wfan {

class ISubject;


class IObserver {
public:
    virtual ~IObserver() {};
    virtual void Update() = 0;
protected:
    IObserver();
};

using ObserverPtr = std::shared_ptr<IObserver>;
/*
*/
class ISubject {
public:
    virtual ~ISubject() {};

    virtual void Attach(ObserverPtr& observer) = 0;
    virtual void Detach(ObserverPtr& observer) = 0;
    virtual void Notify() = 0;
protected:
    ISubject();
};

class CSubject: public ISubject
{
public:
    virtual void Attach(ObserverPtr& observer);
    virtual void Detach(ObserverPtr& observer) ;
    virtual void Notify();
private:
    std::vector<ObserverPtr> m_observers;
};

} /* namespace wfan */
#endif /* WF_OBSERVER_H_ */
