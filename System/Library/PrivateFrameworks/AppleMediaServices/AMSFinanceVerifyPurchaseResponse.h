//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSFinancePerformable-Protocol.h>

@class AMSDialogRequest, AMSURLTaskInfo, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSFinanceVerifyPurchaseResponse : NSObject <AMSFinancePerformable>
{
    AMSDialogRequest *_dialogRequest;	// 8 = 0x8
    NSDictionary *_responseDictionary;	// 16 = 0x10
    AMSURLTaskInfo *_taskInfo;	// 24 = 0x18
    long long _verifyType;	// 32 = 0x20
}

+ (long long)_verifyTypeFromPayload:(id)arg1;	// IMP=0x000000000014ef2e
+ (id)_dialogRequestForCVVFromPayload:(id)arg1 verifyType:(long long)arg2;	// IMP=0x000000000014c6ac
+ (id)_dialogRequestForCarrierFromPayload:(id)arg1 verifyType:(long long)arg2;	// IMP=0x000000000014c1a8
+ (_Bool)isVerifyPurchasePayload:(id)arg1;	// IMP=0x000000000014b7be
- (void).cxx_destruct;	// IMP=0x000000000014f047
@property(nonatomic) long long verifyType; // @synthesize verifyType=_verifyType;
@property(retain, nonatomic) AMSURLTaskInfo *taskInfo; // @synthesize taskInfo=_taskInfo;
@property(retain, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
@property(retain, nonatomic) AMSDialogRequest *dialogRequest; // @synthesize dialogRequest=_dialogRequest;
- (id)_runCVVRequestForCode:(id)arg1 error:(id *)arg2;	// IMP=0x000000000014e982
- (id)_runCarrierVerifyCode:(id)arg1 error:(id *)arg2;	// IMP=0x000000000014e323
- (id)_runCarrierNewCodeWithError:(id *)arg1;	// IMP=0x000000000014dcff
- (id)_handleCVVDialogResult:(id)arg1 shouldReattempt:(_Bool *)arg2;	// IMP=0x000000000014d4c9
- (id)_handleCarrierDialogResult:(id)arg1 shouldReattempt:(_Bool *)arg2;	// IMP=0x000000000014ca51
- (id)performWithTaskInfo:(id)arg1;	// IMP=0x000000000014b7d7
- (id)initWithPayload:(id)arg1 taskInfo:(id)arg2;	// IMP=0x000000000014b554

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

