//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MetricMeasurement/MXMInstrumental-Protocol.h>
#import <MetricMeasurement/MXMProbeDelegate-Protocol.h>
#import <MetricMeasurement/NSSecureCoding-Protocol.h>

@class MXMInstrument, MXMMutableSampleData, MXMProbe, MXMSampleFilter, NSString;

@interface MXMMetric : NSObject <MXMProbeDelegate, MXMInstrumental, NSSecureCoding>
{
    MXMProbe *_probe;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_version;	// 24 = 0x18
    NSString *_build;	// 32 = 0x20
    MXMMutableSampleData *_data;	// 40 = 0x28
    MXMSampleFilter *_filter;	// 48 = 0x30
    unsigned long long _preferredSampleMode;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000afe9
- (void).cxx_destruct;	// IMP=0x000000000000c007
@property(nonatomic) unsigned long long preferredSampleMode; // @synthesize preferredSampleMode=_preferredSampleMode;
@property(retain, nonatomic) MXMSampleFilter *filter; // @synthesize filter=_filter;
- (_Bool)harvestData:(id *)arg1 error:(id *)arg2;	// IMP=0x000000000000bd19
- (void)didStopAtContinuousTime:(unsigned long long)arg1 absoluteTime:(unsigned long long)arg2 stopDate:(id)arg3;	// IMP=0x000000000000b9fa
- (void)didStopAtTime:(unsigned long long)arg1 stopDate:(id)arg2;	// IMP=0x000000000000b530
- (void)willStop;	// IMP=0x000000000000b52a
- (void)didStartAtContinuousTime:(unsigned long long)arg1 absoluteTime:(unsigned long long)arg2 startDate:(id)arg3;	// IMP=0x000000000000b524
- (void)didStartAtTime:(unsigned long long)arg1 startDate:(id)arg2;	// IMP=0x000000000000b51e
- (void)willStartAtEstimatedTime:(unsigned long long)arg1;	// IMP=0x000000000000b22a
- (_Bool)prepareWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000b1cb
- (void)probeDidUpdate:(id)arg1 data:(id)arg2 stop:(_Bool *)arg3;	// IMP=0x000000000000b1ab
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000000b197
- (id)initWithIdentifier:(id)arg1 filter:(id)arg2;	// IMP=0x000000000000aff1
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000ae8f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000ad53
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000ac5d
- (id)copy;	// IMP=0x000000000000ac49
- (id)_getProbe;	// IMP=0x000000000000ab81
@property(readonly, nonatomic) unsigned long long _sampleMode;
- (id)_constructProbe;	// IMP=0x000000000000ab2e
@property(readonly, nonatomic) _Bool _shouldConstructProbe;
- (_Bool)_shouldWrapInProxy;	// IMP=0x000000000000aa05
@property(readonly, nonatomic) _Bool _shouldNeverWrapInProxy;
@property(readonly, nonatomic) _Bool _shouldAlwaysWrapInProxy;
@property(readonly, nonatomic) NSString *build;
@property(readonly, nonatomic) NSString *version;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) MXMInstrument *instrument;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

