//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SensorKit/NSSecureCoding-Protocol.h>
#import <SensorKit/SRSampleExporting-Protocol.h>
#import <SensorKit/SRSampling-Protocol.h>

@class NSString;

@interface SRDeletionRecord : NSObject <SRSampleExporting, SRSampling, NSSecureCoding>
{
    _Atomic long long _reason;	// 8 = 0x8
    double _startTime;	// 16 = 0x10
    double _endTime;	// 24 = 0x18
    long long _extendedReason;	// 32 = 0x20
    NSString *__originatingDeviceIdentifier;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000fbc4
+ (id)tombstoneWithStartTime:(double)arg1 endTime:(double)arg2 extendedReason:(long long)arg3 originatingDeviceIdentifier:(id)arg4;	// IMP=0x000000000000fa4d
+ (id)tombstoneWithStartTime:(double)arg1 endTime:(double)arg2 extendedReason:(long long)arg3;	// IMP=0x000000000000fa39
+ (id)tombstoneWithStartTime:(double)arg1 endTime:(double)arg2 reason:(long long)arg3 originatingDeviceIdentifier:(id)arg4;	// IMP=0x000000000000f9ac
+ (id)tombstoneWithStartTime:(double)arg1 endTime:(double)arg2 reason:(long long)arg3;	// IMP=0x000000000000f998
+ (void)initialize;	// IMP=0x000000000000f95d
@property(copy) NSString *_originatingDeviceIdentifier; // @synthesize _originatingDeviceIdentifier=__originatingDeviceIdentifier;
@property long long extendedReason; // @synthesize extendedReason=_extendedReason;
@property double endTime; // @synthesize endTime=_endTime;
@property double startTime; // @synthesize startTime=_startTime;
@property long long reason;
@property(readonly, copy) NSString *description;
- (id)sr_dictionaryRepresentation;	// IMP=0x000000000000ffa3
- (id)binarySampleRepresentation;	// IMP=0x000000000000ff7f
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;	// IMP=0x000000000000fe6d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000fd3d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000fbcc
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000fad8
- (void)dealloc;	// IMP=0x000000000000fa98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
