//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFCore/NSCopying-Protocol.h>

@class AVMediaSelectionGroupInternal, AVMediaSelectionOption, NSArray;

@interface AVMediaSelectionGroup : NSObject <NSCopying>
{
    AVMediaSelectionGroupInternal *_mediaSelectionGroup;	// 8 = 0x8
}

+ (id)mediaSelectionOptionsFromArray:(id)arg1 withoutMediaCharacteristics:(id)arg2;	// IMP=0x00000000000fee2a
+ (id)mediaSelectionOptionsFromArray:(id)arg1 withMediaCharacteristics:(id)arg2;	// IMP=0x00000000000fec7a
+ (id)mediaSelectionOptionsFromArray:(id)arg1 filteredAndSortedAccordingToPreferredLanguages:(id)arg2;	// IMP=0x00000000000fe7e9
+ (id)mediaSelectionOptionsFromArray:(id)arg1 withLocale:(id)arg2;	// IMP=0x00000000000fe767
+ (id)playableMediaSelectionOptionsFromArray:(id)arg1;	// IMP=0x00000000000fe6e9
+ (id)mediaSelectionGroupWithAsset:(id)arg1 dictionary:(id)arg2;	// IMP=0x00000000000fe29b
- (void)setCurrentBundleIdentifier:(id)arg1;	// IMP=0x00000000000fefe8
- (id)currentBundleIdentifier;	// IMP=0x00000000000fefda
- (id)mediaSelectionOptionWithPropertyList:(id)arg1;	// IMP=0x00000000000fe6e1
- (id)_optionWithID:(id)arg1 displaysNonForcedSubtitles:(_Bool)arg2;	// IMP=0x00000000000fe6d9
@property(readonly, nonatomic) AVMediaSelectionOption *defaultOption;
- (_Bool)_isStreamingGroup;	// IMP=0x00000000000fe6c9
- (_Bool)_matchesGroupID:(id)arg1 mediaType:(id)arg2;	// IMP=0x00000000000fe637
- (id)_primaryMediaCharacteristic;	// IMP=0x00000000000fe599
- (id)_groupMediaCharacteristics;	// IMP=0x00000000000fe564
- (id)_groupMediaType;	// IMP=0x00000000000fe52f
- (id)_groupID;	// IMP=0x00000000000fe4fa
- (id)dictionary;	// IMP=0x00000000000fe4f2
@property(readonly, nonatomic) _Bool allowsEmptySelection;
@property(readonly, nonatomic) NSArray *options;
- (id)asset;	// IMP=0x00000000000fe481
- (id)description;	// IMP=0x00000000000fe3ef
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000fe3e4
- (void)dealloc;	// IMP=0x00000000000fe37d
- (id)_weakReference;	// IMP=0x00000000000fe36f
- (id)init;	// IMP=0x00000000000fe2d6

@end
