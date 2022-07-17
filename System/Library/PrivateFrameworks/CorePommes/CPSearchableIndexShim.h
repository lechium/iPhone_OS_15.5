//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSSearchableIndex;
@protocol CPIndex, CSSearchableIndexDelegate;

@interface CPSearchableIndexShim : NSObject
{
    id <CPIndex> _index;	// 8 = 0x8
    CSSearchableIndex *_spotlightIndex;	// 16 = 0x10
    id <CSSearchableIndexDelegate> _indexDelegate;	// 24 = 0x18
}

+ (id)_summaryLoggingStringForSearchableItems:(id)arg1;	// IMP=0x0000000000007800
+ (id)defaultSearchableIndex;	// IMP=0x0000000000005c50
+ (void)setDualDonationEnabled:(_Bool)arg1;	// IMP=0x0000000000005b30
+ (_Bool)dualDonationEnabled;	// IMP=0x0000000000005ae0
+ (id)userDefaults;	// IMP=0x0000000000005920
+ (id)signpostLog;	// IMP=0x00000000000058b0
+ (id)log;	// IMP=0x00000000000057c0
- (void).cxx_destruct;	// IMP=0x0000000000008040
- (void)_issueCommand:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007450
- (void)changeStateOfSearchableItemsWithUIDs:(id)arg1 toState:(long long)arg2;	// IMP=0x0000000000007380
- (void)deleteAllSearchableItemsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000070a0
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006d30
- (void)deleteSearchableItemsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000069c0
- (void)indexSearchableItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000061d0
- (id)initWithIndex:(id)arg1 spotlightIndex:(id)arg2;	// IMP=0x00000000000060a0
- (id)initWithName:(id)arg1 protectionClass:(id)arg2 bundleIdentifier:(id)arg3;	// IMP=0x0000000000005ef0
- (id)initWithName:(id)arg1 protectionClass:(id)arg2;	// IMP=0x0000000000005d70
@property __weak id <CSSearchableIndexDelegate> indexDelegate; // @synthesize indexDelegate=_indexDelegate;
- (void)fetchLastClientStateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008590
- (void)beginIndexBatch;	// IMP=0x00000000000084f0
- (void)endIndexBatchWithClientState:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008080

@end
