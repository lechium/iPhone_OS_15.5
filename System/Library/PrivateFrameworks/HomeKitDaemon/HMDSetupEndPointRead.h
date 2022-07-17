//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface HMDSetupEndPointRead <NSSecureCoding>
{
    unsigned long long _responseStatus;	// 40 = 0x28
    NSNumber *_videoSSRC;	// 48 = 0x30
    NSNumber *_audioSSRC;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000075f37
- (void).cxx_destruct;	// IMP=0x0000000000075f06
@property(readonly, copy, nonatomic) NSNumber *audioSSRC; // @synthesize audioSSRC=_audioSSRC;
@property(readonly, copy, nonatomic) NSNumber *videoSSRC; // @synthesize videoSSRC=_videoSSRC;
@property(readonly, nonatomic) unsigned long long responseStatus; // @synthesize responseStatus=_responseStatus;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000075ddc
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000075be7
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x0000000000075a9a
- (_Bool)_parseFromTLVDataOnFailure;	// IMP=0x0000000000075a6b
- (_Bool)_parseFromTLVDataOnSuccess;	// IMP=0x00000000000758ec
- (_Bool)_parseFromTLVData;	// IMP=0x0000000000075789
- (id)tlvData;	// IMP=0x00000000000755ea
- (id)initWithSessionIdentifier:(id)arg1 address:(id)arg2 videoSrtpParameters:(id)arg3 audioSrtpParameters:(id)arg4 responseStatus:(unsigned long long)arg5 videoSSRC:(id)arg6 audioSSRC:(id)arg7;	// IMP=0x000000000007551a

@end
