//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NSReduceObservationTransformer
{
    CDUnknownBlockType _reducer;	// 40 = 0x28
    id _accumulator;	// 48 = 0x30
}

+ (id)reduceValue:(id)arg1 withReducer:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d8a1d
- (void)dealloc;	// IMP=0x00000000000d8d16
- (id)initWithBlock:(CDUnknownBlockType)arg1 initialValue:(id)arg2;	// IMP=0x00000000000d8c83
- (void)_receiveBox:(id)arg1;	// IMP=0x00000000000d8b9c
- (void)finishObserving;	// IMP=0x00000000000d8a51

@end

