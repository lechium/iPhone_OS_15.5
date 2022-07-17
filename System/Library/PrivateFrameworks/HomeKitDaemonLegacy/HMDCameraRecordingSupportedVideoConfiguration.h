//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

#import <HomeKitDaemonLegacy/HAPTLVCreateParse-Protocol.h>
#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@class NSArray;

@interface HMDCameraRecordingSupportedVideoConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>
{
    NSArray *_codecConfigurations;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000007cc572
- (void).cxx_destruct;	// IMP=0x00000000007cc512
@property(readonly, copy, nonatomic) NSArray *codecConfigurations; // @synthesize codecConfigurations=_codecConfigurations;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000007cc488
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000007cc348
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x00000000007cc255
- (id)tlvData;	// IMP=0x00000000007cc172
- (_Bool)_parseFromTLVData;	// IMP=0x00000000007cc078
- (id)initWithCodecConfigurations:(id)arg1;	// IMP=0x00000000007cc00a

@end
