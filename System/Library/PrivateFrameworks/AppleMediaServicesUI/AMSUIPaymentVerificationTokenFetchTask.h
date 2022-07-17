//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSTask.h>

#import <AppleMediaServicesUI/AMSBagConsumer-Protocol.h>
#import <AppleMediaServicesUI/AMSUIWebDelegate-Protocol.h>

@class ACAccount, AMSProcessInfo, AMSPromise, AMSUIPaymentVerificationMetrics, NSDictionary, NSString, UIViewController, WrappedAMSUIWebViewController;
@protocol AMSBagProtocol;

@interface AMSUIPaymentVerificationTokenFetchTask : AMSTask <AMSBagConsumer, AMSUIWebDelegate>
{
    ACAccount *_account;	// 8 = 0x8
    NSDictionary *_accountParameters;	// 16 = 0x10
    id <AMSBagProtocol> _bag;	// 24 = 0x18
    AMSProcessInfo *_clientInfo;	// 32 = 0x20
    NSString *_displayName;	// 40 = 0x28
    unsigned long long _mode;	// 48 = 0x30
    NSDictionary *_userInfo;	// 56 = 0x38
    UIViewController *_viewController;	// 64 = 0x40
    AMSUIPaymentVerificationMetrics *_metrics;	// 72 = 0x48
    AMSPromise *_resultPromise;	// 80 = 0x50
    WrappedAMSUIWebViewController *_webVC;	// 88 = 0x58
}

+ (id)createBagForSubProfile;	// IMP=0x000000000004b64a
+ (id)bagSubProfileVersion;	// IMP=0x000000000004b5fa
+ (id)bagSubProfile;	// IMP=0x000000000004b5aa
+ (id)bagKeySet;	// IMP=0x000000000004b4c7
+ (id)_tokenFromDictionary:(id)arg1;	// IMP=0x000000000004b245
+ (id)accountForNetworkingFromAccount:(id)arg1 accountParameters:(id)arg2 accountStore:(id)arg3;	// IMP=0x000000000004a380
+ (id)_contextCombining:(id)arg1 with:(id)arg2;	// IMP=0x000000000004a187
+ (id)performCardOnFileTask:(id)arg1;	// IMP=0x0000000000049b71
+ (id)performApplePayTask:(id)arg1;	// IMP=0x00000000000499ac
+ (id)_promiseToTryNextFlowWithResult:(id)arg1 error:(id)arg2 continuationBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000004963d
- (void).cxx_destruct;	// IMP=0x000000000004b9c1
@property(retain, nonatomic) WrappedAMSUIWebViewController *webVC; // @synthesize webVC=_webVC;
@property(retain, nonatomic) AMSPromise *resultPromise; // @synthesize resultPromise=_resultPromise;
@property(retain, nonatomic) AMSUIPaymentVerificationMetrics *metrics; // @synthesize metrics=_metrics;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(readonly, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(readonly, nonatomic) NSDictionary *accountParameters; // @synthesize accountParameters=_accountParameters;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void)_finishPromiseWithResult:(id)arg1 error:(id)arg2;	// IMP=0x000000000004b78b
- (void)setHeader:(id)arg1 withValueIn:(id)arg2 forKey:(id)arg3 onRequest:(id)arg4;	// IMP=0x000000000004b1b3
- (void)webViewController:(id)arg1 didEncodeNetworkRequest:(id)arg2;	// IMP=0x000000000004b04d
- (void)webViewController:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000004aa72
- (_Bool)webViewController:(id)arg1 handleDelegateAction:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000004a7f2
- (id)performWebFlowTask;	// IMP=0x0000000000049b86
- (id)performCardOnFileTaskWithFeatureFlag:(_Bool)arg1;	// IMP=0x00000000000499c1
- (id)performApplePayTaskWithFeatureFlag:(_Bool)arg1;	// IMP=0x0000000000049921
- (id)performTask;	// IMP=0x000000000004914d
- (id)initWithMode:(unsigned long long)arg1 accountParameters:(id)arg2 viewController:(id)arg3 bag:(id)arg4 displayName:(id)arg5;	// IMP=0x0000000000048f47
- (id)initWithMode:(unsigned long long)arg1 account:(id)arg2 viewController:(id)arg3 bag:(id)arg4 displayName:(id)arg5;	// IMP=0x0000000000048d41

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
