//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecord, FCCKPrivateDatabase, FCPersonalizationTreatment, NSDictionary, NSError, NTPBPersonalizationProfile;

@interface FCModifyPersonalizationOperation
{
    FCCKPrivateDatabase *_database;	// 8 = 0x8
    NSDictionary *_aggregates;	// 16 = 0x10
    FCPersonalizationTreatment *_treatment;	// 24 = 0x18
    CKRecord *_remoteRecord;	// 32 = 0x20
    CDUnknownBlockType _saveCompletionHandler;	// 40 = 0x28
    NTPBPersonalizationProfile *_savedProfile;	// 48 = 0x30
    CKRecord *_savedRecord;	// 56 = 0x38
    NSError *_resultError;	// 64 = 0x40
}

+ (void)applyAggregates:(id)arg1 toProfile:(id)arg2 maxRatio:(double)arg3;	// IMP=0x000000000001d7c0
+ (void)pruneAggregates:(id)arg1;	// IMP=0x000000000001d402
+ (void)applyDeltas:(id)arg1 toProfile:(id)arg2 treatment:(id)arg3 prune:(_Bool)arg4;	// IMP=0x000000000001d04b
+ (void)applyChangeGroups:(id)arg1 toProfile:(id)arg2 treatment:(id)arg3 prune:(_Bool)arg4;	// IMP=0x000000000001c866
+ (id)personalizationProfileFromRecord:(id)arg1;	// IMP=0x000000000001c5b1
- (void).cxx_destruct;	// IMP=0x000000000001c51a
@property(retain, nonatomic) NSError *resultError; // @synthesize resultError=_resultError;
@property(retain, nonatomic) CKRecord *savedRecord; // @synthesize savedRecord=_savedRecord;
@property(retain, nonatomic) NTPBPersonalizationProfile *savedProfile; // @synthesize savedProfile=_savedProfile;
@property(copy, nonatomic) CDUnknownBlockType saveCompletionHandler; // @synthesize saveCompletionHandler=_saveCompletionHandler;
@property(retain, nonatomic) CKRecord *remoteRecord; // @synthesize remoteRecord=_remoteRecord;
@property(retain, nonatomic) FCPersonalizationTreatment *treatment; // @synthesize treatment=_treatment;
@property(retain, nonatomic) NSDictionary *aggregates; // @synthesize aggregates=_aggregates;
@property(retain, nonatomic) FCCKPrivateDatabase *database; // @synthesize database=_database;
- (void)resetForRetry;	// IMP=0x000000000001c3c3
- (_Bool)canRetryWithError:(id)arg1 retryAfter:(id *)arg2;	// IMP=0x000000000001c380
- (unsigned long long)maxRetries;	// IMP=0x000000000001c375
- (void)operationWillFinishWithError:(id)arg1;	// IMP=0x000000000001c279
- (void)performOperation;	// IMP=0x000000000001b98a
- (_Bool)validateOperation;	// IMP=0x000000000001b626

@end
