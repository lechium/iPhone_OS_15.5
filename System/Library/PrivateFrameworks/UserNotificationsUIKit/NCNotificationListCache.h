//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotificationsUIKit/PLContentSizeCategoryAdjusting-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString;
@protocol NCNotificationListCacheDelegate;

@interface NCNotificationListCache : NSObject <PLContentSizeCategoryAdjusting>
{
    _Bool _adjustsFontForContentSizeCategory;	// 8 = 0x8
    id <NCNotificationListCacheDelegate> _delegate;	// 16 = 0x10
    NSMutableDictionary *_contentRevealedCellHeightCache;	// 24 = 0x18
    NSMutableDictionary *_contentHiddenCellHeightCache;	// 32 = 0x20
    NSMutableSet *_notificationListCellCache;	// 40 = 0x28
    NSMutableSet *_notificationListCoalescingHeaderCache;	// 48 = 0x30
    NSMutableSet *_notificationListCoalescingControlsCache;	// 56 = 0x38
    NSMutableDictionary *_notificationListCellsForRequests;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000bf7dc
@property(retain, nonatomic) NSMutableDictionary *notificationListCellsForRequests; // @synthesize notificationListCellsForRequests=_notificationListCellsForRequests;
@property(retain, nonatomic) NSMutableSet *notificationListCoalescingControlsCache; // @synthesize notificationListCoalescingControlsCache=_notificationListCoalescingControlsCache;
@property(retain, nonatomic) NSMutableSet *notificationListCoalescingHeaderCache; // @synthesize notificationListCoalescingHeaderCache=_notificationListCoalescingHeaderCache;
@property(retain, nonatomic) NSMutableSet *notificationListCellCache; // @synthesize notificationListCellCache=_notificationListCellCache;
@property(retain, nonatomic) NSMutableDictionary *contentHiddenCellHeightCache; // @synthesize contentHiddenCellHeightCache=_contentHiddenCellHeightCache;
@property(retain, nonatomic) NSMutableDictionary *contentRevealedCellHeightCache; // @synthesize contentRevealedCellHeightCache=_contentRevealedCellHeightCache;
@property(nonatomic) __weak id <NCNotificationListCacheDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
- (id)_cachedRequestMatchingRequest:(id)arg1;	// IMP=0x00000000000bf546
- (void)_clearAllHeightCaches;	// IMP=0x00000000000bf4c5
- (id)_cachedNotificationListCellForRequest:(id)arg1 viewControllerDelegate:(id)arg2 shouldConfigure:(_Bool)arg3;	// IMP=0x00000000000bef86
- (id)_cachedHeaderCellWithTitle:(id)arg1;	// IMP=0x00000000000bed2e
- (id)_newCellForNotificationRequest:(id)arg1 viewControllerDelegate:(id)arg2;	// IMP=0x00000000000bebe8
- (_Bool)adjustForContentSizeCategoryChange;	// IMP=0x00000000000be9b9
@property(readonly, nonatomic) unsigned long long activeNotificationCellCount;
@property(readonly, nonatomic) unsigned long long currentCacheSizeCount;
- (void)recycleNotificationListCoalescingControlsCell:(id)arg1;	// IMP=0x00000000000be8ea
- (id)coalescingControlsCellWithWidth:(double)arg1;	// IMP=0x00000000000be7b5
- (void)recycleNotificationListCoalescingHeaderCell:(id)arg1;	// IMP=0x00000000000be712
- (id)coalescingHeaderCellWithTitle:(id)arg1 width:(double)arg2;	// IMP=0x00000000000be5e8
- (_Bool)recycleNotificationListCell:(id)arg1;	// IMP=0x00000000000be329
- (id)listCellForNotificationRequest:(id)arg1 viewControllerDelegate:(id)arg2 createNewIfNecessary:(_Bool)arg3 shouldConfigure:(_Bool)arg4;	// IMP=0x00000000000be1a3
- (_Bool)invalidateCachedHeightIfNecessaryForNotificationRequest:(id)arg1 updatedHeight:(double)arg2 isContentRevealed:(_Bool)arg3;	// IMP=0x00000000000bdfaa
- (double)heightForNotificationRequest:(id)arg1 withFrameWidth:(double)arg2 isContentRevealed:(_Bool)arg3 shouldCalculateHeight:(_Bool)arg4;	// IMP=0x00000000000bdc08
- (void)updateNotificationRequest:(id)arg1;	// IMP=0x00000000000bdad1
- (void)removeNotificationRequest:(id)arg1;	// IMP=0x00000000000bd9ed
- (void)clearCachedHeightsForNotificationRequest:(id)arg1;	// IMP=0x00000000000bd943
- (void)clearCacheForNotificationRequest:(id)arg1;	// IMP=0x00000000000bd8c4
- (id)init;	// IMP=0x00000000000bd7ef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *preferredContentSizeCategory;
@property(readonly) Class superclass;

@end
