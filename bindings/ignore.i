
// List of ignore rules
//namespace iDynTree{

// Avoid warning related to const methods (of type:
// Warning 512: Overloaded method .. const ignored,
// Warning 512: using non-const method ... instead)

%ignore *::data() const;
%ignore *::operator+=;
%ignore *::operator()(const unsigned int index) const;
%ignore *::operator()(const unsigned int row, const unsigned int col) const;
%ignore *::getSemantics() const;
%ignore *::pos() const;
%ignore *::vel() const;
%ignore *::acc() const;
%ignore *::getAngularVec3() const;
%ignore *::getLinearVec3() const;
%ignore *::contactId() const;

// There are some issues in generating the correct wrappers for SensorsList::Iterator
// Simply disable it
%ignore iDynTree::SensorsList::allSensorsIterator();
%ignore iDynTree::SensorsList::allSensorsIterator() const;
%ignore iDynTree::SensorsList::sensorsIteratorForType(const iDynTree::SensorType&);
%ignore iDynTree::SensorsList::sensorsIteratorForType(const iDynTree::SensorType&) const;

//Disable everything in Utils.h but IndexRange
%ignore iDynTree::UNKNOWN;
%ignore iDynTree::DEFAULT_TOL;
%ignore iDynTree::assertWoAbort(const char *, const char*, const char*, int);
%ignore iDynTree::checkEqualOrUnknown(const int, const int);
%ignore iDynTree::reportError(const char *, const char*, const char *);
%ignore iDynTree::reportErrorIf(bool, const char *, const char *);
%ignore iDynTree::reportWarning(const char *, const char*, const char *);
%ignore iDynTree::deg2rad(const double);
%ignore iDynTree::rad2deg(const double);

// for some reason ignore ::operator= does not work, we disable directly the warning instead
#pragma SWIG nowarn=362

//}
