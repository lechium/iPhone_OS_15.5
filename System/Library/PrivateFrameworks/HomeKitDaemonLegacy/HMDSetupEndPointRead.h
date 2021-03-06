//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface HMDSetupEndPointRead <NSSecureCoding>
{
    unsigned long long _responseStatus;	// 40 = 0x28
    NSNumber *_videoSSRC;	// 48 = 0x30
    NSNumber *_audioSSRC;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000764af
- (void).cxx_destruct;	// IMP=0x000000000007647e
@property(readonly, copy, nonatomic) NSNumber *audioSSRC; // @synthesize audioSSRC=_audioSSRC;
@property(readonly, copy, nonatomic) NSNumber *videoSSRC; // @synthesize videoSSRC=_videoSSRC;
@property(readonly, nonatomic) unsigned long long responseStatus; // @synthesize responseStatus=_responseStatus;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000076354
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007615f
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x0000000000076012
- (_Bool)_parseFromTLVDataOnFailure;	// IMP=0x0000000000075fe3
- (_Bool)_parseFromTLVDataOnSuccess;	// IMP=0x0000000000075e64
- (_Bool)_parseFromTLVData;	// IMP=0x0000000000075d01
- (id)tlvData;	// IMP=0x0000000000075b62
- (id)initWithSessionIdentifier:(id)arg1 address:(id)arg2 videoSrtpParameters:(id)arg3 audioSrtpParameters:(id)arg4 responseStatus:(unsigned long long)arg5 videoSSRC:(id)arg6 audioSSRC:(id)arg7;	// IMP=0x0000000000075a92

@end

