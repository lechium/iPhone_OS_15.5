//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface MPSGraphForLoopOp
{
    CDUnknownBlockType _bodyBlock;	// 80 = 0x50
    NSArray *_bodyResult;	// 88 = 0x58
    NSArray *_iterArgs;	// 96 = 0x60
    NSArray *_forBlockArguments;	// 104 = 0x68
    struct unique_ptr<AutodiffOpData, std::default_delete<AutodiffOpData>> _opData;	// 112 = 0x70
}

- (id).cxx_construct;	// IMP=0x0000000000098a71
- (void).cxx_destruct;	// IMP=0x0000000000098a00
- (void)partialDerivateForCFOpWithAutodiff:(void *)arg1;	// IMP=0x00000000000989e1
- (_Bool)recurseOutFromBlockInput:(id)arg1 withAutodiff:(void *)arg2;	// IMP=0x0000000000098982
- (_Bool)recurseOnBlocksFromOutput:(id)arg1 withAutodiff:(void *)arg2;	// IMP=0x0000000000098923
- (_Bool)recurseFromBlock:(id)arg1 onEscaped:(id)arg2 withAutodiff:(void *)arg3;	// IMP=0x000000000009890f
- (void *)makeMLIROpWithBuilder:(void *)arg1 symbolTable:(void *)arg2 inputValues:(void *)arg3 opInitialization:(_Bool)arg4 name:(id)arg5;	// IMP=0x0000000000098084
- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 bodyBlock:(CDUnknownBlockType)arg4 iterArgs:(id)arg5 name:(id)arg6;	// IMP=0x0000000000097f11

@end

