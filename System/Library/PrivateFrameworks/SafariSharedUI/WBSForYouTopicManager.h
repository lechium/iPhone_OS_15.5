//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContextClient, NSArray, NSDate, PPNamedEntityStore, WBSHistory, WBSRecentHistoryTopicTagController;
@protocol OS_dispatch_queue;

@interface WBSForYouTopicManager : NSObject
{
    WBSRecentHistoryTopicTagController *_historyTopicTagController;	// 8 = 0x8
    PPNamedEntityStore *_namedEntityStore;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_internalQueue;	// 24 = 0x18
    WBSHistory *_history;	// 32 = 0x20
    CKContextClient *_contextClient;	// 40 = 0x28
    NSDate *_lastContextKitRequestDate;	// 48 = 0x30
    NSArray *_mostRecentUserVisibleTopics;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000da570
- (void)_createInternalQueueIfNecessary;	// IMP=0x00000000000da537
- (void)portraitNamedEntitiesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000da10c
- (void)contextKitTopicsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d9974
- (id)initWithHistory:(id)arg1 contextClient:(id)arg2;	// IMP=0x00000000000d9878

@end
