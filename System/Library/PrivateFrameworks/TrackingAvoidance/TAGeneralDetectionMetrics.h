//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrackingAvoidance/NSSecureCoding-Protocol.h>

@class TAInterVisitMetricPerDevice;

@interface TAGeneralDetectionMetrics : NSObject <NSSecureCoding>
{
    _Bool _geoNavHint;	// 8 = 0x8
    _Bool _vehicularStateHint;	// 9 = 0x9
    TAInterVisitMetricPerDevice *_interVisitMetrics;	// 16 = 0x10
    unsigned long long _dominantUserActivity;	// 24 = 0x18
    long long _pdState;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001253a
- (void).cxx_destruct;	// IMP=0x000000000001272d
@property(readonly, nonatomic) _Bool vehicularStateHint; // @synthesize vehicularStateHint=_vehicularStateHint;
@property(readonly, nonatomic) _Bool geoNavHint; // @synthesize geoNavHint=_geoNavHint;
@property(readonly, nonatomic) long long pdState; // @synthesize pdState=_pdState;
@property(readonly, nonatomic) unsigned long long dominantUserActivity; // @synthesize dominantUserActivity=_dominantUserActivity;
@property(readonly, nonatomic) TAInterVisitMetricPerDevice *interVisitMetrics; // @synthesize interVisitMetrics=_interVisitMetrics;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001264b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000012542
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000012319
- (id)initWithInterVisitMetrics:(id)arg1 dominantUserActivity:(unsigned long long)arg2 pdState:(long long)arg3 geoNavHint:(_Bool)arg4 vehicularStateHint:(_Bool)arg5;	// IMP=0x0000000000012268

@end

