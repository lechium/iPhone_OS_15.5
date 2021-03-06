//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceOverServices/VOSCommandProfileDelegate-Protocol.h>

@class NSString, VOSCommandProfile;
@protocol OS_dispatch_queue;

@interface VOSCommandManager : NSObject <VOSCommandProfileDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    VOSCommandProfile *_activeProfile;	// 16 = 0x10
    NSString *_siriShortCutToken;	// 24 = 0x18
    _Bool _activeProfileIsUserProfile;	// 32 = 0x20
    _Bool _loadShortcuts;	// 33 = 0x21
}

- (void).cxx_destruct;	// IMP=0x000000000000be86
@property(readonly, nonatomic) VOSCommandProfile *activeProfile; // @synthesize activeProfile=_activeProfile;
@property(nonatomic) _Bool loadShortcuts; // @synthesize loadShortcuts=_loadShortcuts;
@property(nonatomic) _Bool activeProfileIsUserProfile; // @synthesize activeProfileIsUserProfile=_activeProfileIsUserProfile;
- (void)_loadSystemProfile;	// IMP=0x000000000000be10
- (id)systemProfile;	// IMP=0x000000000000bc75
- (_Bool)commandHasModifiedBindingsWhenZoomEnabled:(id)arg1 withResolver:(id)arg2;	// IMP=0x000000000000bb3f
- (unsigned long long)availabilityForCommand:(id)arg1 withResolver:(id)arg2;	// IMP=0x000000000000ba08
- (unsigned long long)availabilityForShortcut:(id)arg1 withResolver:(id)arg2;	// IMP=0x000000000000b8d1
- (unsigned long long)availabilityForGesture:(id)arg1 withResolver:(id)arg2;	// IMP=0x000000000000b79a
- (_Bool)commandHasAnyBindings:(id)arg1 withResolver:(id)arg2;	// IMP=0x000000000000b664
- (id)shortcutBindingsForCommand:(id)arg1 withResolver:(id)arg2;	// IMP=0x000000000000b4f1
- (id)gestureBindingsForCommand:(id)arg1 withResolver:(id)arg2;	// IMP=0x000000000000b37e
- (id)userPresentableAllShortcutBindingsWithResolver:(id)arg1;	// IMP=0x000000000000b23d
- (id)allShortcutBindingsWithResolver:(id)arg1;	// IMP=0x000000000000b0fc
- (id)allSiriShortcutCommandsWithResolver:(id)arg1;	// IMP=0x000000000000afbb
- (id)allCommandsWithResolver:(id)arg1;	// IMP=0x000000000000ae03
- (id)commandForKeyChord:(id)arg1 withResolver:(id)arg2;	// IMP=0x000000000000abcc
- (id)commandForTouchGesture:(id)arg1 withResolver:(id)arg2;	// IMP=0x000000000000a822
- (id)validateCanRemoveKeyChord:(id)arg1 fromCommand:(id)arg2 withResolver:(id)arg3;	// IMP=0x000000000000a67e
- (id)validateCanAddKeyChord:(id)arg1 toCommand:(id)arg2 withResolver:(id)arg3;	// IMP=0x000000000000a4da
- (id)validateCanRemoveGesture:(id)arg1 fromCommand:(id)arg2 withResolver:(id)arg3;	// IMP=0x000000000000a336
- (id)validateCanAddGesture:(id)arg1 toCommand:(id)arg2 withResolver:(id)arg3;	// IMP=0x000000000000a192
- (id)removeKeyChord:(id)arg1 fromCommand:(id)arg2 withResolver:(id)arg3;	// IMP=0x0000000000009fee
- (id)addKeyChord:(id)arg1 toCommand:(id)arg2 withResolver:(id)arg3;	// IMP=0x0000000000009e4a
- (id)removeGesture:(id)arg1 fromCommand:(id)arg2 withResolver:(id)arg3;	// IMP=0x0000000000009ca6
- (id)addGesture:(id)arg1 toCommand:(id)arg2 withResolver:(id)arg3;	// IMP=0x0000000000009a6f
- (id)availableSiriShortcuts:(id)arg1;	// IMP=0x0000000000009a18
- (void)batchUpdateActiveProfile:(CDUnknownBlockType)arg1 saveIfSuccessful:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000999b
- (void)saveAsUserProfile;	// IMP=0x00000000000096e8
- (void)restoreDefaultProfile;	// IMP=0x0000000000009646
- (_Bool)_validateUserProfileDiscrepancies:(id)arg1;	// IMP=0x0000000000009190
- (void)dealloc;	// IMP=0x0000000000009109
- (void)reloadPreferringUserProfile;	// IMP=0x0000000000008eec
- (void)reloadWithSystemProfile;	// IMP=0x0000000000008e8b
@property(readonly, copy) NSString *debugDescription;
- (void)_commonInit;	// IMP=0x0000000000008c55
- (void)_commonUserProfileInit;	// IMP=0x0000000000008b9e
- (id)init;	// IMP=0x0000000000008b8c
- (id)initPreferringUserProfile;	// IMP=0x0000000000008b19
- (id)initPreferringUserProfileWithoutShortcuts;	// IMP=0x0000000000008aa9
- (id)initWithSystemProfile;	// IMP=0x000000000000890c

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

