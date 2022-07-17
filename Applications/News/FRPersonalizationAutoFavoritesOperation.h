//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/FCOperation.h>

@class FCPersonalizationBundleIDMapping, FCPersonalizationFavorabilityScores, FCPersonalizationTreatment, FCPersonalizationURLMapping, FCPersonalizationWhitelist, FCSubscriptionController, FCTagController, FCUserInfo, FRPersonalizationAutoFavorites, FRPersonalizationAutoFavoritesCursor, NSArray;
@protocol FCLocalAreasManager, FCNewsAppConfiguration, FCPersonalizationAggregateStore, FCTagRanking, TSLocationDetectionManagerType;

@interface FRPersonalizationAutoFavoritesOperation : FCOperation
{
    _Bool _disregardCache;	// 8 = 0x8
    FRPersonalizationAutoFavoritesCursor *_cursor;	// 16 = 0x10
    FCPersonalizationTreatment *_configurableValues;	// 24 = 0x18
    FCPersonalizationURLMapping *_urlMapping;	// 32 = 0x20
    FCPersonalizationBundleIDMapping *_bundleIDMapping;	// 40 = 0x28
    FCPersonalizationWhitelist *_whitelist;	// 48 = 0x30
    FCPersonalizationFavorabilityScores *_favorabilityScores;	// 56 = 0x38
    double _signalProcessingTimeInterval;	// 64 = 0x40
    FCSubscriptionController *_subscriptionController;	// 72 = 0x48
    FCTagController *_tagController;	// 80 = 0x50
    FCUserInfo *_userInfo;	// 88 = 0x58
    id <FCTagRanking> _tagRanker;	// 96 = 0x60
    id <FCPersonalizationAggregateStore> _aggregateStore;	// 104 = 0x68
    id <TSLocationDetectionManagerType> _locationManager;	// 112 = 0x70
    id <FCNewsAppConfiguration> _appConfiguration;	// 120 = 0x78
    id <FCLocalAreasManager> _localAreasManager;	// 128 = 0x80
    CDUnknownBlockType _autoFavoritesCompletionHandler;	// 136 = 0x88
    FRPersonalizationAutoFavorites *_resultAutoFavorites;	// 144 = 0x90
    FRPersonalizationAutoFavoritesCursor *_resultCursor;	// 152 = 0x98
    NSArray *_resultEventsToSubmit;	// 160 = 0xa0
}

+ (void)signalsFromCoreDuetWithQualityOfService:(long long)arg1 safariBlockoutDuration:(double)arg2 resultsBlock:(CDUnknownBlockType)arg3;	// IMP=0x0040000000039781
+ (id)coreDuetKnowledgeStore;	// IMP=0x001000000003971c
+ (void)externalSignalJSONData:(CDUnknownBlockType)arg1;	// IMP=0x0010000000039004
- (void).cxx_destruct;	// IMP=0x002000000003e279
@property(retain, nonatomic) NSArray *resultEventsToSubmit; // @synthesize resultEventsToSubmit=_resultEventsToSubmit;
@property(retain, nonatomic) FRPersonalizationAutoFavoritesCursor *resultCursor; // @synthesize resultCursor=_resultCursor;
@property(retain, nonatomic) FRPersonalizationAutoFavorites *resultAutoFavorites; // @synthesize resultAutoFavorites=_resultAutoFavorites;
@property(copy, nonatomic) CDUnknownBlockType autoFavoritesCompletionHandler; // @synthesize autoFavoritesCompletionHandler=_autoFavoritesCompletionHandler;
@property(retain, nonatomic) id <FCLocalAreasManager> localAreasManager; // @synthesize localAreasManager=_localAreasManager;
@property(retain, nonatomic) id <FCNewsAppConfiguration> appConfiguration; // @synthesize appConfiguration=_appConfiguration;
@property(retain, nonatomic) id <TSLocationDetectionManagerType> locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) id <FCPersonalizationAggregateStore> aggregateStore; // @synthesize aggregateStore=_aggregateStore;
@property(retain, nonatomic) id <FCTagRanking> tagRanker; // @synthesize tagRanker=_tagRanker;
@property(retain, nonatomic) FCUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) FCTagController *tagController; // @synthesize tagController=_tagController;
@property(retain, nonatomic) FCSubscriptionController *subscriptionController; // @synthesize subscriptionController=_subscriptionController;
@property(nonatomic) _Bool disregardCache; // @synthesize disregardCache=_disregardCache;
@property(nonatomic) double signalProcessingTimeInterval; // @synthesize signalProcessingTimeInterval=_signalProcessingTimeInterval;
@property(retain, nonatomic) FCPersonalizationFavorabilityScores *favorabilityScores; // @synthesize favorabilityScores=_favorabilityScores;
@property(retain, nonatomic) FCPersonalizationWhitelist *whitelist; // @synthesize whitelist=_whitelist;
@property(retain, nonatomic) FCPersonalizationBundleIDMapping *bundleIDMapping; // @synthesize bundleIDMapping=_bundleIDMapping;
@property(retain, nonatomic) FCPersonalizationURLMapping *urlMapping; // @synthesize urlMapping=_urlMapping;
@property(retain, nonatomic) FCPersonalizationTreatment *configurableValues; // @synthesize configurableValues=_configurableValues;
@property(retain, nonatomic) FRPersonalizationAutoFavoritesCursor *cursor; // @synthesize cursor=_cursor;
- (id)auditCandidates:(id)arg1 autoSubscriptionAddedDateByTagId:(id)arg2 multiplierProvider:(CDUnknownBlockType)arg3;	// IMP=0x001000000003db19
- (_Bool)shouldRejectTagID:(id)arg1 withAggregate:(id)arg2 baseline:(id)arg3 currentDate:(id)arg4 addedDate:(id)arg5 maxIdleTime:(double)arg6 minEvents:(double)arg7 minRate:(double)arg8 baseRate:(double)arg9 multiplier:(double)arg10;	// IMP=0x001000000003d92a
- (_Bool)shouldAcceptAggregate:(id)arg1 withCtr:(double)arg2 minEvents:(double)arg3 minClicks:(double)arg4 minRate:(double)arg5 baseRate:(double)arg6 multiplier:(double)arg7;	// IMP=0x001000000003d852
- (double)ctrForTagID:(id)arg1 withAggregate:(id)arg2 baselineAggregate:(id)arg3;	// IMP=0x001000000003d6ef
- (double)metricMultiplierForTagID:(id)arg1 withPriorFactorExponent:(double)arg2 tagFavorabilityExponent:(double)arg3;	// IMP=0x001000000003d514
- (void)_considerExternalSignals:(CDUnknownBlockType)arg1;	// IMP=0x001000000003caf6
- (void)_considerInternalSignals:(CDUnknownBlockType)arg1;	// IMP=0x001000000003c5a1
- (id)processSafariSignals:(id)arg1;	// IMP=0x001000000003c1b0
- (id)processExternalAppUsageSignals:(id)arg1;	// IMP=0x001000000003be41
- (void)processAppSignals:(id)arg1 safariSignals:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000003a9d2
- (void)considerCoreDuet:(CDUnknownBlockType)arg1;	// IMP=0x001000000003a3ee
- (id)maybeConsiderPortrait;	// IMP=0x0010000000038cc1
- (void)considerLocation:(CDUnknownBlockType)arg1;	// IMP=0x00100000000386ff
- (void)_considerInternalAppUsage:(CDUnknownBlockType)arg1;	// IMP=0x001000000003816d
- (void)_findValidAutoFavoritesWithCandidates:(id)arg1 channelsAllowedProvider:(CDUnknownBlockType)arg2 topicsAllowedProvider:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000003784d
- (void)_processSignals:(CDUnknownBlockType)arg1;	// IMP=0x001000000003491b
- (void)operationWillFinishWithError:(id)arg1;	// IMP=0x0010000000034823
- (void)performOperation;	// IMP=0x00100000000347bf
- (void)prepareOperation;	// IMP=0x0010000000034725
- (_Bool)validateOperation;	// IMP=0x0010000000034506

@end
