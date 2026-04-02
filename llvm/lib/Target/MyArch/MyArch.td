include "llvm/Target/Target.td"
include "MyArchRegisterInfo.td"
include "MyArchInstrInfo.td"
include "MyArchCallingConv.td"

defm : RemapAllTargetPseudoPointerOperands<GPR>;

class Proc<string Name, list<SubtargetFeature> Features>
 : Processor<Name, NoItineraries, Features>;

def : Proc<"generic", []>;

def MyArchInstrInfo : InstrInfo;
def MyArch : Target {
  let InstructionSet = MyArchInstrInfo;
}
