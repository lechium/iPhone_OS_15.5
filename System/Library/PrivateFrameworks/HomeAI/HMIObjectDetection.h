//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeAI/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface HMIObjectDetection : NSObject <NSSecureCoding>
{
    int _labelIndex;	// 8 = 0x8
    double _confidence;	// 16 = 0x10
    NSNumber *_yaw;	// 24 = 0x18
    NSNumber *_roll;	// 32 = 0x20
    struct CGRect _boundingBox;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000096ce2
- (void).cxx_destruct;	// IMP=0x0000000000032d1c
@property(readonly, nonatomic) struct CGRect boundingBox; // @synthesize boundingBox=_boundingBox;
@property(readonly) NSNumber *roll; // @synthesize roll=_roll;
@property(readonly) NSNumber *yaw; // @synthesize yaw=_yaw;
@property(readonly) double confidence; // @synthesize confidence=_confidence;
@property(readonly) int labelIndex; // @synthesize labelIndex=_labelIndex;
- (id)description;	// IMP=0x0000000000032b81
- (id)initWithLabelIndex:(int)arg1 confidence:(double)arg2 boundingBox:(struct CGRect)arg3 yaw:(id)arg4 roll:(id)arg5;	// IMP=0x0000000000032b6f
- (id)initWithLabelIndex:(int)arg1 confidence:(double)arg2 unclampedBoundingBox:(struct CGRect)arg3 yaw:(id)arg4 roll:(id)arg5;	// IMP=0x0000000000032aab
- (unsigned long long)hash;	// IMP=0x0000000000097256
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009702a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000096e70
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000096cea

@end
