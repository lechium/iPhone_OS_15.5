//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInputCore/TIResponseKitManaging-Protocol.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface TIResponseKitManager : NSObject <TIResponseKitManaging>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableArray *_conversationTurns;	// 16 = 0x10
}

+ (id)rewriteMoneyAttributes:(id)arg1;	// IMP=0x000000000018eb79
+ (id)singletonInstance;	// IMP=0x000000000018eb49
+ (id)sharedTIResponseKitManager;	// IMP=0x000000000018eb30
- (void).cxx_destruct;	// IMP=0x000000000018e557
- (id)cannedResponsesForString:(id)arg1 withLanguageID:(id)arg2 withClientID:(id)arg3 withRecipientID:(id)arg4 withAdditionalPredictions:(id)arg5 desiredCandidateCount:(unsigned long long)arg6 shouldDisableAutoCaps:(_Bool)arg7 isBlacklisted:(_Bool)arg8;	// IMP=0x000000000018dd8a
- (id)indexesOfDuplicatesInCandidates:(id)arg1;	// IMP=0x000000000018dcab
- (id)responseKitResponseCandidatesForString:(id)arg1 withLanguageID:(id)arg2 withClientID:(id)arg3 withRecipientID:(id)arg4 shouldDisableAutoCaps:(_Bool)arg5;	// IMP=0x000000000018dade
- (void)addNewConversationTurnToHistory:(id)arg1;	// IMP=0x000000000018da2f
- (void)persistResponseKitDynamicDataToDisk;	// IMP=0x000000000018da1a
- (void)resetResponseKit;	// IMP=0x000000000018da05
- (void)resetResponseKitConversationHistory;	// IMP=0x000000000018d9ba
- (void)updateResponseKitConversationHistoryWithMessage:(id)arg1 withSenderID:(id)arg2 withTimestamp:(id)arg3;	// IMP=0x000000000018d8d5
- (void)registerResponseKitResponse:(id)arg1 forMessage:(id)arg2 withLanguage:(id)arg3 withClientID:(id)arg4 withSenderID:(id)arg5 withRecipientID:(id)arg6 withTimestamp:(id)arg7 shouldUpdateConversationHistory:(_Bool)arg8;	// IMP=0x000000000018d728
- (void)generateResponseKitSuggestionsForString:(id)arg1 withLanguage:(id)arg2 withClientID:(id)arg3 withRecipientID:(id)arg4 withAdditionalPredictions:(id)arg5 desiredCandidateCount:(unsigned long long)arg6 shouldDisableAutoCaps:(_Bool)arg7 stringIsBlacklisted:(_Bool)arg8 async:(_Bool)arg9 completionHandler:(CDUnknownBlockType)arg10;	// IMP=0x000000000018d492
- (id)init;	// IMP=0x000000000018d40e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

