//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSAcknowledgePrivacyTask;

@interface PSFitnessPlusAnalyticsConsentCoordinator : NSObject
{
    AMSAcknowledgePrivacyTask *_acknowledgePrivacyTask;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000007ace5
- (void)fetchSubscriptionStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000007a8bf
- (void)setAnalyticsConsent:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000007a6ba
- (_Bool)fetchAnalyticsConsent;	// IMP=0x000000000007a5a5
- (id)init;	// IMP=0x000000000007a3c5

@end

