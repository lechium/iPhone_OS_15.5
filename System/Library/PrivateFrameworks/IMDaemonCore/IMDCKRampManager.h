//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol OS_dispatch_queue;

@interface IMDCKRampManager : NSObject
{
    NSObject<OS_dispatch_queue> *_ckQueue;	// 8 = 0x8
    NSTimer *_retryTimer;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000000007ead8
@property(retain, nonatomic) NSTimer *retryTimer; // @synthesize retryTimer=_retryTimer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *ckQueue; // @synthesize ckQueue=_ckQueue;
- (void)cachedRampState:(CDUnknownBlockType)arg1;	// IMP=0x000000000007fd21
- (void)fetchLatestRampStateFromCK:(CDUnknownBlockType)arg1;	// IMP=0x000000000007f682
- (void)_performRampCheckWithRetryAfter:(double)arg1;	// IMP=0x000000000007f4ac
- (void)_persistRampFetchServerError:(_Bool)arg1;	// IMP=0x000000000007f412
- (void)_writeRampStateAllowed:(_Bool)arg1 promoted:(_Bool)arg2 visible:(_Bool)arg3 fetchHadServerError:(_Bool)arg4;	// IMP=0x000000000007f284
- (void)_fetchLatestRampStateFromCK:(CDUnknownBlockType)arg1;	// IMP=0x000000000007ecec
- (_Bool)_shouldSendPriorityRequest;	// IMP=0x000000000007eccc
- (id)_rampUpRecordID;	// IMP=0x000000000007ec4a
- (void)_scheduleOperation:(id)arg1;	// IMP=0x000000000007ec07
- (id)_CKUtilitiesSharedInstance;	// IMP=0x000000000007ebee
- (void)dealloc;	// IMP=0x000000000007eb6b
- (id)init;	// IMP=0x000000000007eb1d

@end

