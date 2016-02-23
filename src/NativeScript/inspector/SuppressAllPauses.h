#ifndef SuppressAllPauses_h
#define SuppressAllPauses_h

namespace NativeScript {
class SuppressAllPauses {
public:
    SuppressAllPauses(JSC::JSGlobalObject& globalObject);

    ~SuppressAllPauses();

private:
    JSC::JSGlobalObject& m_globalObject;
};
}
#endif /* SuppressAllPauses_h */
