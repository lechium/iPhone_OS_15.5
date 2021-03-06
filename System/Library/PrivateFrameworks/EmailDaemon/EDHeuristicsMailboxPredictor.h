//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EDMailboxPredictor-Protocol.h>

@class NSCache, NSDictionary, NSMutableString, NSString;
@protocol EDMailboxPredictionQueryAdapter, EMUserProfileProvider;

@interface EDHeuristicsMailboxPredictor : NSObject <EDMailboxPredictor>
{
    id <EMUserProfileProvider> _userProfileProvider;	// 8 = 0x8
    id <EDMailboxPredictionQueryAdapter> _library;	// 16 = 0x10
    NSDictionary *_parameters;	// 24 = 0x18
    NSCache *_mailboxIDCache;	// 32 = 0x20
    NSMutableString *_debugLog;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000032016
@property(retain, nonatomic) NSMutableString *debugLog; // @synthesize debugLog=_debugLog;
@property(retain, nonatomic) NSCache *mailboxIDCache; // @synthesize mailboxIDCache=_mailboxIDCache;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) id <EDMailboxPredictionQueryAdapter> library; // @synthesize library=_library;
@property(retain, nonatomic) id <EMUserProfileProvider> userProfileProvider; // @synthesize userProfileProvider=_userProfileProvider;
- (id)_allowedRecipientsForMessage:(id)arg1;	// IMP=0x0000000000031adf
- (_Bool)_isAllowedRecipient:(id)arg1;	// IMP=0x000000000003192a
- (id)_normalizedTermFrequencyTopHitFromDictionary:(id)arg1 withThreshold:(double)arg2;	// IMP=0x000000000003151e
- (id)_objectWithMeasure:(double)arg1 timesHigherThanFollowUpInMeasures:(id)arg2;	// IMP=0x000000000003136e
- (id)_topHitFromMailboxDictionary:(id)arg1 message:(id)arg2;	// IMP=0x00000000000311f8
- (id)_topHitFromMailboxDictionary:(id)arg1;	// IMP=0x0000000000031052
- (id)_removeSpecialMailboxesInCounts:(id)arg1 message:(id)arg2;	// IMP=0x0000000000030c4d
- (id)_userCreatedMailboxIDs;	// IMP=0x0000000000030885
- (id)_recipientCountsForMessage:(id)arg1;	// IMP=0x00000000000307b6
- (id)_listIDCountsForMessage:(id)arg1;	// IMP=0x00000000000306f7
- (id)_senderCountsForMessage:(id)arg1;	// IMP=0x0000000000030558
- (id)_conversationIDCountsForMessage:(id)arg1;	// IMP=0x0000000000030470
- (id)_groupedMessagesCountByMailboxMatchingQuery:(unsigned long long)arg1 variable:(id)arg2;	// IMP=0x0000000000030387
- (_Bool)_limitToRecents;	// IMP=0x00000000000302ef
- (id)_countsForField:(id)arg1 message:(id)arg2;	// IMP=0x0000000000030127
- (id)_weightedModePredictionsForMessage:(id)arg1;	// IMP=0x000000000002f648
- (id)_summedWeightedPredictionsForMessage:(id)arg1 limit:(unsigned long long)arg2;	// IMP=0x000000000002eb59
- (id)_orderedModePredictionForMessage:(id)arg1;	// IMP=0x000000000002e326
- (id)_predictionsForMessage:(id)arg1 limit:(unsigned long long)arg2;	// IMP=0x000000000002e25f
- (_Bool)_modeParameterIs:(id)arg1;	// IMP=0x000000000002e194
- (id)predictMailboxIDsForMessages:(id)arg1 limit:(unsigned long long)arg2 diagnostics:(id *)arg3;	// IMP=0x000000000002d57a
- (id)_mergeDefaultParameters:(id)arg1 withParameters:(id)arg2;	// IMP=0x000000000002d0d8
- (id)initWithUserProfileProvider:(id)arg1 queryAdapter:(id)arg2 parameters:(id)arg3;	// IMP=0x000000000002cfcb
- (id)initWithUserProfileProvider:(id)arg1 queryAdapter:(id)arg2;	// IMP=0x000000000002cc6f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

