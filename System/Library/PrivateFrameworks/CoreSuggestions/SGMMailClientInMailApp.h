//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PETScalarEventTracker;

@interface SGMMailClientInMailApp : NSObject
{
    PETScalarEventTracker *_tracker;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000562c6
@property(readonly, nonatomic) PETScalarEventTracker *tracker; // @synthesize tracker=_tracker;
- (void)trackEventWithScalar:(unsigned long long)arg1 isSynced:(struct SGMTypeSafeBool_)arg2 service:(struct SGMEventICSSourceType_)arg3;	// IMP=0x0000000000056086
- (id)init;	// IMP=0x0000000000055f40

@end
