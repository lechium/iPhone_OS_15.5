//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CAMLowLightTimelapseCommand
{
    _Bool __enabled;	// 8 = 0x8
}

@property(readonly, nonatomic, getter=_isEnabled) _Bool _enabled; // @synthesize _enabled=__enabled;
- (void)executeWithContext:(id)arg1;	// IMP=0x0000000000021cbc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009b386
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000009b300
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009b273
- (id)initWithTimelapseLowLightCompensationEnabled:(_Bool)arg1;	// IMP=0x000000000001db26

@end
