//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPSGraphPruningDescriptor, NSArray;

@interface MPSGraphPruningGradientOp
{
    MPSGraphPruningDescriptor *_pruningDesc;	// 80 = 0x50
    NSArray *_shape;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000130e3f
- (void *)makeMLIROpWithBuilder:(void *)arg1 symbolTable:(void *)arg2 inputValues:(void *)arg3 opInitialization:(_Bool)arg4 name:(id)arg5;	// IMP=0x000000000013077d
- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 shape:(id)arg4 descriptor:(id)arg5 name:(id)arg6;	// IMP=0x000000000013066c

@end

