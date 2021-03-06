//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _SCRCStackNode;

@interface SCRCStackQueue : NSObject
{
    _SCRCStackNode *_firstNode;	// 8 = 0x8
    _SCRCStackNode *_lastNode;	// 16 = 0x10
    unsigned long long _count;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000020887
- (_Bool)isEmpty;	// IMP=0x0000000000020879
- (id)objectEnumerator;	// IMP=0x0000000000020842
- (id)description;	// IMP=0x0000000000020711
- (unsigned long long)count;	// IMP=0x0000000000020707
- (id)dequeueObject;	// IMP=0x00000000000206ed
- (id)dequeueObjectRetained;	// IMP=0x0000000000020629
- (void)enqueueObject:(id)arg1;	// IMP=0x0000000000020617
- (id)topObject;	// IMP=0x0000000000020601
- (id)popObjectRetained;	// IMP=0x0000000000020540
- (id)popObject;	// IMP=0x0000000000020526
- (void)pushObject:(id)arg1;	// IMP=0x000000000002046f
- (void)pushArray:(id)arg1;	// IMP=0x0000000000020338
- (void)_safeReleaseAllObjects;	// IMP=0x00000000000202d4
- (void)removeAllObjects;	// IMP=0x00000000000202af
- (void)dealloc;	// IMP=0x0000000000020271

@end

