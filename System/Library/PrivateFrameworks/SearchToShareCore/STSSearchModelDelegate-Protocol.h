//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchToShareCore/NSObject-Protocol.h>

@class NSArray, STSSearchModel;

@protocol STSSearchModelDelegate <NSObject>
- (void)searchModel:(STSSearchModel *)arg1 insertedResultsAtIndexPaths:(NSArray *)arg2 removedResultsAtIndexPaths:(NSArray *)arg3;
- (void)searchModelUpdatedPredictedSuggestions:(STSSearchModel *)arg1;
@end

