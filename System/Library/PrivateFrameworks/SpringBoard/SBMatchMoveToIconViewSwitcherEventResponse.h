//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBAppLayout;

@interface SBMatchMoveToIconViewSwitcherEventResponse
{
    _Bool _active;	// 8 = 0x8
    SBAppLayout *_appLayout;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000055532d
@property(readonly, nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) SBAppLayout *appLayout; // @synthesize appLayout=_appLayout;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000055524b
- (id)initWithAppLayout:(id)arg1 active:(_Bool)arg2;	// IMP=0x00000000005551cb
- (long long)type;	// IMP=0x00000000005551c0

@end

