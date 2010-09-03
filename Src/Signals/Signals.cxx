#include <Signals/Signals.hxx>

#include <boost/typeof/typeof.hpp>

SignalBase :: SignalBase (): m_blockSignals(false) { }
SignalBase :: ~SignalBase () { }
