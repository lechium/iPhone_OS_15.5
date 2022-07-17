//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIFocusBehavior-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIFocusBehavior_CarPlay : NSObject <_UIFocusBehavior>
{
}

+ (id)sharedInstance;	// IMP=0x0000000000fe5557
- (_Bool)supportsLinearMovementDebugOverlay;	// IMP=0x0000000000fe57cf
- (_Bool)tabBasedMovementLoops;	// IMP=0x0000000000fe57c7
- (long long)skipKeyCommandsForKeyEvents;	// IMP=0x0000000000fe57bf
- (long long)deliverKeyEventsToFocusEngine;	// IMP=0x0000000000fe57b7
- (_Bool)shouldSupressIndirectMovementOnSelect;	// IMP=0x0000000000fe57af
- (_Bool)shouldEnableFocusOnSelect;	// IMP=0x0000000000fe57a7
- (long long)indirectMovementPriority;	// IMP=0x0000000000fe579f
- (_Bool)supportsTabKey;	// IMP=0x0000000000fe5797
- (_Bool)supportsArrowKeys;	// IMP=0x0000000000fe578f
- (_Bool)supportsGameControllers;	// IMP=0x0000000000fe5787
- (_Bool)shouldConvertIndirectTapsIntoArrowKeys;	// IMP=0x0000000000fe577f
- (_Bool)supportsIndirectPanningMovement;	// IMP=0x0000000000fe5777
- (_Bool)showsFocusRingForItem:(id)arg1;	// IMP=0x0000000000fe576f
- (_Bool)supportsParentFocusRings;	// IMP=0x0000000000fe5767
- (long long)focusRingVisibility;	// IMP=0x0000000000fe575f
- (long long)buttonSelectionMode;	// IMP=0x0000000000fe5754
- (_Bool)wantsTreeLocking;	// IMP=0x0000000000fe574c
- (_Bool)throttlesProgrammaticFocusUpdates;	// IMP=0x0000000000fe5744
- (long long)focusCastingMode;	// IMP=0x0000000000fe573c
- (_Bool)supportsClipToBounds;	// IMP=0x0000000000fe5728
- (_Bool)supportViewTransparencyAndMultipleWindows;	// IMP=0x0000000000fe5720
- (_Bool)treatFirstAndLastHeadingsAsGlobal;	// IMP=0x0000000000fe5718
- (_Bool)defaultValueForSelectionFollowsFocusInTableView:(id)arg1;	// IMP=0x0000000000fe5710
- (_Bool)defaultValueForSelectionFollowsFocusInCollectionView:(id)arg1;	// IMP=0x0000000000fe5708
- (_Bool)preventsCellFocusabilityWhileEditing;	// IMP=0x0000000000fe5700
- (long long)cellFocusability;	// IMP=0x0000000000fe56f8
- (_Bool)shouldUseAccessibilityCompareForItemGeometry;	// IMP=0x0000000000fe56f0
- (_Bool)enforcesStrictTargetContentOffsetAdjustmentBehavior;	// IMP=0x0000000000fe56e8
- (_Bool)supportsFocusGroups;	// IMP=0x0000000000fe56e0
- (_Bool)includesContentScrollViewInPreferredFocusEnvironments;	// IMP=0x0000000000fe56d8
- (_Bool)searchBarTextFieldCanBecomeFocused;	// IMP=0x0000000000fe56d0
- (_Bool)tabBarButtonCanBecomeFocused;	// IMP=0x0000000000fe56c8
- (_Bool)tabBarCanBecomeFocused;	// IMP=0x0000000000fe56c0
- (_Bool)textViewCanBecomeFocused:(id)arg1;	// IMP=0x0000000000fe56ab
- (_Bool)controlCanBecomeFocused:(id)arg1;	// IMP=0x0000000000fe56a3
- (_Bool)ignoresKeyWindowStatusWhenRestoringFocus;	// IMP=0x0000000000fe569b
- (long long)focusDeferral;	// IMP=0x0000000000fe5693
- (_Bool)syncsFocusAndResponder;	// IMP=0x0000000000fe568b
- (long long)requiredInputDevices;	// IMP=0x0000000000fe5683
- (_Bool)honorsFocusSystemEnabledInfoPlistKey;	// IMP=0x0000000000fe567b
- (_Bool)wantsFocusSystemForScene:(id)arg1;	// IMP=0x0000000000fe5586

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
