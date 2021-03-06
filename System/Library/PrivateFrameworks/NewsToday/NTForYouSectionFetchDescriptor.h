//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsToday/NTSectionFetchDescriptor-Protocol.h>

@class NSString, NTCatchUpOperationForYouRequest;

@interface NTForYouSectionFetchDescriptor : NSObject <NTSectionFetchDescriptor>
{
    NTCatchUpOperationForYouRequest *_forYouRequest;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000009cd0
@property(copy, nonatomic) NTCatchUpOperationForYouRequest *forYouRequest; // @synthesize forYouRequest=_forYouRequest;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000009cac
- (id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg1 limit:(unsigned long long)arg2 priorFeedItems:(id)arg3;	// IMP=0x0000000000009bda
- (id)incrementalSortTransformationWithFeedPersonalizer:(id)arg1;	// IMP=0x0000000000009b77
- (id)assembleResultsWithCatchUpOperation:(id)arg1;	// IMP=0x0000000000009b62
- (void)configureCatchUpOperationWithFetchRequest:(id)arg1;	// IMP=0x0000000000009ade
- (id)initWithForYouConfiguration:(id)arg1 appConfiguration:(id)arg2 topStoriesChannelID:(id)arg3 hiddenFeedIDs:(id)arg4 paidBundleFeedID:(id)arg5 mutedTagIDs:(id)arg6 purchasedTagIDs:(id)arg7 subscribedTagIDs:(id)arg8 bundleSubscriptionProvider:(id)arg9;	// IMP=0x000000000000987f
- (id)init;	// IMP=0x000000000000973a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

