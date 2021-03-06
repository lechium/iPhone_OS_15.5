//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGJournalContactsObserver-Protocol.h>

@class NSString, NSURL, SGSqlEntityStore;

@interface SGSpotlightContactsAdapter : NSObject <SGJournalContactsObserver>
{
    NSURL *_vCardsDirectoryURL;	// 8 = 0x8
    SGSqlEntityStore *_store;	// 16 = 0x10
}

+ (id)entityIdentifiersFromCNIdentifiers:(id)arg1;	// IMP=0x000000000029976a
+ (void)notifyWhenFlushed:(CDUnknownBlockType)arg1;	// IMP=0x00000000002996bb
+ (id)dispatchGroup;	// IMP=0x000000000029968b
+ (id)searchableIndex;	// IMP=0x000000000029965b
- (void).cxx_destruct;	// IMP=0x000000000029929a
@property(nonatomic) __weak SGSqlEntityStore *store; // @synthesize store=_store;
- (void)removeAllPseudoContactsInIdSet:(id)arg1;	// IMP=0x0000000000299149
- (void)removeAllStoredPseudoContacts;	// IMP=0x0000000000299020
- (void)rejectContact:(id)arg1;	// IMP=0x000000000029900e
- (void)confirmContact:(id)arg1;	// IMP=0x0000000000298ffc
- (void)confirmOrRejectContact:(id)arg1;	// IMP=0x0000000000298e2b
- (void)addContact:(id)arg1;	// IMP=0x0000000000298b31
- (void)sendContactToSpotlight:(id)arg1;	// IMP=0x00000000002988b6
- (id)searchableItemsForContactsForInternalIdentifiers:(id)arg1;	// IMP=0x00000000002987fc
- (id)coreSpotlightAttributeSetForContact:(id)arg1;	// IMP=0x0000000000297efc
- (id)urlForStorageContactVCard:(id)arg1;	// IMP=0x0000000000297ded
- (id)urlForRecordIdVCard:(id)arg1;	// IMP=0x0000000000297d13
- (id)pseudoContactVcardDirectory;	// IMP=0x00000000002979d2
- (id)initWithSGSqlEntityStore:(id)arg1;	// IMP=0x0000000000297980

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

