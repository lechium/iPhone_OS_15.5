//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SCRCIndexMap;

@interface SCROBrailleDisplayManagedQueue : NSObject
{
    SCRCIndexMap *_stateQueueMap;	// 8 = 0x8
    struct __CFDictionary *_queueStateDict;	// 16 = 0x10
    struct __CFDictionary *_displayQueueDict;	// 24 = 0x18
    SCRCIndexMap *_tokenDisplayMap;	// 32 = 0x20
    unsigned long long _maxActiveQueueSize;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000016b8b
- (id)loadingDisplays;	// IMP=0x0000000000016b72
- (id)disconnectedDisplays;	// IMP=0x0000000000016b5c
- (id)sleepingDisplays;	// IMP=0x0000000000016b43
- (id)activePendingDisplays;	// IMP=0x0000000000016b2a
- (id)activeDisplays;	// IMP=0x0000000000016b11
- (void)setActiveQueueMaximumSize:(unsigned long long)arg1;	// IMP=0x00000000000169f6
- (unsigned long long)activeQueueMaximumSize;	// IMP=0x00000000000169ec
- (void)setPrimaryDisplay:(id)arg1;	// IMP=0x0000000000016902
- (id)primaryDisplay;	// IMP=0x000000000001688d
- (unsigned long long)displayCountIncludingDisconnectedDisplays:(_Bool)arg1;	// IMP=0x000000000001681c
- (id)displayForToken:(int)arg1;	// IMP=0x0000000000016803
- (int)stateForDisplay:(id)arg1;	// IMP=0x0000000000016789
- (void)setState:(int)arg1 forDisplay:(id)arg2;	// IMP=0x0000000000016592
- (void)_fillActiveBrailleDisplayQueue;	// IMP=0x0000000000016310
- (void)removeDisplay:(id)arg1;	// IMP=0x00000000000161b4
- (void)addDisplay:(id)arg1 withState:(int)arg2;	// IMP=0x000000000001600b
- (id)_queueForState:(int)arg1 createQueue:(_Bool)arg2;	// IMP=0x0000000000015f84
- (void)dealloc;	// IMP=0x0000000000015f37
- (id)init;	// IMP=0x0000000000015e90

@end

