//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/NSCopying-Protocol.h>
#import <SoundAnalysis/NSSecureCoding-Protocol.h>
#import <SoundAnalysis/SNConfidenceProviding-Protocol.h>
#import <SoundAnalysis/SNConfidenceProvidingWritable-Protocol.h>
#import <SoundAnalysis/SNResult-Protocol.h>
#import <SoundAnalysis/SNTimeRangeProviding-Protocol.h>
#import <SoundAnalysis/SNTimeRangeProvidingWritable-Protocol.h>
#import <SoundAnalysis/SRSampling-Protocol.h>

@class NSString;

@interface SNDetectionResult : NSObject <NSCopying, NSSecureCoding, SRSampling, SNTimeRangeProvidingWritable, SNConfidenceProvidingWritable, SNResult, SNTimeRangeProviding, SNConfidenceProviding>
{
    _Bool _detected;	// 8 = 0x8
    double _confidence;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSString *_detectorIdentifier;	// 32 = 0x20
    CDStruct_e83c9415 _timeRange;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001bb10
- (void).cxx_destruct;	// IMP=0x000000000001bf90
@property(retain, nonatomic) NSString *detectorIdentifier; // @synthesize detectorIdentifier=_detectorIdentifier;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) _Bool detected; // @synthesize detected=_detected;
@property(nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;	// IMP=0x000000000001bef3
- (id)binarySampleRepresentation;	// IMP=0x000000000001becf
- (id)initWithBinarySampleRepresentation:(id)arg1;	// IMP=0x000000000001be63
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001bd00
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001bb18
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToDetectionResult:(id)arg1;	// IMP=0x000000000001b6f2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001b68b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001b56a
@property(readonly, copy) NSString *description;
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000001b3cd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

