//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelevanceEngine/REExportedInterface-Protocol.h>

@class NSArray, REContentRanker, REMLModel;

@protocol REMLModelManagerProperties <REExportedInterface>
@property(readonly, nonatomic) NSArray *orderedFeatures;
@property(readonly, nonatomic) _Bool supportsContentRanking;
@property(readonly, nonatomic) REContentRanker *contentRanker;
@property(readonly, nonatomic) REMLModel *model;
@property(readonly, nonatomic) unsigned long long modelVersionNumber;
@end

