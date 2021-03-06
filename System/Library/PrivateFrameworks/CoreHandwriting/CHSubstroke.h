//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreHandwriting/NSSecureCoding-Protocol.h>

@class CHEncodedStrokeIdentifier;

@interface CHSubstroke : NSObject <NSSecureCoding>
{
    vector_48b48a27 _convexHull;	// 8 = 0x8
    CHEncodedStrokeIdentifier *_strokeIdentifier;	// 32 = 0x20
    double _startTimestamp;	// 40 = 0x28
    double _endTimestamp;	// 48 = 0x30
    double _curvature;	// 56 = 0x38
    struct CGRect _bounds;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000f3400
+ (id)substrokesForStroke:(id)arg1;	// IMP=0x00000000000f18e0
- (id).cxx_construct;	// IMP=0x00000000000f3800
- (void).cxx_destruct;	// IMP=0x00000000000f37c0
@property(readonly, nonatomic) double curvature; // @synthesize curvature=_curvature;
@property(readonly, nonatomic) double endTimestamp; // @synthesize endTimestamp=_endTimestamp;
@property(readonly, nonatomic) double startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(readonly, nonatomic) CHEncodedStrokeIdentifier *strokeIdentifier; // @synthesize strokeIdentifier=_strokeIdentifier;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f36e0
- (_Bool)isEqualToSubstroke:(id)arg1;	// IMP=0x00000000000f3410
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f3020
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f2e30
- (void *)convexHull;	// IMP=0x00000000000f2e20
- (id)initWithStrokeIdentifier:(id)arg1 bounds:(struct CGRect)arg2 startTimestamp:(double)arg3 endTimestamp:(double)arg4 convexHull:(const void *)arg5 curvature:(double)arg6;	// IMP=0x00000000000f17e0

@end

