#ifndef LLVM_LIB_TARGET_MyArch_MyArch_H
#define LLVM_LIB_TARGET_MyArch_MyArch_H

#include "llvm/Support/raw_ostream.h"

#define MyArch_DUMP(Color)                                                        \
  {                                                                            \
    llvm::errs().changeColor(Color)                                            \
        << __func__ << "\n\t\t" << __FILE__ << ":" << __LINE__ << "\n";        \
    llvm::errs().changeColor(llvm::raw_ostream::WHITE);                        \
  }
// #define MyArch_DUMP(Color) {}

#define MyArch_DUMP_RED MyArch_DUMP(llvm::raw_ostream::RED)
#define MyArch_DUMP_GREEN MyArch_DUMP(llvm::raw_ostream::GREEN)
#define MyArch_DUMP_YELLOW MyArch_DUMP(llvm::raw_ostream::YELLOW)
#define MyArch_DUMP_CYAN MyArch_DUMP(llvm::raw_ostream::CYAN)
#define MyArch_DUMP_MAGENTA MyArch_DUMP(llvm::raw_ostream::MAGENTA)

#endif // LLVM_LIB_TARGET_MyArch_MyArch_H