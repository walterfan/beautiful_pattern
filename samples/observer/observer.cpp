/*
 * Observer.cpp
 *
 *  Created on: 2013-9-3  based on boost library
 *  Updated on: 2022-2-10 change to c++ 11 shared_ptr
 *      Author: walter.fan@gmail.com
 */

#include "Observer.h"
using namespace std;

namespace wfan {

void CSubject::Attach(IObserver* pObserver)
{
	m_observers.push_back(pObserver);
}

void CSubject::Detach(IObserver* pObserver)
{
	vector<IObserver*>::iterator it = m_observers.begin( );
	for (; it != m_observers.end() ; it++ ) {
		m_observers.erase(it);
		break;
	}
}

void CSubject::Notify()
{

}

} /* namespace wfan */
