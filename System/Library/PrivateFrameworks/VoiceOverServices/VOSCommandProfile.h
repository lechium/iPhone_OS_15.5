//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceOverServices/NSSecureCoding-Protocol.h>

@class NSMutableSet;
@protocol VOSCommandProfileDelegate;

@interface VOSCommandProfile : NSObject <NSSecureCoding>
{
    NSMutableSet *_modes;	// 8 = 0x8
    id <VOSCommandProfileDelegate> _delegate;	// 16 = 0x10
}

+ (id)_profileKeyChordsFromDictionaryValue:(id)arg1;	// IMP=0x0000000000032853
+ (void)_addSecondaryCommandsToCommand:(id)arg1 fromCommandProperties:(id)arg2 overlayProperties:(id)arg3;	// IMP=0x0000000000032583
+ (void)_addQuickNavShortcutsToCommand:(id)arg1 fromCommandProperties:(id)arg2 overlayProperties:(id)arg3;	// IMP=0x0000000000032366
+ (void)_addKeyboardShortcutsToCommand:(id)arg1 fromCommandProperties:(id)arg2 overlayProperties:(id)arg3;	// IMP=0x0000000000032149
+ (void)_addGesturesToCommand:(id)arg1 fromCommandProperties:(id)arg2 overlayProperties:(id)arg3;	// IMP=0x0000000000031e7b
+ (id)_parseProfileProperties:(id)arg1 overlayProperties:(id)arg2;	// IMP=0x000000000003178f
+ (_Bool)_overlay:(id)arg1 shouldIncludeItem:(id)arg2;	// IMP=0x000000000003171f
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002d858
- (void).cxx_destruct;	// IMP=0x0000000000032aec
@property(nonatomic) __weak id <VOSCommandProfileDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_profileCommandForCommand:(id)arg1 inMode:(id)arg2;	// IMP=0x0000000000031227
- (id)_profileModeForScreenreaderMode:(id)arg1;	// IMP=0x0000000000031062
- (id)_profileModeForResolver:(id)arg1;	// IMP=0x0000000000031000
- (id)validateCanRemoveKeyChord:(id)arg1 fromCommand:(id)arg2 withResolver:(id)arg3;	// IMP=0x0000000000030fe7
- (id)validateCanAddKeyChord:(id)arg1 toCommand:(id)arg2 withResolver:(id)arg3;	// IMP=0x0000000000030efe
- (id)validateCanRemoveGesture:(id)arg1 fromCommand:(id)arg2 withResolver:(id)arg3;	// IMP=0x0000000000030ee5
- (id)validateCanAddGesture:(id)arg1 toCommand:(id)arg2 withResolver:(id)arg3;	// IMP=0x0000000000030db4
- (id)removeKeyChord:(id)arg1 fromCommand:(id)arg2 withResolver:(id)arg3;	// IMP=0x0000000000030bd9
- (id)addKeyChord:(id)arg1 toCommand:(id)arg2 withResolver:(id)arg3;	// IMP=0x0000000000030a60
- (id)removeGesture:(id)arg1 fromCommand:(id)arg2 withResolver:(id)arg3;	// IMP=0x0000000000030821
- (id)addGesture:(id)arg1 toCommand:(id)arg2 withResolver:(id)arg3;	// IMP=0x0000000000030610
- (_Bool)commandHasModifiedBindingsWhenZoomEnabled:(id)arg1 withResolver:(id)arg2;	// IMP=0x000000000003059b
- (unsigned long long)availabilityForCommand:(id)arg1 withResolver:(id)arg2;	// IMP=0x00000000000302f2
- (unsigned long long)availabilityForShortcut:(id)arg1 withResolver:(id)arg2;	// IMP=0x00000000000301fb
- (unsigned long long)availabilityForGesture:(id)arg1 withResolver:(id)arg2;	// IMP=0x000000000002fa70
- (_Bool)commandHasAnyBindings:(id)arg1 withResolver:(id)arg2;	// IMP=0x000000000002f920
- (id)shortcutBindingsForCommand:(id)arg1 withResolver:(id)arg2;	// IMP=0x000000000002f579
- (id)gestureBindingsForCommand:(id)arg1 withResolver:(id)arg2;	// IMP=0x000000000002f208
- (id)userPresentableAllShortcutBindingsWithResolver:(id)arg1;	// IMP=0x000000000002eede
- (id)allShortcutBindingsWithResolver:(id)arg1;	// IMP=0x000000000002eb19
- (id)allSiriShortcutCommandsWithResolver:(id)arg1;	// IMP=0x000000000002ea76
- (id)allCommandsWithResolver:(id)arg1;	// IMP=0x000000000002e7ab
- (id)_resolvedSecondaryCommandForProfileCommand:(id)arg1 resolver:(id)arg2;	// IMP=0x000000000002e427
- (id)commandForKeyChord:(id)arg1 withResolver:(id)arg2;	// IMP=0x000000000002df29
- (id)commandForTouchGesture:(id)arg1 withResolver:(id)arg2;	// IMP=0x000000000002d972
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002d94f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002d860
- (id)debugDescription;	// IMP=0x000000000002d169
- (id)_initWithModes:(id)arg1;	// IMP=0x000000000002d0fe
- (id)initWithProfileProperties:(id)arg1 overlayProperties:(id)arg2;	// IMP=0x000000000002d0a4

@end
