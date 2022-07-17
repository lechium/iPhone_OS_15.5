//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFSearchResult.h>

#import <AppPredictionClient/NSSecureCoding-Protocol.h>

@class ATXProactiveSuggestion, ATXResponse, ATXScoredPrediction;

@interface ATXSearchResult : SFSearchResult <NSSecureCoding>
{
    ATXScoredPrediction *_scoredBundleId;	// 8 = 0x8
    ATXResponse *_response;	// 16 = 0x10
    ATXProactiveSuggestion *_proactiveSuggestion;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000a9880
- (void).cxx_destruct;	// IMP=0x00000000000a9a9e
@property(readonly, nonatomic) ATXScoredPrediction *scoredBundleId; // @synthesize scoredBundleId=_scoredBundleId;
@property(readonly, nonatomic) ATXProactiveSuggestion *proactiveSuggestion; // @synthesize proactiveSuggestion=_proactiveSuggestion;
@property(readonly, nonatomic) ATXResponse *response; // @synthesize response=_response;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a99b0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a9888
- (id)initWithScoredBundleId:(id)arg1 response:(id)arg2 proactiveSuggestion:(id)arg3;	// IMP=0x00000000000a97ba

@end
