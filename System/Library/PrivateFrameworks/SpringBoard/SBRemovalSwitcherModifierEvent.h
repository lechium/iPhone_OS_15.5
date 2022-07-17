//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBAppLayout;

@interface SBRemovalSwitcherModifierEvent
{
    long long _layoutRole;	// 8 = 0x8
    SBAppLayout *_appLayout;	// 16 = 0x10
    long long _reason;	// 24 = 0x18
    unsigned long long _phase;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000197c2d
@property(readonly, nonatomic) unsigned long long phase; // @synthesize phase=_phase;
@property(readonly, nonatomic) long long reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) SBAppLayout *appLayout; // @synthesize appLayout=_appLayout;
@property(readonly, nonatomic) long long layoutRole; // @synthesize layoutRole=_layoutRole;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000197a81
- (long long)type;	// IMP=0x0000000000197a76
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001979e4
- (id)initWithLayoutRole:(long long)arg1 inAppLayout:(id)arg2 reason:(long long)arg3 phase:(unsigned long long)arg4;	// IMP=0x000000000019793a

@end
