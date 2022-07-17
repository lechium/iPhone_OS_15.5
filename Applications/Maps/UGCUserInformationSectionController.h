//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UGCUserInformationCell;
@protocol UGCPOIEnrichmentAnalyticsDelegate;

__attribute__((visibility("hidden")))
@interface UGCUserInformationSectionController : NSObject
{
    UGCUserInformationCell *_userInformationCell;	// 8 = 0x8
    id <UGCPOIEnrichmentAnalyticsDelegate> _analyticsDelegate;	// 16 = 0x10
    NSArray *_rowItems;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000004d14e7
@property(readonly, nonatomic) __weak id <UGCPOIEnrichmentAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
- (void)userDataDidUpdate;	// IMP=0x00100000004d14bf
- (void)handleSuccessfulSubmission;	// IMP=0x00100000004d14b9
@property(readonly, nonatomic) NSArray *rowItems; // @synthesize rowItems=_rowItems;
- (void)_retrieveUserInformation;	// IMP=0x00100000004d1212
- (void)_setupUserInfoView;	// IMP=0x00100000004d1198
- (id)init;	// IMP=0x00100000004d114c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
