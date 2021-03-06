//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MapsSuggestionsEntry, MapsSuggestionsShortcut, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface ShortcutEditSession : NSObject
{
    _Bool;	// 8 = 0x8
    _Bool _removing;	// 9 = 0x9
    NSArray *_cachedShortcuts;	// 16 = 0x10
    _Bool _alreadySaved;	// 24 = 0x18
    _Bool _didResignTitleFocus;	// 25 = 0x19
    _Bool _saveToFrontOfFavorites;	// 26 = 0x1a
    MapsSuggestionsShortcut *_shortcut;	// 32 = 0x20
    long long _editingModeType;	// 40 = 0x28
    CDUnknownBlockType _completionHandler;	// 48 = 0x30
    NSArray *_contacts;	// 56 = 0x38
    MapsSuggestionsEntry *_originalSuggestionsEntry;	// 64 = 0x40
    MapsSuggestionsShortcut *_originalShortcut;	// 72 = 0x48
}

+ (void)captureCreateFavoriteAction;	// IMP=0x0040000000af225d
+ (id)editSessionWithShortcut:(id)arg1;	// IMP=0x0010000000af0d72
+ (id)addSessionWithShortcut:(id)arg1;	// IMP=0x0010000000af0d09
+ (id)editSessionWithSuggestion:(id)arg1;	// IMP=0x0010000000af0ca0
+ (id)addSessionWithType:(long long)arg1 mapItem:(id)arg2;	// IMP=0x0010000000af0bcf
+ (id)addSession;	// IMP=0x0010000000af0b54
- (void).cxx_destruct;	// IMP=0x0020000000af251c
@property(retain, nonatomic) MapsSuggestionsShortcut *originalShortcut; // @synthesize originalShortcut=_originalShortcut;
@property(retain, nonatomic) MapsSuggestionsEntry *originalSuggestionsEntry; // @synthesize originalSuggestionsEntry=_originalSuggestionsEntry;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) long long editingModeType; // @synthesize editingModeType=_editingModeType;
@property(nonatomic) _Bool saveToFrontOfFavorites; // @synthesize saveToFrontOfFavorites=_saveToFrontOfFavorites;
@property(nonatomic) _Bool didResignTitleFocus; // @synthesize didResignTitleFocus=_didResignTitleFocus;
@property(nonatomic) _Bool alreadySaved; // @synthesize alreadySaved=_alreadySaved;
@property(retain, nonatomic) MapsSuggestionsShortcut *shortcut; // @synthesize shortcut=_shortcut;
@property(readonly, nonatomic) _Bool editOnlyLocation;
@property(readonly, nonatomic) _Bool editOnlyAddress;
- (void)_touchMapsSuggestionsEngine;	// IMP=0x0010000000af2223
- (id)shortcutManager;	// IMP=0x0010000000af21dc
- (void)removeFromShortcutsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000af1f9a
- (void)saveWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000af1a08
- (_Bool)shortcutsContainItem:(id)arg1;	// IMP=0x0010000000af1775
- (void)removeSharing:(id)arg1;	// IMP=0x0010000000af1671
- (void)addSharing:(id)arg1;	// IMP=0x0010000000af15ec
- (void)setAdjustedCoordinate:(struct CLLocationCoordinate2D)arg1;	// IMP=0x0010000000af1432
- (void)setType:(long long)arg1;	// IMP=0x0010000000af140d
- (void)setMapItem:(id)arg1;	// IMP=0x0010000000af1382
- (void)setName:(id)arg1;	// IMP=0x0010000000af1331
@property(readonly, nonatomic) _Bool canChangeType;
@property(readonly, nonatomic) _Bool canBeSaved;
@property(readonly, nonatomic) _Bool isSetupPlaceholder;
@property(readonly, nonatomic) NSString *titleForAddressPicker;
- (id)init;	// IMP=0x0010000000af0e00

@end

