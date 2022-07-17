//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMBehaviorRetriever, CAPContactFillerUserEvent, NSDictionary, NSMutableDictionary, _CDInteractionStore, _PSContactFillerNormalizationConstants;

@interface _PSSharingContactFeatureExtraction : NSObject
{
    _Bool _constantFeaturesReady;	// 8 = 0x8
    NSDictionary *_metadata;	// 16 = 0x10
    CAPContactFillerUserEvent *_userEvent;	// 24 = 0x18
    _CDInteractionStore *_interactionStore;	// 32 = 0x20
    _PSContactFillerNormalizationConstants *_normConstants;	// 40 = 0x28
    NSMutableDictionary *_constantFeatures;	// 48 = 0x30
    BMBehaviorRetriever *_behaviorRetriever;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000003abca
@property(readonly, nonatomic) BMBehaviorRetriever *behaviorRetriever; // @synthesize behaviorRetriever=_behaviorRetriever;
@property(retain, nonatomic) NSMutableDictionary *constantFeatures; // @synthesize constantFeatures=_constantFeatures;
@property(retain, nonatomic) _PSContactFillerNormalizationConstants *normConstants; // @synthesize normConstants=_normConstants;
@property(nonatomic) _Bool constantFeaturesReady; // @synthesize constantFeaturesReady=_constantFeaturesReady;
@property(readonly, nonatomic) _CDInteractionStore *interactionStore; // @synthesize interactionStore=_interactionStore;
@property(retain, nonatomic) CAPContactFillerUserEvent *userEvent; // @synthesize userEvent=_userEvent;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
- (void)extractFeaturesInto:(id)arg1 withPredictionContext:(id)arg2 forContactId:(id)arg3 forInteraction:(id)arg4 behaviorRulesConsideringInTheContext:(id)arg5 ruleRankingMLModelScores:(id)arg6 interactionModelScores:(id)arg7;	// IMP=0x000000000003945c
- (void)transferConstantFeatures:(id)arg1 to:(id)arg2;	// IMP=0x00000000000392b1
- (void)extractConstantFeaturesInto:(id)arg1;	// IMP=0x0000000000038c74
- (id)initWithMetadata:(id)arg1 interactionStore:(id)arg2;	// IMP=0x0000000000038b9a

@end
