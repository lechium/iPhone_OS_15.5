//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBAppLayout;

@interface SBHighlightSwitcherModifierEvent
{
    long long _layoutRole;	// 8 = 0x8
    SBAppLayout *_appLayout;	// 16 = 0x10
    unsigned long long _phase;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001b7c6d
@property(readonly, nonatomic) unsigned long long phase; // @synthesize phase=_phase;
@property(readonly, nonatomic) SBAppLayout *appLayout; // @synthesize appLayout=_appLayout;
@property(readonly, nonatomic) long long layoutRole; // @synthesize layoutRole=_layoutRole;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b7bb7
- (long long)type;	// IMP=0x00000000001b7bac
- (id)initWithLayoutRole:(long long)arg1 inAppLayout:(id)arg2 phase:(unsigned long long)arg3;	// IMP=0x00000000001b7b1a

@end
