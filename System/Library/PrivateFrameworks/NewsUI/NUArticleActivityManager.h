//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsUI/NUActivityProvider-Protocol.h>

@class FCReadingHistory, FCReadingList, FCSubscriptionList, NSString;
@protocol FCHeadlineProviding, NUArticleActivityOptionsProvider, NUReportConcernViewPresenter, NUURLHandling, NUURLModifying;

@interface NUArticleActivityManager : NSObject <NUActivityProvider>
{
    id <FCHeadlineProviding> _headline;	// 8 = 0x8
    FCReadingHistory *_readingHistory;	// 16 = 0x10
    FCReadingList *_readingList;	// 24 = 0x18
    FCSubscriptionList *_subscriptionList;	// 32 = 0x20
    id <NUURLHandling> _URLHandler;	// 40 = 0x28
    id <NUReportConcernViewPresenter> _reportConcernViewPresenter;	// 48 = 0x30
    id <NUURLModifying> _URLModifier;	// 56 = 0x38
    id <NUArticleActivityOptionsProvider> _optionsProvider;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000035651
@property(readonly, nonatomic) id <NUArticleActivityOptionsProvider> optionsProvider; // @synthesize optionsProvider=_optionsProvider;
@property(readonly, nonatomic) id <NUURLModifying> URLModifier; // @synthesize URLModifier=_URLModifier;
@property(readonly, nonatomic) id <NUReportConcernViewPresenter> reportConcernViewPresenter; // @synthesize reportConcernViewPresenter=_reportConcernViewPresenter;
@property(readonly, nonatomic) id <NUURLHandling> URLHandler; // @synthesize URLHandler=_URLHandler;
@property(readonly, nonatomic) FCSubscriptionList *subscriptionList; // @synthesize subscriptionList=_subscriptionList;
@property(readonly, nonatomic) FCReadingList *readingList; // @synthesize readingList=_readingList;
@property(readonly, nonatomic) FCReadingHistory *readingHistory; // @synthesize readingHistory=_readingHistory;
@property(readonly, nonatomic) id <FCHeadlineProviding> headline; // @synthesize headline=_headline;
- (_Bool)channelMutedForHeadline:(id)arg1;	// IMP=0x0000000000035543
- (_Bool)articleSavedForHeadline:(id)arg1;	// IMP=0x00000000000354ad
- (_Bool)articleDislikedForHeadline:(id)arg1;	// IMP=0x0000000000035415
- (_Bool)articleLikedForHeadline:(id)arg1;	// IMP=0x000000000003537d
- (void)toggleMuteForHeadline:(id)arg1;	// IMP=0x0000000000035256
- (void)toggleSaveForHeadline:(id)arg1;	// IMP=0x000000000003518c
- (void)toggleArticleDislikeStatusForHeadline:(id)arg1;	// IMP=0x00000000000350fc
- (void)toggleArticleLikeStatusForHeadline:(id)arg1;	// IMP=0x000000000003506c
- (CDUnknownBlockType)performBlockForHeadline:(id)arg1 withType:(unsigned long long)arg2;	// IMP=0x0000000000034b64
- (id)activityImageForHeadline:(id)arg1 withType:(unsigned long long)arg2;	// IMP=0x00000000000349dc
- (id)activityTitleForHeadline:(id)arg1 withType:(unsigned long long)arg2;	// IMP=0x00000000000347e0
- (id)activityTypeForHeadline:(id)arg1 withType:(unsigned long long)arg2;	// IMP=0x0000000000034778
- (id)supportedActivities;	// IMP=0x000000000003460d
- (id)activityForType:(unsigned long long)arg1;	// IMP=0x00000000000345d7
- (id)activities;	// IMP=0x00000000000341e5
- (id)activityItemSources;	// IMP=0x000000000003404b
- (id)initWithHeadline:(id)arg1 readingHistory:(id)arg2 readingList:(id)arg3 subscriptionList:(id)arg4 URLHandler:(id)arg5 reportConcernViewPresenter:(id)arg6 URLModifier:(id)arg7 optionsProvider:(id)arg8;	// IMP=0x0000000000033eec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
