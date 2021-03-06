//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CNTimestamped : NSObject
{
    id _value;	// 8 = 0x8
    double _timestamp;	// 16 = 0x10
}

+ (id)timestampedWithValue:(id)arg1 timestamp:(double)arg2;	// IMP=0x000000000004667c
+ (CDUnknownBlockType)wrapTransformWithScheduler:(id)arg1;	// IMP=0x000000000004657e
- (void).cxx_destruct;	// IMP=0x0000000000046a7e
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
- (unsigned long long)hash;	// IMP=0x0000000000046a25
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000046823
- (id)description;	// IMP=0x0000000000046764
- (id)initWithValue:(id)arg1 timestamp:(double)arg2;	// IMP=0x00000000000466d7

@end

