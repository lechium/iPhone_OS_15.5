//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

#import <HomeKitDaemonLegacy/HAPTLVCreateParse-Protocol.h>
#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@class NSDictionary, NSNumber;

@interface HMDSupportedAudioStreamConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>
{
    NSNumber *_supportsComfortNoise;	// 8 = 0x8
    NSDictionary *_codecConfigurations;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000072bce
- (void).cxx_destruct;	// IMP=0x0000000000072b50
@property(readonly, copy, nonatomic) NSDictionary *codecConfigurations; // @synthesize codecConfigurations=_codecConfigurations;
@property(readonly, copy, nonatomic) NSNumber *supportsComfortNoise; // @synthesize supportsComfortNoise=_supportsComfortNoise;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000072a80
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000728a8
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x000000000007274b
- (id)tlvData;	// IMP=0x000000000007256e
- (_Bool)_parseFromTLVData;	// IMP=0x0000000000072233
- (id)initWithComfortNoise:(id)arg1 CodecConfigurations:(id)arg2;	// IMP=0x000000000007217e

@end
