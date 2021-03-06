//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSFormAutoFillFeedbackDomainPolicyProvider-Protocol.h>

@class NSString;
@protocol WBSCrowdsourcedFeedbackAllowList;

@interface WBSFormAutoFillParsecDomainPolicyProvider : NSObject <WBSFormAutoFillFeedbackDomainPolicyProvider>
{
    id <WBSCrowdsourcedFeedbackAllowList> _feedbackAllowList;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000008e830
- (void)autoFillFeedbackProcessor:(id)arg1 determineWhetherToSendFeedbackForDomain:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000008e77e
- (void)getLastPolicyRetrievalURLStringWithResultHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000008e629
- (void)setPoliciesWithJSONData:(id)arg1 retrievalURLString:(id)arg2;	// IMP=0x000000000008e3c0
- (id)initWithFeedbackAllowList:(id)arg1;	// IMP=0x000000000008e342

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

