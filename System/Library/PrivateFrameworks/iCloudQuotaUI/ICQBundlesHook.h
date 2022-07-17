//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iCloudQuotaUI/AAUIServerHook-Protocol.h>
#import <iCloudQuotaUI/AMSUIDynamicViewControllerDelegate-Protocol.h>

@class AAUIServerHookResponse, ICQUpgradeFlowManager, NSDictionary, NSString, RUIObjectModel, UIViewController;
@protocol AAUIServerHookDelegate, ICQServerHookDelegate;

@interface ICQBundlesHook : NSObject <AMSUIDynamicViewControllerDelegate, AAUIServerHook>
{
    ICQUpgradeFlowManager<ICQServerHookDelegate> *_flowManager;	// 8 = 0x8
    NSDictionary *_clientInfo;	// 16 = 0x10
    long long _statusCode;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
    long long _amsErrorCode;	// 40 = 0x28
    long long _amsAction;	// 48 = 0x30
    NSString *_buyParamsStr;	// 56 = 0x38
    UIViewController *_presentingViewController;	// 64 = 0x40
    id <AAUIServerHookDelegate> _delegate;	// 72 = 0x48
    NSString *_buffervar;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000041338
@property(retain, nonatomic) NSString *buffervar; // @synthesize buffervar=_buffervar;
@property(nonatomic) __weak id <AAUIServerHookDelegate> delegate; // @synthesize delegate=_delegate;
- (id)dynamicViewController:(id)arg1 contentViewControllerWithDictionary:(id)arg2;	// IMP=0x00000000000411b3
- (void)dynamicViewController:(id)arg1 didFinishWithPurchaseResult:(id)arg2 error:(id)arg3;	// IMP=0x0000000000040d6a
- (void)setAdditionalParameters:(id)arg1;	// IMP=0x000000000004068a
- (void)launchBundleOffer;	// IMP=0x00000000000401b4
@property(retain, nonatomic) AAUIServerHookResponse *serverHookResponse;
- (void)processObjectModel:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003fe53
- (_Bool)shouldMatchModel:(id)arg1;	// IMP=0x000000000003fdd4
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000003fce6
- (_Bool)shouldMatchElement:(id)arg1;	// IMP=0x000000000003fcde
- (id)initWithFlowManager:(id)arg1;	// IMP=0x000000000003fc7a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) RUIObjectModel *objectModel;
@property(readonly) Class superclass;

@end
