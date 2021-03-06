//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXMADSREnvelope, AXMSynthPatch;

@interface AXMTone : NSObject
{
    unsigned long long _sampleRate;	// 8 = 0x8
    double _frequency;	// 16 = 0x10
    AXMADSREnvelope *_envelope;	// 24 = 0x18
    double _gain;	// 32 = 0x20
    double _aWeighting;	// 40 = 0x28
    AXMSynthPatch *_patch;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000a117b
@property(retain, nonatomic) AXMSynthPatch *patch; // @synthesize patch=_patch;
@property(readonly, nonatomic) double aWeighting; // @synthesize aWeighting=_aWeighting;
@property(nonatomic) double gain; // @synthesize gain=_gain;
@property(readonly, nonatomic) AXMADSREnvelope *envelope; // @synthesize envelope=_envelope;
@property(readonly, nonatomic) double frequency; // @synthesize frequency=_frequency;
@property(nonatomic) unsigned long long sampleRate; // @synthesize sampleRate=_sampleRate;
- (double)_rawValueForTonePhase:(double)arg1;	// IMP=0x00000000000a1053
- (void)_setFrequency:(double)arg1;	// IMP=0x00000000000a0fd7
- (void)renderInBuffer:(void *)arg1 atFrame:(unsigned long long)arg2;	// IMP=0x00000000000a0fd1
- (id)initWithSampleRate:(double)arg1 envelope:(id)arg2;	// IMP=0x00000000000a0f17
- (id)init;	// IMP=0x00000000000a0e9b

@end

