//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary;
@protocol OS_os_log;

@interface PXStoryLoadingStatusReporter : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    unsigned long long _lock_statesCount;	// 16 = 0x10
    unsigned long long _lock_statesCapacity;	// 24 = 0x18
    CDStruct_a06f635e *_lock_states;	// 32 = 0x20
    NSMutableDictionary *_lock_stateIndexByClipIdentifier;	// 40 = 0x28
    NSDate *_lock_lastUserActivity;	// 48 = 0x30
    NSObject<OS_os_log> *_log;	// 56 = 0x38
    unsigned long long _logContext;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000004bc840
@property(nonatomic) unsigned long long logContext; // @synthesize logContext=_logContext;
@property(retain, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
- (void)notifyLoadingStatus:(unsigned char)arg1 error:(id)arg2 forClipIdentifier:(long long)arg3;	// IMP=0x00000000004bc790
- (void)notifyVisibility:(unsigned char)arg1 forClipIdentifier:(long long)arg2;	// IMP=0x00000000004bc727
- (void)notifyPreloadingCompleteForClipIdentifier:(long long)arg1;	// IMP=0x00000000004bc6cb
- (void)notifyPreloadingProgress:(double)arg1 error:(id)arg2 forClipIdentifier:(long long)arg3;	// IMP=0x00000000004bc58c
- (void)notifyStartedPreloadingClipIdentifier:(long long)arg1;	// IMP=0x00000000004bc530
- (void)notifyUserDidNavigate;	// IMP=0x00000000004bc4e4
- (void)_lock_updateStatusForLoadingState:(CDStruct_a06f635e *)arg1 error:(id)arg2 clipIdentifier:(long long)arg3;	// IMP=0x00000000004bc1d2
- (CDStruct_a06f635e *)_lock_stateForClipIdentifier:(long long)arg1;	// IMP=0x00000000004bc049
- (void)dealloc;	// IMP=0x00000000004bc00f
- (id)init;	// IMP=0x00000000004bbf88

@end

