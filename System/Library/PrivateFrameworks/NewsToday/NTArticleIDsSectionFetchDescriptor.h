//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsToday/NTSectionFetchDescriptor-Protocol.h>

@class NSString;
@protocol NTSectionFetchDescriptor;

@interface NTArticleIDsSectionFetchDescriptor : NSObject <NTSectionFetchDescriptor>
{
    id <NTSectionFetchDescriptor> _privateFetchDescriptor;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000274d1
@property(copy, nonatomic) id <NTSectionFetchDescriptor> privateFetchDescriptor; // @synthesize privateFetchDescriptor=_privateFetchDescriptor;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000274ad
- (id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg1 limit:(unsigned long long)arg2 priorFeedItems:(id)arg3;	// IMP=0x000000000002740e
- (id)incrementalSortTransformationWithFeedPersonalizer:(id)arg1;	// IMP=0x000000000002738b
- (id)assembleResultsWithCatchUpOperation:(id)arg1;	// IMP=0x0000000000027308
- (void)configureCatchUpOperationWithFetchRequest:(id)arg1;	// IMP=0x0000000000027296
- (id)initWithArticleIDsConfiguration:(id)arg1;	// IMP=0x0000000000027000
- (id)init;	// IMP=0x0000000000026ebb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

