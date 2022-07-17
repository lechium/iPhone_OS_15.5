//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RunningBoard/NSCopying-Protocol.h>
#import <RunningBoard/NSMutableCopying-Protocol.h>

@class NSMutableSet, NSSet;

@interface RBSystemState : NSObject <NSCopying, NSMutableCopying>
{
    NSMutableSet *_tags;	// 8 = 0x8
    _Bool _preventLaunch;	// 16 = 0x10
    _Bool _preventIdleSleep;	// 17 = 0x11
    NSMutableSet *_preventIdleSleepIdentifiers;	// 24 = 0x18
    NSMutableSet *_preventLaunchPredicates;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000397a7
@property(readonly, copy, nonatomic) NSSet *tags; // @synthesize tags=_tags;
@property(readonly, copy, nonatomic) NSSet *preventLaunchPredicates; // @synthesize preventLaunchPredicates=_preventLaunchPredicates;
@property(readonly, nonatomic) NSSet *preventIdleSleepIdentifiers; // @synthesize preventIdleSleepIdentifiers=_preventIdleSleepIdentifiers;
@property(readonly, nonatomic) _Bool preventIdleSleep; // @synthesize preventIdleSleep=_preventIdleSleep;
@property(readonly, nonatomic) _Bool preventLaunch; // @synthesize preventLaunch=_preventLaunch;
- (id)description;	// IMP=0x00000000000396d9
- (unsigned long long)hash;	// IMP=0x0000000000039630
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000394f9
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000039453
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000039448
- (id)_init;	// IMP=0x0000000000039419

@end
