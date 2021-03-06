//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsToday/NTSectionFetchDescriptor-Protocol.h>

@class NSString, NTPBArticleListTodaySectionSpecificConfig;

@interface NTArticleListSectionFetchDescriptor : NSObject <NTSectionFetchDescriptor>
{
    NTPBArticleListTodaySectionSpecificConfig *_articleListRequest;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002465e
@property(copy, nonatomic) NTPBArticleListTodaySectionSpecificConfig *articleListRequest; // @synthesize articleListRequest=_articleListRequest;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002463a
- (id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg1 limit:(unsigned long long)arg2 priorFeedItems:(id)arg3;	// IMP=0x00000000000245d9
- (id)incrementalSortTransformationWithFeedPersonalizer:(id)arg1;	// IMP=0x0000000000024579
- (id)assembleResultsWithCatchUpOperation:(id)arg1;	// IMP=0x00000000000244cf
- (void)configureCatchUpOperationWithFetchRequest:(id)arg1;	// IMP=0x000000000002445d
- (id)initWithArticleListConfiguration:(id)arg1;	// IMP=0x00000000000243c5
- (id)init;	// IMP=0x0000000000024280

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

