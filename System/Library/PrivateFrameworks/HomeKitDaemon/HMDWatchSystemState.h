//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSHashTable;
@protocol HMFLocking;

@interface HMDWatchSystemState : HMFObject
{
    id <HMFLocking> _lock;	// 8 = 0x8
    _Bool _companionReachable;	// 16 = 0x10
    NSHashTable *_watchSystemStateDelegates;	// 24 = 0x18
}

+ (id)sharedState;	// IMP=0x00000000007f0f57
- (void).cxx_destruct;	// IMP=0x00000000007f0cdd
- (void)_callDidUpdateReachabilityChangeForCompanion:(_Bool)arg1 forDelegate:(id)arg2;	// IMP=0x00000000007f0c70
- (void)registerDelegate:(id)arg1;	// IMP=0x00000000007f0ba5
@property(readonly, nonatomic) NSHashTable *watchSystemStateDelegates; // @synthesize watchSystemStateDelegates=_watchSystemStateDelegates;
@property(nonatomic, getter=isCompanionReachable) _Bool companionReachable; // @synthesize companionReachable=_companionReachable;
- (id)init;	// IMP=0x00000000007f067b

@end
