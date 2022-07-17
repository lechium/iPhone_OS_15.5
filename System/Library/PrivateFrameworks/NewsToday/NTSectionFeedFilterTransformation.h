//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsToday/NTFeedTransforming-Protocol.h>

@class NSString;
@protocol NTFeedTransforming;

@interface NTSectionFeedFilterTransformation : NSObject <NTFeedTransforming>
{
    unsigned long long _embedsLimit;	// 8 = 0x8
    id <NTFeedTransforming> _underlyingTransformation;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000f417
@property(readonly, nonatomic) id <NTFeedTransforming> underlyingTransformation; // @synthesize underlyingTransformation=_underlyingTransformation;
@property(readonly, nonatomic) unsigned long long embedsLimit; // @synthesize embedsLimit=_embedsLimit;
- (id)transformFeedItems:(id)arg1;	// IMP=0x000000000000efeb
- (id)initWithTodayData:(id)arg1 configurationManager:(id)arg2 readArticlesFilterMethod:(int)arg3 seenArticlesFilterMethod:(int)arg4 minimumTimeSinceFirstSeenToFilter:(double)arg5 supplementalFeedFilterOptions:(long long)arg6 embedsLimit:(unsigned long long)arg7 otherArticleIDs:(id)arg8 otherClusterIDs:(id)arg9 filterDate:(id)arg10;	// IMP=0x000000000000e801
- (id)init;	// IMP=0x000000000000e6bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
