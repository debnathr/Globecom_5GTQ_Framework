//
// Copyright (C) 2013 OpenSim Ltd.
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program; if not, see <http://www.gnu.org/licenses/>.
//

#ifndef __INET_LAYEREDSNIR_H
#define __INET_LAYEREDSNIR_H

#include "inet/physicallayer/wireless/common/analogmodel/packetlevel/DimensionalNoise.h"
#include "inet/physicallayer/wireless/common/base/packetlevel/SnirBase.h"
#include "inet/physicallayer/wireless/common/analogmodel/bitlevel/LayeredReception.h"

namespace inet {

namespace physicallayer {

class INET_API LayeredSnir : public SnirBase
{
  protected:
    mutable double minSNIR;
    mutable double maxSNIR;
    mutable double meanSNIR;

  protected:
    virtual double computeMin() const;
    virtual double computeMax() const;
    virtual double computeMean() const;

  public:
    LayeredSnir(const LayeredReception *reception, const DimensionalNoise *noise);

    virtual std::ostream& printToStream(std::ostream& stream, int level, int evFlags = 0) const override;

    virtual double getMin() const override;
    virtual double getMax() const override;
    virtual double getMean() const override;

    virtual const Ptr<const IFunction<double, Domain<simsec, Hz>>> getSnir() const;
};

} // namespace physicallayer

} // namespace inet

#endif // ifndef __INET_LAYEREDSNIR_H

