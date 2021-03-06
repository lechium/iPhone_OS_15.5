//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UGCRatingsForm;
@protocol UGCPOIEnrichmentAnalyticsDelegate;

__attribute__((visibility("hidden")))
@interface UGCRatingsSectionController : NSObject
{
    UGCRatingsForm *_ratingsForm;	// 8 = 0x8
    NSArray *_rowItems;	// 16 = 0x10
    id <UGCPOIEnrichmentAnalyticsDelegate> _analyticsDelegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000829d01
@property(readonly, nonatomic) __weak id <UGCPOIEnrichmentAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
@property(readonly, nonatomic) NSArray *rowItems; // @synthesize rowItems=_rowItems;
- (void)handleSuccessfulSubmission;	// IMP=0x0010000000829580
- (void)ratingCategoryCellChangedState:(long long)arg1 forKey:(id)arg2;	// IMP=0x001000000082952d
- (id)initWithRatingsForm:(id)arg1 analyticsDelegate:(id)arg2;	// IMP=0x0010000000829494

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

