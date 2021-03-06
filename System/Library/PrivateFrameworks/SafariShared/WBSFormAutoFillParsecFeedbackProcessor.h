//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSFormAutoFillFeedbackProcessor-Protocol.h>

@class NSString, WBSCrowdsourcedFeedbackDomainNormalizer;
@protocol OS_dispatch_queue, WBSFormAutoFillFeedbackDomainPolicyProvider, WBSParsecGlobalFeedbackDispatcher;

@interface WBSFormAutoFillParsecFeedbackProcessor : NSObject <WBSFormAutoFillFeedbackProcessor>
{
    id <WBSParsecGlobalFeedbackDispatcher> _globalFeedbackDispatcher;	// 8 = 0x8
    unsigned long long _autoFillVersion;	// 16 = 0x10
    WBSCrowdsourcedFeedbackDomainNormalizer *_domainNormalizer;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_internalQueue;	// 32 = 0x20
    id <WBSFormAutoFillFeedbackDomainPolicyProvider> _domainPolicyProvider;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000008f45e
@property(retain, nonatomic) id <WBSFormAutoFillFeedbackDomainPolicyProvider> domainPolicyProvider; // @synthesize domainPolicyProvider=_domainPolicyProvider;
- (id)_feedbackWithCorrectionSet:(id)arg1 includeOrigin:(_Bool)arg2;	// IMP=0x000000000008ef0b
- (void)_getFeedbackWithCorrectionSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000008ebc5
- (void)sendFeedbackWithCorrectionSet:(id)arg1;	// IMP=0x000000000008e93a
- (id)initWithGlobalFeedbackDispatcher:(id)arg1 domainPolicyProvider:(id)arg2 autoFillVersion:(unsigned long long)arg3;	// IMP=0x000000000008e84e
- (id)init;	// IMP=0x000000000008e840

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

