//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/ATXEngagementRecordManagerProtocol-Protocol.h>

@class ATXBiomeERMStream, ATXExecutableReferenceManager, NSString;
@protocol OS_dispatch_queue;

@interface ATXEngagementRecordManager : NSObject <ATXEngagementRecordManagerProtocol>
{
    ATXExecutableReferenceManager *_referenceManager;	// 8 = 0x8
    NSString *_path;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    ATXBiomeERMStream *_eventStream;	// 32 = 0x20
    double _minDurationForTrackedReferencesToStayAround;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x000000000006627a
- (void).cxx_destruct;	// IMP=0x00000000000691cd
@property(nonatomic) double minDurationForTrackedReferencesToStayAround; // @synthesize minDurationForTrackedReferencesToStayAround=_minDurationForTrackedReferencesToStayAround;
- (id)_readData;	// IMP=0x00000000000690d7
- (_Bool)_writeData:(id)arg1;	// IMP=0x000000000006902a
- (void)_serializeAndWriteNoSyncSet:(id)arg1;	// IMP=0x0000000000068ecd
- (void)_logDidAddEntryToBiomeStream:(id)arg1;	// IMP=0x0000000000068d88
- (void)_addHiddenSuggestionNoSync:(id)arg1 duration:(double)arg2 engagementRecordType:(unsigned long long)arg3;	// IMP=0x00000000000689c1
- (void)_addEngagedSuggestionNoSync:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x000000000006859e
- (id)_engagedEntriesNoSync;	// IMP=0x000000000006842e
- (void)fetchEngagedEntriesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000068365
- (id)_engagedEntriesNoSyncOfType:(unsigned long long)arg1 queryOptions:(unsigned long long)arg2;	// IMP=0x000000000006807f
- (id)_identifiersFromEntries:(id)arg1;	// IMP=0x0000000000067ed5
- (void)removeAllEngagementsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000067dfd
- (void)_removeEngagementsOnQueuePassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0000000000067b8a
- (void)removeEngagementForExecutableIdentifier:(id)arg1 recordType:(unsigned long long)arg2 abortingRemovalIfEngagementDateIsLaterThanDate:(id)arg3;	// IMP=0x00000000000678a1
- (void)removeAllEngagementsOfRecordType:(unsigned long long)arg1;	// IMP=0x0000000000067828
- (void)removeAllEngagementsForSuggestion:(id)arg1;	// IMP=0x000000000006773a
- (void)removeEngagementForSuggestion:(id)arg1 recordType:(unsigned long long)arg2;	// IMP=0x0000000000067615
- (void)_removeEngagedSuggestionsIfPossibleNoSync;	// IMP=0x00000000000673aa
- (void)addHiddenSuggestion:(id)arg1 duration:(double)arg2 engagementRecordType:(unsigned long long)arg3;	// IMP=0x00000000000672de
- (void)addEngagedSuggestion:(id)arg1 engagementRecordType:(unsigned long long)arg2;	// IMP=0x000000000006720c
- (id)engagedExecutablesOfType:(unsigned long long)arg1 queryOptions:(unsigned long long)arg2;	// IMP=0x000000000006705c
- (void)_filterOutExplicitEngagementsThatShouldNotClearOnEngagement:(id)arg1;	// IMP=0x0000000000066f14
- (_Bool)hasEngagedWithSuggestion:(id)arg1 engagedExecutables:(id)arg2;	// IMP=0x0000000000066e05
- (_Bool)hasEngagedWithSuggestion:(id)arg1 engagementRecordType:(unsigned long long)arg2;	// IMP=0x0000000000066be9
- (void)updateForClientModelCacheUpdate:(id)arg1 clientModelId:(id)arg2;	// IMP=0x0000000000066862
- (id)jsonDict;	// IMP=0x00000000000665d4
@property(readonly, copy) NSString *description;
- (id)initWithCacheDirectory:(id)arg1;	// IMP=0x0000000000066340
- (id)init;	// IMP=0x00000000000662e6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

