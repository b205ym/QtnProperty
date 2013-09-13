/*
 * Copyright (c) 2012 - 2013, the Qtinuum project.
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 3,
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * <qtinuum.team@gmail.com>
 */

#ifndef PROPERTYUINT_H
#define PROPERTYUINT_H

#include "../PropertyBasis.h"

namespace Qtinuum
{

class QTN_PE_CORE_EXPORT PropertyUIntBase: public NumericPropertyBase<SinglePropertyBase<quint32> >
{
    Q_OBJECT

public:
    explicit PropertyUIntBase(QObject *parent)
        : NumericPropertyBase<SinglePropertyBase<quint32> >(parent)
    {
    }

    P_PROPERTY_DECL_MEMBER_OPERATORS(PropertyUIntBase)
    P_PROPERTY_DECL_COPY_CONSTRUCTORS(PropertyUIntBase, NumericPropertyBase<SinglePropertyBase<quint32>>)
};

P_PROPERTY_DECL_ALL_OPERATORS(PropertyUIntBase, quint32)

class QTN_PE_CORE_EXPORT PropertyUIntCallback: public SinglePropertyCallback<PropertyUIntBase>
{
    Q_OBJECT

public:
    explicit PropertyUIntCallback(QObject *parent)
        : SinglePropertyCallback<PropertyUIntBase>(parent)
    {
    }

    P_PROPERTY_DECL_MEMBER_OPERATORS2(PropertyUIntCallback, PropertyUIntBase)
    P_PROPERTY_DECL_MEMBER_CLONING(PropertyUIntCallback, SinglePropertyCallback<PropertyUIntBase>)
};

class QTN_PE_CORE_EXPORT PropertyUInt: public SinglePropertyValue<PropertyUIntBase>
{
    Q_OBJECT

public:
    explicit PropertyUInt(QObject *parent)
        : SinglePropertyValue<PropertyUIntBase>(parent)
    {
    }

    P_PROPERTY_DECL_MEMBER_OPERATORS2(PropertyUInt, PropertyUIntBase)
    P_PROPERTY_DECL_MEMBER_CLONING(PropertyUInt, SinglePropertyValue<PropertyUIntBase>)
};

} // end namespace Qtinuum

#endif // PROPERTYUINT_H