//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCondition, NSThread, TSUMemoryWatcher, TSUPointerKeyDictionary, TSURetainedPointerKeyDictionary;
@protocol TSUFlushable;

@interface TSUFlushingManager : NSObject
{
    TSURetainedPointerKeyDictionary *_objects;	// 8 = 0x8
    void *_sortedObjects;	// 16 = 0x10
    void *_sortedNewObjects;	// 24 = 0x18
    TSUPointerKeyDictionary *_inactiveObjects;	// 32 = 0x20
    unsigned int _clock;	// 40 = 0x28
    _Bool _alwaysFlushing;	// 44 = 0x2c
    _Bool _stopFlushing;	// 45 = 0x2d
    _Bool _stopFlushingWhenQueueEmpty;	// 46 = 0x2e
    _Bool _isFlushing;	// 47 = 0x2f
    id <TSUFlushable> _flushingObject;	// 48 = 0x30
    NSCondition *_cond;	// 56 = 0x38
    NSCondition *_isFlushingCond;	// 64 = 0x40
    TSUMemoryWatcher *_memoryWatcher;	// 72 = 0x48
    NSThread *_bgThread;	// 80 = 0x50
    unsigned long long _backgroundTransitionTaskId;	// 88 = 0x58
    unsigned long long _activeBgThreadTask;	// 96 = 0x60
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000221c
+ (id)sharedManager;	// IMP=0x0000000000002111
+ (id)_singletonAlloc;	// IMP=0x00000000000020e0
- (void)_bgThreadInactive;	// IMP=0x000000000000406d
- (void)_bgThreadActive;	// IMP=0x0000000000003f2a
- (void)_bgTaskFinished;	// IMP=0x0000000000003eb2
- (void)_bgTaskStarted;	// IMP=0x0000000000003d6f
- (void)_didUseObject:(id)arg1;	// IMP=0x0000000000003c90
- (_Bool)controlsInactiveObject:(id)arg1;	// IMP=0x0000000000003c73
- (_Bool)controlsActiveObject:(id)arg1;	// IMP=0x0000000000003c56
- (void)advanceClock;	// IMP=0x0000000000003c41
- (void)transferNewObjects;	// IMP=0x0000000000003bb6
- (void)insertObjectInfo:(struct TSUFlushableObjectInfo *)arg1;	// IMP=0x0000000000003ad6
- (struct TSUFlushableObjectInfo *)eraseInfoForObject:(id)arg1;	// IMP=0x0000000000003a5d
- (_Bool)isNewObject:(struct TSUFlushableObjectInfo *)arg1;	// IMP=0x0000000000003a3b
- (void)_backgroundThread:(id)arg1;	// IMP=0x00000000000037b5
- (void)_stopFlushingObjects;	// IMP=0x0000000000003684
- (void)_startFlushingObjects;	// IMP=0x00000000000035ea
- (void)_flushAllEligible;	// IMP=0x000000000000352c
- (void)memoryLevelDecreased:(int)arg1 was:(int)arg2;	// IMP=0x000000000000340c
- (void)memoryLevelIncreased:(int)arg1 was:(int)arg2;	// IMP=0x000000000000329e
- (void)didReceiveMemoryWarning;	// IMP=0x0000000000003216
- (void)willEnterForeground;	// IMP=0x0000000000003210
- (void)didEnterBackground;	// IMP=0x00000000000031fe
- (void)safeToFlush:(id)arg1 wasAccessed:(_Bool)arg2;	// IMP=0x000000000000306b
- (void)unsafeToFlush:(id)arg1;	// IMP=0x0000000000002e2e
- (void)doneWithObject:(id)arg1;	// IMP=0x0000000000002d45
- (void)stopProtectingObject:(id)arg1;	// IMP=0x0000000000002be5
- (void)protectObject:(id)arg1;	// IMP=0x0000000000002afc
- (void)removeObject:(id)arg1;	// IMP=0x0000000000002942
- (void)addObject:(id)arg1;	// IMP=0x00000000000027ef
- (void)dealloc;	// IMP=0x0000000000002453
- (id)init;	// IMP=0x00000000000022cd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000022c4
- (id)autorelease;	// IMP=0x00000000000022bb
- (oneway void)release;	// IMP=0x00000000000022b5
- (unsigned long long)retainCount;	// IMP=0x00000000000022aa
- (id)retain;	// IMP=0x00000000000022a1

@end

