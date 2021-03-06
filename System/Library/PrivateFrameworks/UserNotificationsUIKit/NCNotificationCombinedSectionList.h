//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

@interface NCNotificationCombinedSectionList
{
    _Bool _adjustsFontForContentSizeCategory;	// 8 = 0x8
    NSMutableArray *_sectionLists;	// 16 = 0x10
    NSMutableArray *_chronologicalSectionLists;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000b173f
@property(retain, nonatomic) NSMutableArray *chronologicalSectionLists; // @synthesize chronologicalSectionLists=_chronologicalSectionLists;
@property(retain, nonatomic) NSMutableArray *sectionLists; // @synthesize sectionLists=_sectionLists;
- (void)setAdjustsFontForContentSizeCategory:(_Bool)arg1;	// IMP=0x00000000000b16e5
- (_Bool)adjustsFontForContentSizeCategory;	// IMP=0x00000000000b16d5
- (void)_invalidateSectionListViewForChronologicalSectionsIfNecessary;	// IMP=0x00000000000b164e
- (id)_allSectionLists;	// IMP=0x00000000000b1576
- (void)_performOperationOnAllSectionLists:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b143f
- (id)orderedNotificationListComponents;	// IMP=0x00000000000b119c
- (void)adjustForLegibilitySettingsChange:(id)arg1;	// IMP=0x00000000000b10ca
- (_Bool)adjustForContentSizeCategoryChange;	// IMP=0x00000000000b106b
- (void)notificationListComponentDidRemoveAllNotificationRequests:(id)arg1;	// IMP=0x00000000000b0fec
- (void)notificationListComponent:(id)arg1 didRemoveNotificationRequest:(id)arg2;	// IMP=0x00000000000b0f6d
- (double)notificationListView:(id)arg1 heightForItemAtIndex:(unsigned long long)arg2 withWidth:(double)arg3;	// IMP=0x00000000000b0e1a
- (id)notificationListView:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;	// IMP=0x00000000000b0d08
- (_Bool)containsNotificationRequest:(id)arg1;	// IMP=0x00000000000b0b88
- (void)collapseGroupForNotificationRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b0a8a
- (void)expandGroupForNotificationRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b098c
- (id)allNotificationRequests;	// IMP=0x00000000000b07c3
- (void)toggleFilteringForSectionIdentifier:(id)arg1 shouldFilter:(_Bool)arg2;	// IMP=0x00000000000b06e3
- (void)notificationsLoadedForSectionIdentifier:(id)arg1;	// IMP=0x00000000000b0611
- (void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2;	// IMP=0x00000000000b0513
- (void)reloadNotificationRequest:(id)arg1;	// IMP=0x00000000000b0441
- (void)setDeviceAuthenticated:(_Bool)arg1;	// IMP=0x00000000000b03ae
- (unsigned long long)notificationCount;	// IMP=0x00000000000b0257
- (unsigned long long)count;	// IMP=0x00000000000b01a3
- (void)sortNotificationGroupListsIfNecessary;	// IMP=0x00000000000b0120
- (void)mergeNotificationGroups:(id)arg1 reorderGroupNotifications:(_Bool)arg2;	// IMP=0x00000000000b00df
- (_Bool)hasVisibleContentToReveal;	// IMP=0x00000000000aff9d
- (void)clearAllNotificationRequests;	// IMP=0x00000000000aff40
- (_Bool)containsSectionList:(id)arg1;	// IMP=0x00000000000afe97
- (unsigned long long)indexOfSectionList:(id)arg1;	// IMP=0x00000000000afe85
- (id)sectionListAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000afdd4
- (void)removeNotificationSectionList:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000afba9
- (void)insertNotificationSectionListChronologically:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000afa99
- (void)insertNotificationSectionList:(id)arg1 atIndex:(unsigned long long)arg2 animated:(_Bool)arg3;	// IMP=0x00000000000af8f2
- (id)initWithTitle:(id)arg1 sectionType:(unsigned long long)arg2;	// IMP=0x00000000000af895

@end

