//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Proximity/NSCopying-Protocol.h>
#import <Proximity/NSSecureCoding-Protocol.h>

@interface PRRangeMeasurement : NSObject <NSCopying, NSSecureCoding>
{
    double _measurement;	// 8 = 0x8
    double _uncertainty;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000254bc
+ (id)measurementWithRange:(double)arg1 uncertainty:(double)arg2;	// IMP=0x0000000000025477
@property(readonly, nonatomic) double uncertainty; // @synthesize uncertainty=_uncertainty;
@property(readonly, nonatomic) double measurement; // @synthesize measurement=_measurement;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000025622
- (id)description;	// IMP=0x00000000000255f3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000255be
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000025548
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000254c4
- (id)initWithRange:(double)arg1 uncertainty:(double)arg2;	// IMP=0x0000000000025425

@end
