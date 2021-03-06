//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>
#import <CoreMotion/NSSecureCoding-Protocol.h>

@interface CMStrideCalibrationData : NSObject <NSSecureCoding, NSCopying>
{
    long long _state;	// 8 = 0x8
    double _kValue;	// 16 = 0x10
    double _begin;	// 24 = 0x18
    double _end;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000015a3b9
@property(nonatomic) double end; // @synthesize end=_end;
@property(nonatomic) double begin; // @synthesize begin=_begin;
@property(nonatomic) double kValue; // @synthesize kValue=_kValue;
@property(nonatomic) long long state; // @synthesize state=_state;
- (id)description;	// IMP=0x000000000015a5c5
- (id)initWithBegin:(double)arg1 end:(double)arg2 state:(long long)arg3 kValue:(double)arg4;	// IMP=0x000000000015a55b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000015a4f1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000015a471
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000015a3c1

@end

