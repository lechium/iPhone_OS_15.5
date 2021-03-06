//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

#import <HomeKitDaemonLegacy/HAPTLVCreateParse-Protocol.h>
#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@class NSArray, NSNumber;

@interface HMDCameraRecordingGeneralConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>
{
    NSNumber *_prebufferLength;	// 8 = 0x8
    unsigned long long _eventTriggerOptions;	// 16 = 0x10
    NSArray *_mediaContainerConfigurations;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000005aedc2
- (void).cxx_destruct;	// IMP=0x00000000005aec6b
@property(readonly, copy, nonatomic) NSArray *mediaContainerConfigurations; // @synthesize mediaContainerConfigurations=_mediaContainerConfigurations;
@property(readonly, nonatomic) unsigned long long eventTriggerOptions; // @synthesize eventTriggerOptions=_eventTriggerOptions;
@property(readonly, copy, nonatomic) NSNumber *prebufferLength; // @synthesize prebufferLength=_prebufferLength;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000005aeb3e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000005ae965
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x00000000005ae7f3
- (id)tlvData;	// IMP=0x00000000005ae686
- (_Bool)_parseFromTLVData;	// IMP=0x00000000005ae4b7
- (id)initWithPrebufferLength:(id)arg1 eventTriggerOptions:(unsigned long long)arg2 mediaContainerConfigurations:(id)arg3;	// IMP=0x00000000005ae402

@end

