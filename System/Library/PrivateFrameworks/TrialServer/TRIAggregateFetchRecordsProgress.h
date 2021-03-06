//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _PASLock;
@protocol OS_dispatch_queue;

@interface TRIAggregateFetchRecordsProgress : NSObject
{
    CDUnknownBlockType _progress;	// 8 = 0x8
    _PASLock *_lock;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000061f79
- (double)fractionCompleted;	// IMP=0x0000000000061e96
- (void)setComplete;	// IMP=0x0000000000061e30
- (void)setFractionCompleted:(double)arg1 forRecordId:(id)arg2;	// IMP=0x0000000000061c2f
- (void)unregisterRecordId:(id)arg1;	// IMP=0x0000000000061aed
- (void)registerRecordId:(id)arg1 withExpectedSize:(unsigned long long)arg2;	// IMP=0x000000000006194f
- (void)_issueCurrentProgressWithGuardedData:(id)arg1;	// IMP=0x00000000000618d5
- (double)_fractionCompletedWithGuardedData:(id)arg1;	// IMP=0x0000000000061883
- (id)initWithProgressBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000061762

@end

