//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInputCore/NSSecureCoding-Protocol.h>

@class NSMutableArray;

@interface TISKPositionalMetricSample : NSObject <NSSecureCoding>
{
    NSMutableArray *_positionalMetricSample;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000019153f
+ (id)makeMetric:(unsigned long long)arg1;	// IMP=0x0000000000191509
- (void).cxx_destruct;	// IMP=0x00000000001914f9
@property(retain, nonatomic) NSMutableArray *positionalMetricSample; // @synthesize positionalMetricSample=_positionalMetricSample;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001913f6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001913d3
- (id)generateDataForSR:(id)arg1;	// IMP=0x0000000000191253
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001911f4
- (id)description:(_Bool)arg1;	// IMP=0x0000000000191093
- (void)merge:(id)arg1;	// IMP=0x0000000000190e69
- (_Bool)isEmpty;	// IMP=0x0000000000190dc4
- (unsigned long long)size;	// IMP=0x0000000000190dae
- (id)singleMetricSample:(unsigned long long)arg1;	// IMP=0x0000000000190d98
- (void)addSample:(id)arg1 withPosition:(unsigned long long)arg2;	// IMP=0x0000000000190d1f
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x0000000000190c62

@end

