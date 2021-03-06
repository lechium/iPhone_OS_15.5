//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SpotlightReceiver-Protocol.h>

@class NSString, SGCoalescingDropBox, SGDSuggestManager;

@interface SGDSpotlightReceiver : NSObject <SpotlightReceiver>
{
    SGDSuggestManager *_manager;	// 8 = 0x8
    SGCoalescingDropBox *_purgeAndDeleteIdentifiersDropbox;	// 16 = 0x10
    SGCoalescingDropBox *_deleteDomainIdentifiersDropbox;	// 24 = 0x18
    SGCoalescingDropBox *_deleteInteractionBundleIdDropbox;	// 32 = 0x20
    SGCoalescingDropBox *_deleteInteractionIdDropbox;	// 40 = 0x28
    SGCoalescingDropBox *_deleteInteractionGroupIdDropbox;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000021ef5b
- (void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2;	// IMP=0x000000000021ee3f
- (void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;	// IMP=0x000000000021ecc0
- (void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;	// IMP=0x000000000021eb41
- (void)addInteractions:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;	// IMP=0x000000000021e6e8
- (id)supportedContentTypes;	// IMP=0x000000000021e6b8
- (void)deleteAllSearchableItemsWithBundleID:(id)arg1;	// IMP=0x000000000021e440
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2;	// IMP=0x000000000021e096
- (void)deleteSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2;	// IMP=0x000000000021dcee
- (void)purgeSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2;	// IMP=0x000000000021d933
- (void)_handleSocialHighlightsSafariDeletion;	// IMP=0x000000000021d8d3
- (void)addUserAction:(id)arg1 withItem:(id)arg2;	// IMP=0x000000000021d58b
- (void)_addSearchableItem:(id)arg1 bundleID:(id)arg2;	// IMP=0x000000000021d39e
- (void)addOrUpdateSearchableItems:(id)arg1 bundleID:(id)arg2;	// IMP=0x000000000021cccf
- (id)initWithManager:(id)arg1;	// IMP=0x000000000021c8c0
- (id)init;	// IMP=0x000000000021c839

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

