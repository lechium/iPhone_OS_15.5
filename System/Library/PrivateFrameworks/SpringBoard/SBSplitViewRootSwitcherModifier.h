//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBSwitcherModifier;

@interface SBSplitViewRootSwitcherModifier
{
    SBSwitcherModifier *_fullScreenModifier;	// 24 = 0x18
    SBSwitcherModifier *_routingModifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000293eba
- (id)_routingModifierForEvent:(id)arg1;	// IMP=0x0000000000293ea1
- (id)_handleEvent:(id)arg1;	// IMP=0x0000000000293af9
- (id)responseForProposedChildResponse:(id)arg1 childModifier:(id)arg2 event:(id)arg3;	// IMP=0x0000000000293a1f
- (id)init;	// IMP=0x00000000002939aa

@end

