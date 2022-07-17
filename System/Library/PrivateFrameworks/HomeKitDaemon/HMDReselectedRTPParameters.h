//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

#import <HomeKitDaemon/HAPTLVCreateParse-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface HMDReselectedRTPParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>
{
    NSNumber *_maximumBitrate;	// 8 = 0x8
    NSNumber *_minimumBitrate;	// 16 = 0x10
    NSNumber *_rtcpInterval;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000007a2e3
- (void).cxx_destruct;	// IMP=0x000000000007a2a1
@property(readonly, copy, nonatomic) NSNumber *rtcpInterval; // @synthesize rtcpInterval=_rtcpInterval;
@property(readonly, copy, nonatomic) NSNumber *minimumBitrate; // @synthesize minimumBitrate=_minimumBitrate;
@property(readonly, copy, nonatomic) NSNumber *maximumBitrate; // @synthesize maximumBitrate=_maximumBitrate;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007a18b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000079f2c
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x0000000000079de1
- (_Bool)_parseFromTLVData;	// IMP=0x0000000000079c32
- (id)tlvData;	// IMP=0x0000000000079b05
- (id)initWithMaximumBitrate:(id)arg1 minimumBitrate:(id)arg2 rtcpInterval:(id)arg3;	// IMP=0x0000000000079a3f

@end
