//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVConference/NSSecureCoding-Protocol.h>

@interface AVCAudioPowerSpectrumBin : NSObject <NSSecureCoding>
{
    float _minFrequency;	// 8 = 0x8
    float _maxFrequency;	// 12 = 0xc
    float _powerLevel;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002e2b50
@property(readonly, nonatomic) float powerLevel; // @synthesize powerLevel=_powerLevel;
@property(readonly, nonatomic) float maxFrequency; // @synthesize maxFrequency=_maxFrequency;
@property(readonly, nonatomic) float minFrequency; // @synthesize minFrequency=_minFrequency;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002e2a95
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002e2a2d
- (void)assign:(const struct _VCAudioPowerSpectrumEntry *)arg1;	// IMP=0x00000000002e2b79

@end
