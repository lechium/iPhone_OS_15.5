//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

#import <HomeKitDaemonLegacy/HAPTLVCreateParse-Protocol.h>
#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@class HMDAudioCodecGroup, HMDAudioCodecParameters, HMDSelectedRTPParameters, NSNumber;

@interface HMDSelectedAudioParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>
{
    HMDAudioCodecGroup *_codecGroup;	// 8 = 0x8
    HMDAudioCodecParameters *_codecParameters;	// 16 = 0x10
    HMDSelectedRTPParameters *_rtpParameters;	// 24 = 0x18
    NSNumber *_comfortNoiseEnabled;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000794b1
- (void).cxx_destruct;	// IMP=0x000000000007945e
@property(readonly, copy, nonatomic) NSNumber *comfortNoiseEnabled; // @synthesize comfortNoiseEnabled=_comfortNoiseEnabled;
@property(readonly, copy, nonatomic) HMDSelectedRTPParameters *rtpParameters; // @synthesize rtpParameters=_rtpParameters;
@property(readonly, copy, nonatomic) HMDAudioCodecParameters *codecParameters; // @synthesize codecParameters=_codecParameters;
@property(readonly, copy, nonatomic) HMDAudioCodecGroup *codecGroup; // @synthesize codecGroup=_codecGroup;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000079302
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000079007
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x0000000000078ded
- (_Bool)_parseFromTLVData;	// IMP=0x0000000000078b23
- (id)tlvData;	// IMP=0x000000000007895a
- (id)initWithCodecGroup:(id)arg1 codecParameter:(id)arg2 rtpParameter:(id)arg3 comfortNoiseEnabled:(id)arg4;	// IMP=0x0000000000078863

@end

