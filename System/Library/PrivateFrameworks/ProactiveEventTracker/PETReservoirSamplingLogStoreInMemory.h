//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveEventTracker/PETReservoirSamplingLogStore-Protocol.h>

@class NSMutableData, NSString;

@interface PETReservoirSamplingLogStoreInMemory : NSObject <PETReservoirSamplingLogStore>
{
    NSMutableData *_data;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000015fc3
- (_Bool)attemptToRecreate;	// IMP=0x0000000000015f97
- (_Bool)appendData:(id)arg1 andReturnMapPointer:(struct **)arg2;	// IMP=0x0000000000015f59
- (_Bool)changeLength:(unsigned long long)arg1;	// IMP=0x0000000000015f40
- (CDStruct_39420a03 *)headerMap:(unsigned long long *)arg1;	// IMP=0x0000000000015f2e
- (CDStruct_39420a03 *)remap:(unsigned long long *)arg1;	// IMP=0x0000000000015ef3
- (unsigned long long)currentLength;	// IMP=0x0000000000015edd
- (void)unlock;	// IMP=0x0000000000015ed7
- (_Bool)lock;	// IMP=0x0000000000015ecf
- (id)init;	// IMP=0x0000000000015e79

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

