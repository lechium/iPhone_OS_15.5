//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface WBSSiriIntelligenceDonor : NSObject
{
    NSObject<OS_dispatch_queue> *_coreSpotlightDonationSerialQueue;	// 8 = 0x8
}

+ (id)coreSpotlightPageDonationIdentifier;	// IMP=0x00000000000dcb77
+ (id)_coreSpotlightItemIdentifierForURLString:(id)arg1;	// IMP=0x00000000000dcb62
+ (id)_bookmarkItemIdentifierForURLString:(id)arg1;	// IMP=0x00000000000dcaf0
+ (id)_historyItemIdentifierForURLString:(id)arg1;	// IMP=0x00000000000dca7e
+ (id)historyItemIdentifierForURL:(id)arg1;	// IMP=0x00000000000dca1c
+ (id)sharedInstance;	// IMP=0x00000000000dc9b4
- (void).cxx_destruct;	// IMP=0x00000000000df846
- (void)_sanitizeAttributeSet:(id)arg1;	// IMP=0x00000000000df78e
- (void)_computeCoreSpotlightIndexingRequirementsForAllBookmarksIDs:(id)arg1 indexedBookmarksIDs:(id)arg2 outIndexIDs:(id *)arg3 outRemoveIDs:(id *)arg4;	// IMP=0x00000000000df6a5
- (void)_computeCoreSpotlightIDsForBookmarks:(id)arg1;	// IMP=0x00000000000df5b7
- (id)_indexedBookmarksIDs:(id *)arg1;	// IMP=0x00000000000df130
- (id)_contentDescriptionForURL:(id)arg1;	// IMP=0x00000000000df0d0
- (void)_indexHistoryItemsToCoreSpotlight:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000de9c5
- (void)removeAllCoreSpotlightHistoryDataDonatedBySafari;	// IMP=0x00000000000de7eb
- (void)processRemovedHistoryItems:(id)arg1;	// IMP=0x00000000000de4af
- (void)_removeCoreSpotlightDataWithIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000de2b3
- (void)_indexCoreSpotlightData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000de0e2
- (id)_searchableItemsForIDs:(id)arg1 allBookmarks:(id)arg2;	// IMP=0x00000000000ddb49
- (void)donateSafariBookmarksToCoreSpotlight:(id)arg1;	// IMP=0x00000000000dd8fa
- (void)export30DaysWorthOfHistoryToCoreSpotlightWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000dd423
- (void)_donateDataForPageWithURL:(id)arg1 fullPageText:(id)arg2 readerText:(id)arg3 autocompleteTriggers:(id)arg4;	// IMP=0x00000000000dd0a0
- (void)donateDataForPageWithURL:(id)arg1 fullPageText:(id)arg2 readerText:(id)arg3;	// IMP=0x00000000000dcf3a
- (id)init;	// IMP=0x00000000000dcea4
- (_Bool)donateTextInWebView:(id)arg1 extractedReaderText:(id)arg2 canDonateFullPageText:(_Bool)arg3 extractInnerText:(CDUnknownBlockType)arg4;	// IMP=0x00000000000dcc43

@end

