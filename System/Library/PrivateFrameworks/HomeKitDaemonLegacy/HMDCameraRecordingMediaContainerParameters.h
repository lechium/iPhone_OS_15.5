//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

#import <HomeKitDaemonLegacy/HAPTLVCreateParse-Protocol.h>
#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface HMDCameraRecordingMediaContainerParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>
{
    NSNumber *_fragmentLength;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000005add03
- (void).cxx_destruct;	// IMP=0x00000000005adcf0
@property(readonly, copy, nonatomic) NSNumber *fragmentLength; // @synthesize fragmentLength=_fragmentLength;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000005adc66
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000005adbce
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x00000000005adaf8
- (id)tlvData;	// IMP=0x00000000005ada5a
- (_Bool)_parseFromTLVData;	// IMP=0x00000000005ad967
- (id)initWithFragmentLength:(id)arg1;	// IMP=0x00000000005ad8f9

@end
