//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CAMAutoMacroEnabledCommand
{
    _Bool __enabled;	// 8 = 0x8
}

@property(readonly, nonatomic, getter=_isEnabled) _Bool _enabled; // @synthesize _enabled=__enabled;
- (void)executeWithContext:(id)arg1;	// IMP=0x00000000001c5be9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001c5b94
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001c5b0e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001c5ad0
- (id)initWithSubcommands:(id)arg1;	// IMP=0x00000000001c5abc
- (id)initWithEnabled:(_Bool)arg1;	// IMP=0x00000000001c5a78

@end
