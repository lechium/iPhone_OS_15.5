//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBHIconModel, SBIconListModel;
@protocol SBRootFolderDelegate;

@interface SBRootFolder
{
    _Bool _supportsTodayList;	// 32 = 0x20
    id <SBRootFolderDelegate> _delegate;	// 40 = 0x28
    SBHIconModel *_model;	// 48 = 0x30
}

+ (_Bool)isRootFolderClass;	// IMP=0x00000000000aab3f
- (void).cxx_destruct;	// IMP=0x00000000000ab21f
@property(readonly, nonatomic) _Bool supportsTodayList; // @synthesize supportsTodayList=_supportsTodayList;
@property(nonatomic) __weak SBHIconModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <SBRootFolderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)enumerateExtraListsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ab07e
- (_Bool)isExtraListIndex:(unsigned long long)arg1;	// IMP=0x00000000000aafea
- (void)removeList:(id)arg1;	// IMP=0x00000000000aaf7b
- (unsigned long long)hiddenIndexOfList:(id)arg1;	// IMP=0x00000000000aaeeb
- (unsigned long long)visibleIndexOfList:(id)arg1;	// IMP=0x00000000000aae5b
- (unsigned long long)indexOfList:(id)arg1;	// IMP=0x00000000000aaddf
- (unsigned long long)_specialIndexOfList:(id)arg1;	// IMP=0x00000000000aac8c
- (id)listAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000aabef
- (_Bool)canAddIconCount:(unsigned long long)arg1 startingAtList:(id)arg2;	// IMP=0x00000000000aab47
- (_Bool)isRootFolder;	// IMP=0x00000000000aab37
- (id)nodeDescriptionWithPrefix:(id)arg1;	// IMP=0x00000000000aa8f8
- (id)nodeIdentifier;	// IMP=0x00000000000aa8f0
- (void)_didExplicitlyRemoveHiddenLists:(id)arg1;	// IMP=0x00000000000aa6a8
@property(readonly, nonatomic) _Bool containsVisibleNonDefaultSizedIconExcludingTodayList;
@property(readonly, nonatomic) _Bool containsNonDefaultSizedIconExcludingTodayList;
@property(readonly, nonatomic) _Bool containsVisibleWidgetIconExcludingTodayList;
@property(readonly, nonatomic) _Bool containsWidgetIconExcludingTodayList;
- (id)icons;	// IMP=0x00000000000aa26e
- (_Bool)canBounceIcon:(id)arg1;	// IMP=0x00000000000aa114
- (void)checkIgnoredListConsistency;	// IMP=0x00000000000aa10e
- (_Bool)isIconInIgnoredList:(id)arg1;	// IMP=0x00000000000aa0bb
- (_Bool)isIconAtIndexPathInIgnoredList:(id)arg1;	// IMP=0x00000000000aa09c
@property(readonly, nonatomic) _Bool supportsIgnoredList;
@property(retain, nonatomic, setter=_setIgnoredList:) SBIconListModel *ignoredList;
- (void)enumerateTodayListIconsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a9e3c
- (void)enumerateTodayListsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a9d83
- (_Bool)isIconAtIndexPathInFavoriteTodayList:(id)arg1;	// IMP=0x00000000000a9d64
@property(retain, nonatomic, setter=_setFavoriteTodayList:) SBIconListModel *favoriteTodayList;
- (_Bool)isIconAtIndexPathInTodayList:(id)arg1;	// IMP=0x00000000000a9c98
@property(retain, nonatomic, setter=_setTodayList:) SBIconListModel *todayList;
- (_Bool)supportsTodayPage;	// IMP=0x00000000000a9be3
- (_Bool)isIconAtIndexPathInDock:(id)arg1 includingDockFolders:(_Bool)arg2;	// IMP=0x00000000000a9b74
- (_Bool)isIconAtIndexPathInDock:(id)arg1;	// IMP=0x00000000000a9b60
- (void)delegateDidChange:(id)arg1;	// IMP=0x00000000000a9a85
@property(retain, nonatomic, setter=_setDock:) SBIconListModel *dock;
@property(readonly, nonatomic) _Bool supportsDock;
@property(readonly, nonatomic) _Bool supportsBadging;
- (_Bool)_compactsFirstList;	// IMP=0x00000000000a9940
- (_Bool)canEditDisplayName;	// IMP=0x00000000000a9938
- (_Bool)canRemoveIcons;	// IMP=0x00000000000a9930

@end

