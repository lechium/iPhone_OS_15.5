//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

@interface MPSGraphQuantizeOp
{
    unsigned int _dtype;	// 76 = 0x4c
    NSNumber *_axis;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000211120
- (void *)makeMLIROpWithBuilder:(void *)arg1 symbolTable:(void *)arg2 inputValues:(void *)arg3 opInitialization:(_Bool)arg4 name:(id)arg5;	// IMP=0x0000000000210abb
- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 dtype:(unsigned int)arg4 axis:(id)arg5 name:(id)arg6;	// IMP=0x00000000002109ba

@end
