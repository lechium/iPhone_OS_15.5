//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CAMEffectsPreviewVideoDataOutputEnabledCommand
{
    _Bool __enabled;	// 8 = 0x8
}

@property(readonly, nonatomic, getter=_isEnabled) _Bool _enabled; // @synthesize _enabled=__enabled;
- (void)executeWithContext:(id)arg1;	// IMP=0x0000000000023621
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010b13a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000010b0b4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000010b027
- (id)initWithVideoDataOutputEnabled:(_Bool)arg1;	// IMP=0x000000000001e05f

@end
