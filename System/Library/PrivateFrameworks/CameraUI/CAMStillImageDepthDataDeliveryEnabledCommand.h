//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CAMStillImageDepthDataDeliveryEnabledCommand
{
    _Bool __enabled;	// 8 = 0x8
}

@property(readonly, nonatomic, getter=_isEnabled) _Bool _enabled; // @synthesize _enabled=__enabled;
- (void)executeWithContext:(id)arg1;	// IMP=0x0000000000024705
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008e47d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000008e3f7
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000008e3b9
- (id)initWithSubcommands:(id)arg1;	// IMP=0x000000000008e3a5
- (id)initWithDepthDataDeliveryEnabled:(_Bool)arg1;	// IMP=0x000000000001e2a7

@end
