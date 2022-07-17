//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCReadonlyPersonalizationAggregateStore-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol FCDerivedPersonalizationData;

@interface FCReadonlyPersonalizationAggregateStore : NSObject <FCReadonlyPersonalizationAggregateStore>
{
    id <FCDerivedPersonalizationData> _derivedPersonalizationData;	// 8 = 0x8
    NSMutableDictionary *_overrideAggregatesByFeatureKey;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002bf93e
@property(retain, nonatomic) NSMutableDictionary *overrideAggregatesByFeatureKey; // @synthesize overrideAggregatesByFeatureKey=_overrideAggregatesByFeatureKey;
@property(retain, nonatomic) id <FCDerivedPersonalizationData> derivedPersonalizationData; // @synthesize derivedPersonalizationData=_derivedPersonalizationData;
- (void)processTodayPersonalizationUpdates:(id)arg1 withConfigurableValues:(id)arg2;	// IMP=0x00000000002bf685
- (id)aggregatesForFeatures:(id)arg1;	// IMP=0x00000000002bf41c
- (id)baselineAggregateWithConfigurableValues:(id)arg1;	// IMP=0x00000000002bf327
- (void)updateFeatures:(id)arg1 withAction:(unsigned long long)arg2 displayRank:(long long)arg3 groupRank:(long long)arg4 individually:(_Bool)arg5 configurableValues:(id)arg6;	// IMP=0x00000000002bee03
- (void)modifyLocalAggregatesForFeatureKeys:(id)arg1 withAction:(unsigned long long)arg2 actionCount:(unsigned long long)arg3 defaultClicks:(double)arg4 defaultImpressions:(double)arg5 impressionBias:(double)arg6 configurableValues:(id)arg7;	// IMP=0x00000000002be925
- (id)initWithDerivedPersonalizationData:(id)arg1;	// IMP=0x00000000002be890
- (id)init;	// IMP=0x00000000002be74b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
