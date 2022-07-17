//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotificationsUIKit/NCNotificationGroupListDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationListComponent-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationListSectionHeaderViewDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationListViewDataSource-Protocol.h>

@class NCNotificationListCache, NCNotificationListSectionHeaderView, NCNotificationListSectionRevealHintView, NCNotificationListView, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol NCNotificationListComponent, NCNotificationStructuredSectionListDelegate;

@interface NCNotificationStructuredSectionList : NSObject <NCNotificationListViewDataSource, NCNotificationListSectionHeaderViewDelegate, NCNotificationGroupListDelegate, NCNotificationListComponent>
{
    _Bool _deviceAuthenticated;	// 8 = 0x8
    _Bool _adjustsFontForContentSizeCategory;	// 9 = 0x9
    _Bool _shouldPresentEmptySectionHint;	// 10 = 0xa
    _Bool _supportsDynamicGrouping;	// 11 = 0xb
    _Bool _historySection;	// 12 = 0xc
    _Bool _notificationListViewRevealed;	// 13 = 0xd
    _Bool _preloadsNotificationRequests;	// 14 = 0xe
    _Bool _headerViewHeightValid;	// 15 = 0xf
    _Bool _performingDynamicGrouping;	// 16 = 0x10
    _Bool _dynamicGroupingActive;	// 17 = 0x11
    _Bool _deferDynamicGroupingForPresentedLongLookOnDeviceLock;	// 18 = 0x12
    NSString *_logDescription;	// 24 = 0x18
    id <NCNotificationStructuredSectionListDelegate> _delegate;	// 32 = 0x20
    NSString *_title;	// 40 = 0x28
    unsigned long long _sectionType;	// 48 = 0x30
    NCNotificationListCache *_notificationListCache;	// 56 = 0x38
    NSString *_sectionListDestination;	// 64 = 0x40
    NSMutableSet *_hiddenNotificationGroups;	// 72 = 0x48
    NSMutableSet *_hiddenNotificationRequests;	// 80 = 0x50
    NSMutableDictionary *_filteredNotificationRequests;	// 88 = 0x58
    NSMutableDictionary *_preloadedNotificationGroups;	// 96 = 0x60
    NSMutableSet *_loadedNotificationSections;	// 104 = 0x68
    NCNotificationListSectionRevealHintView *_revealHintView;	// 112 = 0x70
    double _headerViewHeight;	// 120 = 0x78
    unsigned long long _dynamicGroupingThreshold;	// 128 = 0x80
    id <NCNotificationListComponent> _groupListPresentingLongLook;	// 136 = 0x88
    NCNotificationListView *_sectionListView;	// 144 = 0x90
    NCNotificationListSectionHeaderView *_headerView;	// 152 = 0x98
    NSMutableArray *_notificationGroups;	// 160 = 0xa0
    NSMutableSet *_groupListsToSort;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x000000000002ce29
@property(retain, nonatomic) NSMutableSet *groupListsToSort; // @synthesize groupListsToSort=_groupListsToSort;
@property(retain, nonatomic) NSMutableArray *notificationGroups; // @synthesize notificationGroups=_notificationGroups;
@property(retain, nonatomic) NCNotificationListSectionHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NCNotificationListView *sectionListView; // @synthesize sectionListView=_sectionListView;
@property(nonatomic) _Bool deferDynamicGroupingForPresentedLongLookOnDeviceLock; // @synthesize deferDynamicGroupingForPresentedLongLookOnDeviceLock=_deferDynamicGroupingForPresentedLongLookOnDeviceLock;
@property(retain, nonatomic) id <NCNotificationListComponent> groupListPresentingLongLook; // @synthesize groupListPresentingLongLook=_groupListPresentingLongLook;
@property(nonatomic, getter=isDynamicGroupingActive) _Bool dynamicGroupingActive; // @synthesize dynamicGroupingActive=_dynamicGroupingActive;
@property(nonatomic, getter=isPerformingDynamicGrouping) _Bool performingDynamicGrouping; // @synthesize performingDynamicGrouping=_performingDynamicGrouping;
@property(nonatomic) unsigned long long dynamicGroupingThreshold; // @synthesize dynamicGroupingThreshold=_dynamicGroupingThreshold;
@property(nonatomic, getter=isHeaderViewHeightValid) _Bool headerViewHeightValid; // @synthesize headerViewHeightValid=_headerViewHeightValid;
@property(nonatomic) double headerViewHeight; // @synthesize headerViewHeight=_headerViewHeight;
@property(retain, nonatomic) NCNotificationListSectionRevealHintView *revealHintView; // @synthesize revealHintView=_revealHintView;
@property(retain, nonatomic) NSMutableSet *loadedNotificationSections; // @synthesize loadedNotificationSections=_loadedNotificationSections;
@property(retain, nonatomic) NSMutableDictionary *preloadedNotificationGroups; // @synthesize preloadedNotificationGroups=_preloadedNotificationGroups;
@property(retain, nonatomic) NSMutableDictionary *filteredNotificationRequests; // @synthesize filteredNotificationRequests=_filteredNotificationRequests;
@property(retain, nonatomic) NSMutableSet *hiddenNotificationRequests; // @synthesize hiddenNotificationRequests=_hiddenNotificationRequests;
@property(retain, nonatomic) NSMutableSet *hiddenNotificationGroups; // @synthesize hiddenNotificationGroups=_hiddenNotificationGroups;
@property(retain, nonatomic) NSString *sectionListDestination; // @synthesize sectionListDestination=_sectionListDestination;
@property(nonatomic) _Bool preloadsNotificationRequests; // @synthesize preloadsNotificationRequests=_preloadsNotificationRequests;
@property(nonatomic, getter=isNotificationListViewRevealed) _Bool notificationListViewRevealed; // @synthesize notificationListViewRevealed=_notificationListViewRevealed;
@property(nonatomic, getter=isHistorySection) _Bool historySection; // @synthesize historySection=_historySection;
@property(nonatomic) _Bool supportsDynamicGrouping; // @synthesize supportsDynamicGrouping=_supportsDynamicGrouping;
@property(nonatomic) _Bool shouldPresentEmptySectionHint; // @synthesize shouldPresentEmptySectionHint=_shouldPresentEmptySectionHint;
@property(retain, nonatomic) NCNotificationListCache *notificationListCache; // @synthesize notificationListCache=_notificationListCache;
@property(nonatomic) unsigned long long sectionType; // @synthesize sectionType=_sectionType;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <NCNotificationStructuredSectionListDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
@property(nonatomic, getter=isDeviceAuthenticated) _Bool deviceAuthenticated; // @synthesize deviceAuthenticated=_deviceAuthenticated;
@property(copy, nonatomic) NSString *logDescription; // @synthesize logDescription=_logDescription;
- (void)_postPreloadedNotificationRequestsForSectionIdentifier:(id)arg1;	// IMP=0x000000000002c880
- (void)_removePreloadedNotificationRequest:(id)arg1;	// IMP=0x000000000002c786
- (void)_modifyPreloadedNotificationRequest:(id)arg1;	// IMP=0x000000000002c718
- (void)_insertPreloadedNotificationRequest:(id)arg1;	// IMP=0x000000000002c6a7
- (id)_groupListForPreloadedNotificationRequest:(id)arg1 createNewIfNecessary:(_Bool)arg2;	// IMP=0x000000000002c4c9
- (_Bool)_shouldPreloadNotificationRequest:(id)arg1;	// IMP=0x000000000002c41b
- (void)_toggleHiddenNotificationsOnAuthenticationChange:(_Bool)arg1;	// IMP=0x000000000002bdc5
- (void)_toggleDynamicGroupingIfNecessary;	// IMP=0x000000000002b92e
- (void)_unfilterNotificationRequestsForSectionIdentifier:(id)arg1;	// IMP=0x000000000002b727
- (void)_filterNotificationRequestsForSectionIdentifier:(id)arg1;	// IMP=0x000000000002b314
- (void)_removeFilteredNotificationRequest:(id)arg1;	// IMP=0x000000000002b0d2
- (void)_filterNotificationRequest:(id)arg1;	// IMP=0x000000000002ae29
- (_Bool)_shouldFilterNotificationRequest:(id)arg1;	// IMP=0x000000000002adaf
- (void)_modifyHiddenNotificationRequest:(id)arg1;	// IMP=0x000000000002aac9
- (void)_removeHiddenNotificationRequest:(id)arg1;	// IMP=0x000000000002a719
- (void)_showHiddenNotificationRequestsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x000000000002a513
- (void)_showHiddenNotificationGroupsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x000000000002a30d
- (void)_hideNotificationGroupsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0000000000029f44
- (void)_showHiddenNotificationGroupsOnDeviceAuthentication;	// IMP=0x0000000000029e63
- (void)_hideNotificationGroupsOnDeviceReauthentication;	// IMP=0x0000000000029dfe
- (void)_addHiddenNotificationGroupList:(id)arg1;	// IMP=0x0000000000029be5
- (_Bool)_shouldHideForSectionIdentifier:(id)arg1;	// IMP=0x0000000000029b3b
- (_Bool)_shouldHideNotificationGroupList:(id)arg1;	// IMP=0x0000000000029ae5
- (_Bool)_shouldHideNotificationRequest:(id)arg1;	// IMP=0x0000000000029a04
- (_Bool)_shouldClearPersistentNotificationRequests;	// IMP=0x00000000000299ea
- (id)_backgroundGroupNameBase;	// IMP=0x000000000002998b
- (id)_legibilitySettings;	// IMP=0x000000000002992c
- (id)_sectionSettingsForSectionIdentifier:(id)arg1;	// IMP=0x00000000000298a6
- (void)_insertNotificationGroupList:(id)arg1;	// IMP=0x0000000000029720
- (void)_removeNotificationGroupList:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000295c2
- (void)_removeNotificationGroupList:(id)arg1;	// IMP=0x00000000000295ab
- (unsigned long long)_insertionIndexForGroup:(id)arg1;	// IMP=0x00000000000294e5
- (void)_updatePositionOfGroup:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000291d4
- (unsigned long long)_existingIndexOfGroupForNotificationRequest:(id)arg1 withSectionIdentifier:(id)arg2 threadIdentifier:(id)arg3 inNotificationGroupLists:(id)arg4;	// IMP=0x0000000000028cce
- (unsigned long long)_existingIndexOfGroupWithSectionIdentifier:(id)arg1 threadIdentifier:(id)arg2 inNotificationGroupLists:(id)arg3;	// IMP=0x0000000000028cb1
- (unsigned long long)_existingIndexOfGroupForNotificationRequest:(id)arg1 inNotificationGroupLists:(id)arg2;	// IMP=0x0000000000028bf9
- (unsigned long long)_existingIndexOfGroupForNotificationRequest:(id)arg1;	// IMP=0x0000000000028b88
- (unsigned long long)_existingIndexOfGroupForNotificationRequestForRemoval:(id)arg1;	// IMP=0x0000000000028aae
- (unsigned long long)_existingIndexOfGroupForNotificationRequestForInsertion:(id)arg1;	// IMP=0x00000000000289c6
- (id)_newSectionHeaderView;	// IMP=0x00000000000288b3
- (id)_newGroupListForNotificationRequest:(id)arg1;	// IMP=0x0000000000028701
- (id)_notificationGroupsForInsertion;	// IMP=0x00000000000286ef
- (void)_configureSectionListView:(id)arg1;	// IMP=0x000000000002863c
- (unsigned long long)_indexOfOrderedNotificationListComponent:(id)arg1;	// IMP=0x00000000000285c5
@property(readonly, copy, nonatomic) NSArray *orderedNotificationListComponents;
@property(readonly, nonatomic, getter=isSectionVisible) _Bool sectionVisible;
- (void)_removeViewFromListAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000002849a
- (void)_insertViewToListAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000028449
- (_Bool)adjustForContentSizeCategoryChange;	// IMP=0x000000000002837b
- (void)adjustForLegibilitySettingsChange:(id)arg1;	// IMP=0x000000000002823c
- (_Bool)shouldNotificationGroupListPanHorizontally:(id)arg1;	// IMP=0x0000000000028234
- (id)legibilitySettingsForSectionHeaderView:(id)arg1;	// IMP=0x00000000000281d5
- (void)sectionHeaderViewDidDismissForceTouchView:(id)arg1;	// IMP=0x000000000002814b
- (void)sectionHeaderViewDidPresentForceTouchView:(id)arg1;	// IMP=0x00000000000280d0
- (void)sectionHeaderViewDidBeginForceTouchInteraction:(id)arg1;	// IMP=0x0000000000028082
- (id)containerViewForHeaderViewPreviewInteractionPresentedContent:(id)arg1;	// IMP=0x0000000000028023
- (void)sectionHeaderViewDidReceiveClearAllAction:(id)arg1;	// IMP=0x0000000000027f27
- (void)sectionHeaderView:(id)arg1 didReceiveClearActionForSectionIdentifier:(id)arg2;	// IMP=0x0000000000027df9
- (void)sectionHeaderViewDidTransitionToClearState:(id)arg1;	// IMP=0x0000000000027d7e
- (_Bool)isAttachmentImageFeaturedForNotificationGroupList:(id)arg1;	// IMP=0x0000000000027d76
- (_Bool)notificationGroupListShouldAllowRestacking:(id)arg1;	// IMP=0x0000000000027d6e
- (_Bool)isRichNotificationContentViewForNotificationGroupList:(id)arg1;	// IMP=0x0000000000027d66
- (_Bool)isNotificationGroupListInCollapsedStack:(id)arg1;	// IMP=0x0000000000027d22
- (_Bool)notificationGroupListShouldReloadNotificationCells:(id)arg1;	// IMP=0x0000000000027d1a
- (_Bool)isViewVisibleForNotificationGroupList:(id)arg1;	// IMP=0x0000000000027c55
- (_Bool)notificationGroupListShouldScrollToTop:(id)arg1;	// IMP=0x0000000000027bdb
- (void)notificationGroupList:(id)arg1 requestsScrollToTopOfGroupWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000027aac
- (id)notificationGroupList:(id)arg1 requestsAuxiliaryOptionsContentProviderForNotificationRequest:(id)arg2 isLongLook:(_Bool)arg3;	// IMP=0x0000000000027a20
- (void)notificationListComponent:(id)arg1 didRemoveNotificationRequest:(id)arg2;	// IMP=0x0000000000027882
- (void)notificationListComponentDidRemoveAllNotificationRequests:(id)arg1;	// IMP=0x000000000002781c
- (void)notificationListComponent:(id)arg1 isPresentingLongLookForViewController:(id)arg2;	// IMP=0x0000000000027729
- (void)notificationListComponent:(id)arg1 shouldFinishLongLookTransitionForNotificationRequest:(id)arg2 trigger:(long long)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000027577
- (id)notificationListComponent:(id)arg1 containerViewProviderForExpandedContentForViewController:(id)arg2;	// IMP=0x00000000000274f1
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000027434
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000000273a9
- (void)recycleView:(id)arg1;	// IMP=0x000000000002735d
- (double)headerViewHeightForNotificationList:(id)arg1 withWidth:(double)arg2;	// IMP=0x0000000000027234
- (id)headerViewForNotificationList:(id)arg1;	// IMP=0x0000000000027076
- (unsigned long long)notificationListViewNumberOfItems:(id)arg1;	// IMP=0x0000000000027032
- (id)notificationListView:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000026f66
- (double)notificationListView:(id)arg1 heightForItemAtIndex:(unsigned long long)arg2 withWidth:(double)arg3;	// IMP=0x0000000000026de6
@property(readonly, copy, nonatomic) NSDate *comparisonDate;
- (_Bool)containsNotificationRequest:(id)arg1;	// IMP=0x0000000000026b8b
- (void)notificationsLoadedForSectionIdentifier:(id)arg1;	// IMP=0x0000000000026a06
- (void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2;	// IMP=0x0000000000025f88
- (void)reloadNotificationRequest:(id)arg1;	// IMP=0x0000000000025d92
- (void)modifyNotificationRequest:(id)arg1;	// IMP=0x000000000002585f
- (void)removeNotificationRequest:(id)arg1;	// IMP=0x00000000000251a8
- (void)insertNotificationRequest:(id)arg1;	// IMP=0x0000000000024a71
@property(readonly, nonatomic) unsigned long long notificationCount;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) _Bool hasVisibleContentToReveal;
- (void)sortNotificationGroupListsIfNecessary;	// IMP=0x000000000002445c
- (void)collapseGroupForNotificationRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002430c
- (void)expandGroupForNotificationRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000241bf
- (void)clearAllNotificationRequests;	// IMP=0x0000000000023d0d
- (void)toggleFilteringForSectionIdentifier:(id)arg1 shouldFilter:(_Bool)arg2;	// IMP=0x0000000000023ceb
- (void)regroupNotificationGroups;	// IMP=0x0000000000023ba7
- (void)mergeNotificationGroups:(id)arg1 reorderGroupNotifications:(_Bool)arg2;	// IMP=0x00000000000234d1
- (id)removeNotificationGroupListsForMigrationPassingTest:(CDUnknownBlockType)arg1 filterRequestsPassingTest:(CDUnknownBlockType)arg2 animate:(_Bool)arg3;	// IMP=0x0000000000022f84
@property(readonly, nonatomic) NSArray *allNotificationRequests;
@property(readonly, nonatomic) NSArray *allNotificationGroups;
- (id)initWithTitle:(id)arg1 sectionType:(unsigned long long)arg2;	// IMP=0x0000000000022bd3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *preferredContentSizeCategory;
@property(readonly) Class superclass;

@end
