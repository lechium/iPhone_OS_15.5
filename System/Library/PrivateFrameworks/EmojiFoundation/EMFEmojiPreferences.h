//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmojiFoundation/EMFEmojiPreferenceActions-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface EMFEmojiPreferences : NSObject <EMFEmojiPreferenceActions>
{
    NSMutableDictionary *_defaults;	// 8 = 0x8
    _Bool _isDefaultDirty;	// 16 = 0x10
    NSMutableDictionary *_usageHistory;	// 24 = 0x18
    NSMutableArray *_recents;	// 32 = 0x20
    NSMutableDictionary *_typingNames;	// 40 = 0x28
    NSMutableDictionary *_skinToneBaseKeyPreferences;	// 48 = 0x30
    NSMutableDictionary *_categoryIndexes;	// 56 = 0x38
    long long _currentSequence;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_differentialPrivacyQueue;	// 72 = 0x48
    unsigned long long _maximumRecentsCount;	// 80 = 0x50
}

+ (id)_cachedFlagCategoryEmoji:(CDUnknownBlockType)arg1;	// IMP=0x0000000000009180
+ (_Bool)deviceStateIsLocked;	// IMP=0x0000000000009178
+ (id)_recentStringsInCharacterSet:(id)arg1;	// IMP=0x0000000000006048
+ (id)_allRecentStrings;	// IMP=0x0000000000006034
+ (id)_recentEmojiStrings;	// IMP=0x0000000000005fce
+ (id)_cacheDomain;	// IMP=0x0000000000005fc1
+ (id)defaultsDomain;	// IMP=0x0000000000005fb4
- (void).cxx_destruct;	// IMP=0x0000000000009305
@property(nonatomic) unsigned long long maximumRecentsCount; // @synthesize maximumRecentsCount=_maximumRecentsCount;
- (id)typingNameForEmoji:(id)arg1;	// IMP=0x0000000000008f83
- (unsigned long long)previouslyUsedIndexInCategory:(id)arg1;	// IMP=0x0000000000008efb
- (id)lastUsedVariantEmojiForEmoji:(id)arg1;	// IMP=0x0000000000008cae
- (id)recentVariantEmojiForEmoji:(id)arg1;	// IMP=0x0000000000008b11
- (_Bool)hasLastUsedVariantForEmoji:(id)arg1;	// IMP=0x0000000000008a33
- (void)didDisplaySkinToneHelp;	// IMP=0x00000000000089f3
- (void)didViewEmojiIndex:(long long)arg1 forCategory:(id)arg2;	// IMP=0x00000000000088e5
- (_Bool)shouldCountEmojiStringForUsageHistory:(id)arg1;	// IMP=0x00000000000087c7
- (void)didUseEmoji:(id)arg1 usageMode:(id)arg2 typingName:(id)arg3;	// IMP=0x000000000000808a
- (void)didUseEmoji:(id)arg1 usageMode:(id)arg2;	// IMP=0x0000000000008075
- (void)didUseEmoji:(id)arg1;	// IMP=0x000000000000805c
- (double)scoreForEmojiString:(id)arg1;	// IMP=0x0000000000007eb3
- (double)scoreForSequence:(long long)arg1;	// IMP=0x0000000000007e81
- (void)migrateInDidDisplaySkinToneHelp:(_Bool)arg1;	// IMP=0x0000000000007e1e
- (void)migrateInPreviouslyUsedCategoryIndexes:(id)arg1;	// IMP=0x0000000000007db5
- (void)migrateInPreviouslyUsedCategory:(id)arg1;	// IMP=0x0000000000007d6e
- (void)migrateInSkinTonePreferences:(id)arg1;	// IMP=0x0000000000007d05
- (void)migrateInRecentEmoji:(id)arg1 usages:(id)arg2 typingNames:(id)arg3;	// IMP=0x0000000000007797
- (void)_cleanUpOldFlagsCaches;	// IMP=0x00000000000073d9
- (void)_pruneOldestEmojiUsageFromHistory;	// IMP=0x0000000000006f87
- (void)_pruneInvalidEmojiFromHistory;	// IMP=0x0000000000006d68
- (void)_checkForDingbatDuplicates;	// IMP=0x0000000000006acd
- (void)migrateFromMajorOSVersion:(long long)arg1;	// IMP=0x0000000000006a7d
- (void)loadDefaultsIfNecessary;	// IMP=0x0000000000006a62
- (void)resetEmojiDefaults;	// IMP=0x00000000000069c2
- (void)writeEmojiDefaultsAndNotify:(_Bool)arg1;	// IMP=0x000000000000689e
- (void)writeEmojiDefaults;	// IMP=0x0000000000006887
- (void)_readPreferencesFromDefaults;	// IMP=0x0000000000006752
- (void)readEmojiDefaults;	// IMP=0x0000000000006670
@property(readonly, nonatomic) _Bool hasDisplayedSkinToneHelp;
@property(readonly, nonatomic) NSString *previouslyUsedCategory;
- (id)recentsInCharacterSet:(id)arg1;	// IMP=0x0000000000006335
@property(readonly, nonatomic) NSArray *allRecents;
@property(readonly, nonatomic) NSArray *recentEmojis;
- (id)init;	// IMP=0x0000000000005f78
- (void)_setRecentStrings:(id)arg1;	// IMP=0x0000000000009364

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

