//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPNumberParser.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@interface HMDCameraRecordingAudioSampleRate : HAPNumberParser <NSCopying, NSSecureCoding>
{
    long long _type;	// 8 = 0x8
}

+ (id)arrayWithAudioSampleRates:(id)arg1;	// IMP=0x0000000000b46d30
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000b46d28
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b46c2f
- (id)initWithSampleRate:(long long)arg1;	// IMP=0x0000000000b46beb
- (id)initWithTLVData:(id)arg1;	// IMP=0x0000000000b46b94
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x0000000000b46ad9
- (id)description;	// IMP=0x0000000000b46a65
- (unsigned long long)hash;	// IMP=0x0000000000b46a53
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b469d0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000b46939
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000b4687c

@end
