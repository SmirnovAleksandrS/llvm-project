#ifndef LLVM_LIB_TARGET_MYARCH_MYARCHINSTRINFO_H
#define LLVM_LIB_TARGET_MYARCH_MYARCHINSTRINFO_H

#include "MyArchRegisterInfo.h"
#include "MCTargetDesc/MyArchInfo.h"
#include "llvm/CodeGen/TargetInstrInfo.h"

#define GET_INSTRINFO_HEADER
#include "MyArchGenInstrInfo.inc"

namespace llvm {

class MyArchSubtarget;

class MyArchInstrInfo : public MyArchGenInstrInfo {
  const MyArchRegisterInfo RI;

public:
  explicit MyArchInstrInfo(const MyArchSubtarget &STI);

  const MyArchRegisterInfo &getRegisterInfo() const { return RI; }

};

} // end namespace llvm

#endif // LLVM_LIB_TARGET_MYARCH_MYARCHINSTRINFO_H
