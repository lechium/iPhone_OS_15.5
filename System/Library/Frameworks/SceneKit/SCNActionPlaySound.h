//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface SCNActionPlaySound
{
    struct SCNCPlaySound *_mycaction;	// 8 = 0x8
}

+ (id)playAudioSource:(id)arg1 waitForCompletion:(_Bool)arg2;	// IMP=0x0000000000091ffc
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000091ff4
- (id)parameters;	// IMP=0x0000000000092102
- (id)reversedAction;	// IMP=0x00000000000920e8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000092066
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000091f68
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000091e3b
- (void)_setupDuration;	// IMP=0x0000000000091def
- (id)init;	// IMP=0x0000000000091d3a

@end
