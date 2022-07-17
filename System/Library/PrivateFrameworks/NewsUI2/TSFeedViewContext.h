//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSNumber, NSString, NSURL, TSAnalyticsReferral;

@interface TSFeedViewContext : NSObject
{
    MISSING_TYPE *feedTagType;	// 8 = 0x8
    MISSING_TYPE *presentationReason;	// 24 = 0x18
    MISSING_TYPE *feedPickerSection;	// 32 = 0x20
    MISSING_TYPE *feedPickerType;	// 40 = 0x28
    MISSING_TYPE *displayRank;	// 48 = 0x30
    MISSING_TYPE *externalAnalyticsFeedReferrer;	// 56 = 0x38
    MISSING_TYPE *previousArticleID;	// 64 = 0x40
    MISSING_TYPE *previousArticleVersion;	// 80 = 0x50
    MISSING_TYPE *showSubscribedAlert;	// 88 = 0x58
    MISSING_TYPE *referral;	// 96 = 0x60
    MISSING_TYPE *sourceURL;	// 1835102790 = 0x6d617246
    MISSING_TYPE *title;	// 1127183211 = 0x432f736b
    MISSING_TYPE *tagName;	// 1952539503 = 0x7461636f
    MISSING_TYPE *sourceApplication;	// 1835102822 = 0x6d617266
    MISSING_TYPE *userActivityType;	// 1866674027 = 0x6f432f6b
    MISSING_TYPE *sourceSearchText;	// 1769234787 = 0x69746163
    MISSING_TYPE *adPreviewID;	// 12 = 0xc
    MISSING_TYPE *adPreviewSessionID;	// 24 = 0x18
    MISSING_TYPE *adQToken;	// 51511313 = 0x3120011
    MISSING_TYPE *maximumAdRequestsForCurrentAdPreviewID;	// 1937330991 = 0x7379532f
}

- (void).cxx_destruct;	// IMP=0x0000000000867170
- (id)init;	// IMP=0x0000000000867120
- (void)setFeedTagType:(unsigned long long)arg1;	// IMP=0x0000000000866f40
- (void)setWithShowSubscribedAlert:(_Bool)arg1;	// IMP=0x00000000008673c0
- (void)setWithPreviousArticleVersion:(long long)arg1;	// IMP=0x0000000000866e50
- (void)setWithPreviousArticleID:(id)arg1;	// IMP=0x0000000000866d40
- (void)setWithReferral:(id)arg1;	// IMP=0x0000000000866c60
- (void)setWithExternalAnalyticsFeedReferrer:(long long)arg1;	// IMP=0x0000000000866be0
- (void)setWithDisplayRank:(long long)arg1;	// IMP=0x0000000000866ba0
- (void)setWithMaximumAdRequestsForCurrentAdPreviewID:(long long)arg1;	// IMP=0x0000000000866b80
- (void)setWithAdQToken:(id)arg1;	// IMP=0x0000000000866b40
- (void)setWithAdPreviewSessionID:(id)arg1;	// IMP=0x0000000000866b00
- (void)setWithAdPreviewID:(id)arg1;	// IMP=0x0000000000866ac0
- (void)setWithSourceSearchText:(id)arg1;	// IMP=0x0000000000866a80
- (void)setWithUserActivityType:(id)arg1;	// IMP=0x0000000000866a40
- (void)setWithSourceApplication:(id)arg1;	// IMP=0x0000000000866a00
- (void)setWithSourceURL:(id)arg1;	// IMP=0x00000000008668d0
- (void)setWithFeedPickerType:(int)arg1;	// IMP=0x00000000008666e0
- (void)setWithFeedPickerSection:(int)arg1;	// IMP=0x0000000000866630
- (void)setWithPresentationReason:(int)arg1;	// IMP=0x00000000008665f0
@property(nonatomic, retain) NSNumber *maximumAdRequestsForCurrentAdPreviewID; // @synthesize maximumAdRequestsForCurrentAdPreviewID;
@property(nonatomic, copy) NSString *adQToken;
@property(nonatomic, copy) NSString *adPreviewSessionID;
@property(nonatomic, copy) NSString *adPreviewID;
@property(nonatomic, copy) NSString *sourceSearchText;
@property(nonatomic, copy) NSString *userActivityType;
@property(nonatomic, copy) NSString *sourceApplication;
@property(nonatomic, copy) NSString *tagName;
@property(nonatomic, copy) NSString *title;
@property(nonatomic, copy) NSURL *sourceURL;
@property(nonatomic, retain) TSAnalyticsReferral *referral; // @synthesize referral;
@property(nonatomic) _Bool showSubscribedAlert; // @synthesize showSubscribedAlert;
@property(nonatomic, retain) NSNumber *previousArticleVersion; // @synthesize previousArticleVersion;
@property(nonatomic, copy) NSString *previousArticleID;
@property(nonatomic, retain) NSNumber *externalAnalyticsFeedReferrer; // @synthesize externalAnalyticsFeedReferrer;
@property(nonatomic, retain) NSNumber *displayRank; // @synthesize displayRank;
@property(nonatomic, retain) NSNumber *feedPickerType; // @synthesize feedPickerType;
@property(nonatomic, retain) NSNumber *feedPickerSection; // @synthesize feedPickerSection;
@property(nonatomic, retain) NSNumber *presentationReason; // @synthesize presentationReason;

@end
