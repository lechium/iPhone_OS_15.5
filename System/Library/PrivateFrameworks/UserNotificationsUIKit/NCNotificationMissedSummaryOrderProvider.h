//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ATXMissedNotificationRanking, NCNotificationSummaryContentProvider, NCNotificationSummaryPlatterView;

@interface NCNotificationMissedSummaryOrderProvider
{
    NCNotificationSummaryPlatterView *_summaryPlatterView;	// 80 = 0x50
    NCNotificationSummaryContentProvider *_summaryContentProvider;	// 88 = 0x58
    ATXMissedNotificationRanking *_missedNotificationRanking;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000035b72
@property(retain, nonatomic) ATXMissedNotificationRanking *missedNotificationRanking; // @synthesize missedNotificationRanking=_missedNotificationRanking;
@property(retain, nonatomic) NCNotificationSummaryContentProvider *summaryContentProvider; // @synthesize summaryContentProvider=_summaryContentProvider;
@property(retain, nonatomic) NCNotificationSummaryPlatterView *summaryPlatterView; // @synthesize summaryPlatterView=_summaryPlatterView;
- (void)_updateSummaryContentProvider;	// IMP=0x0000000000035886
- (void)_updateSummaryPlatterView;	// IMP=0x000000000003580a
- (void)generateDigestForATXUserNotificationArrays:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000035528
- (id)leadingSummaryPlatterViewConfigureIfNecessary;	// IMP=0x000000000003542c
- (_Bool)adjustForContentSizeCategoryChange;	// IMP=0x000000000003540c
- (void)atxLogRemoval;	// IMP=0x00000000000353cf
- (void)atxLogSummaryPlatterExpandedIsUpcoming:(_Bool)arg1;	// IMP=0x0000000000035383
- (void)atxLogSummaryPlatterShownIsUpcoming:(_Bool)arg1;	// IMP=0x0000000000035337
- (id)atxUUID;	// IMP=0x00000000000352e7
- (void)updateLeadingSummaryPlatterView;	// IMP=0x00000000000352d5

@end

