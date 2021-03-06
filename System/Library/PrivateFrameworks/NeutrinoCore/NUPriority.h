//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NUPriority : NSObject
{
    long long _level;	// 8 = 0x8
    double _order;	// 16 = 0x10
}

@property(readonly, nonatomic) double order; // @synthesize order=_order;
@property(readonly, nonatomic) long long level; // @synthesize level=_level;
@property(readonly, nonatomic) _Bool isLow;
@property(readonly, nonatomic) _Bool isHigh;
- (_Bool)isEqualToPriority:(id)arg1;	// IMP=0x00000000000486b4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000048657
- (unsigned long long)hash;	// IMP=0x0000000000048636
- (long long)compare:(id)arg1;	// IMP=0x0000000000048218
- (id)description;	// IMP=0x0000000000048173
- (id)initWithLevel:(long long)arg1 order:(double)arg2;	// IMP=0x00000000000477f3
- (id)initWithLevel:(long long)arg1;	// IMP=0x00000000000477de
- (id)init;	// IMP=0x00000000000477c7

@end

