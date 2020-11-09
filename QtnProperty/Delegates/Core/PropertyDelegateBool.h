/*******************************************************************************
Copyright (c) 2012-2016 Alex Zhondin <lexxmark.dev@gmail.com>
Copyright (c) 2015-2019 Alexandra Cherdantseva <neluhus.vagus@gmail.com>

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

	http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*******************************************************************************/

#ifndef PROPERTY_DELEGATE_BOOL_H
#define PROPERTY_DELEGATE_BOOL_H

#include "QtnProperty/Delegates/Utils/PropertyDelegateMisc.h"
#include "QtnProperty/Core/PropertyBool.h"

class QTN_IMPORT_EXPORT QtnPropertyDelegateBoolCheck
	: public QtnPropertyDelegateTyped<QtnPropertyBoolBase,
		  QtnPropertyDelegateWithValue>
{
	Q_DISABLE_COPY(QtnPropertyDelegateBoolCheck)

public:
	QtnPropertyDelegateBoolCheck(QtnPropertyBoolBase &owner);

	static void Register(QtnPropertyDelegateFactory &factory);

protected:
	bool createSubItemValueImpl(
		QtnDrawContext &context, QtnSubItem &subItemValue) override;
};

class QTN_IMPORT_EXPORT QtnPropertyDelegateBoolCombobox
	: public QtnPropertyDelegateTyped<QtnPropertyBoolBase>
{
	Q_DISABLE_COPY(QtnPropertyDelegateBoolCombobox)

public:
	QtnPropertyDelegateBoolCombobox(QtnPropertyBoolBase &owner);

	static void Register(QtnPropertyDelegateFactory &factory);

protected:
	virtual void applyAttributesImpl(
		const QtnPropertyDelegateInfo &info) override;

	virtual QWidget *createValueEditorImpl(QWidget *parent, const QRect &rect,
		QtnInplaceInfo *inplaceInfo = nullptr) override;

	virtual bool propertyValueToStrImpl(QString &strValue) const override;

private:
	QString m_labels[2];
};

#endif // PROPERTY_DELEGATE_BOOL_H
