//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/NSFastEnumeration-Protocol.h>
#import <SpringBoardHome/SBIconObserver-Protocol.h>
#import <SpringBoardHome/SBLeafIconDataSource-Protocol.h>

@class NSArray, NSHashTable, NSString, SBHLibraryAdditionalItemsIndicatorIcon, SBHLibraryCategoryFolder, SBHLibraryCategoryIdentifier;
@protocol SBIconDelegate;

@interface SBHLibraryCategory : NSObject <SBLeafIconDataSource, SBIconObserver, NSFastEnumeration>
{
    NSHashTable *_observers;	// 8 = 0x8
    long long _aggregrateIconLabelAccessoryType;	// 16 = 0x10
    SBHLibraryCategoryFolder *_compactPodFolder;	// 24 = 0x18
    SBHLibraryCategoryFolder *_compactPodAdditionalItemsFolder;	// 32 = 0x20
    SBHLibraryCategoryFolder *_expandedPodFolder;	// 40 = 0x28
    SBHLibraryAdditionalItemsIndicatorIcon *_additionalItemsIndicatorIcon;	// 48 = 0x30
    SBHLibraryCategoryIdentifier *_categoryIdentifier;	// 56 = 0x38
    long long _overflowBehavior;	// 64 = 0x40
    id <SBIconDelegate> _iconDelegate;	// 72 = 0x48
    NSArray *_icons;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000c7ba5
@property(readonly, copy, nonatomic) NSArray *icons; // @synthesize icons=_icons;
@property(nonatomic) __weak id <SBIconDelegate> iconDelegate; // @synthesize iconDelegate=_iconDelegate;
@property(nonatomic) long long overflowBehavior; // @synthesize overflowBehavior=_overflowBehavior;
@property(copy, nonatomic) SBHLibraryCategoryIdentifier *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000c7b40
- (void)_refreshAggregateIconLabelAccessoryType;	// IMP=0x00000000000c794c
@property(readonly, copy, nonatomic) NSString *leafIdentifier;
- (long long)labelAccessoryTypeForIcon:(id)arg1;	// IMP=0x00000000000c7874
- (void)iconAccessoriesDidUpdate:(id)arg1;	// IMP=0x00000000000c7862
@property(readonly, nonatomic) SBHLibraryAdditionalItemsIndicatorIcon *additionalItemsIndicatorIcon; // @synthesize additionalItemsIndicatorIcon=_additionalItemsIndicatorIcon;
@property(readonly, copy, nonatomic) SBHLibraryCategoryFolder *expandedPodFolder; // @synthesize expandedPodFolder=_expandedPodFolder;
@property(readonly, copy, nonatomic) SBHLibraryCategoryFolder *compactPodAdditionalItemsFolder; // @synthesize compactPodAdditionalItemsFolder=_compactPodAdditionalItemsFolder;
@property(readonly, copy, nonatomic) SBHLibraryCategoryFolder *compactPodFolder; // @synthesize compactPodFolder=_compactPodFolder;
- (id)_buildDisplayedIconsForFolder:(id)arg1 icons:(id)arg2;	// IMP=0x00000000000c7276
- (void)_noteFolderDidUpdateIcons:(id)arg1;	// IMP=0x00000000000c7100
- (void)_noteFolderWillUpdateIcons:(id)arg1;	// IMP=0x00000000000c6f8a
- (void)_noteCategoryDidUpdate;	// IMP=0x00000000000c6e3e
- (void)_noteCategoryWillUpdate;	// IMP=0x00000000000c6cf2
- (_Bool)updateCategoryWithIcons:(id)arg1;	// IMP=0x00000000000c601f
- (_Bool)updateCategoryIdentifier:(id)arg1;	// IMP=0x00000000000c5fa3
- (void)_localizedDisplayNameChangedTo:(id)arg1;	// IMP=0x00000000000c5dda
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c5d73
- (_Bool)isEqualToCategory:(id)arg1;	// IMP=0x00000000000c5c79
@property(readonly, copy) NSString *description;
- (void)removeObserver:(id)arg1;	// IMP=0x00000000000c5b49
- (void)addObserver:(id)arg1;	// IMP=0x00000000000c5b2c
- (id)init;	// IMP=0x00000000000c5ac6
- (_Bool)iconSupportsUninstall:(id)arg1;	// IMP=0x000000000018855a
- (id)icon:(id)arg1 displayNameForLocation:(id)arg2;	// IMP=0x000000000018850a
- (unsigned long long)priorityForIcon:(id)arg1;	// IMP=0x0000000000188502
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *configurationStorageIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

