//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 
#include <inet/common/IProtocolRegistrationListener.h>
#include "pcpChecker.h"

Define_Module(PcpChecker);

void PcpChecker::initialize()
{
    // TODO - Generated method body
    registerProtocol(inet::Protocol::ethernetMac, nullptr, gate("in"));
}

void PcpChecker::handleMessage(cMessage *msg)
{
    // TODO - Generated method body
    EV<<"Inside handle message of pcp checker"<<endl;
}
