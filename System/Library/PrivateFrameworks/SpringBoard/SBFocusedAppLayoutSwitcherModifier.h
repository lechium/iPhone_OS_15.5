//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBAppLayout;

@interface SBFocusedAppLayoutSwitcherModifier
{
    SBAppLayout *_focusedAppLayout;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000560ea8
- (_Bool)shouldShowBackdropViewAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000560df5
- (id)handleRemovalEvent:(id)arg1;	// IMP=0x0000000000560cea
- (id)handleUpdateFocusedAppLayoutEvent:(id)arg1;	// IMP=0x000000000056061f
- (id)visibleAppLayouts;	// IMP=0x0000000000560545
- (id)initWithFocusedAppLayout:(id)arg1;	// IMP=0x000000000056045c

@end

