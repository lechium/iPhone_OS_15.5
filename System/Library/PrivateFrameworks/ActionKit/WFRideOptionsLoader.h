//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActionKit/WFActionEventObserver-Protocol.h>
#import <ActionKit/WFDynamicEnumerationDataSource-Protocol.h>

@class CLPlacemark, NSArray, NSError, NSMutableArray, NSString, WFIntentExecutor, WFPaymentMethodParameter, WFRideOptionParameter;
@protocol OS_dispatch_queue, WFRideOptionsLoaderDelegate;

@interface WFRideOptionsLoader : NSObject <WFDynamicEnumerationDataSource, WFActionEventObserver>
{
    CLPlacemark *_pickupLocation;	// 8 = 0x8
    CLPlacemark *_dropOffLocation;	// 16 = 0x10
    NSString *_appBundleIdentifier;	// 24 = 0x18
    id <WFRideOptionsLoaderDelegate> _delegate;	// 32 = 0x20
    WFRideOptionParameter *_rideOptionParameterParameter;	// 40 = 0x28
    WFPaymentMethodParameter *_paymentMethodParameterParameter;	// 48 = 0x30
    NSArray *_rideOptions;	// 56 = 0x38
    NSArray *_paymentMethods;	// 64 = 0x40
    NSError *_loadingOptionsError;	// 72 = 0x48
    unsigned long long _loadingState;	// 80 = 0x50
    WFIntentExecutor *_executor;	// 88 = 0x58
    NSMutableArray *_completionBlocks;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_loadingOptionsQueue;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000003ab1fb
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *loadingOptionsQueue; // @synthesize loadingOptionsQueue=_loadingOptionsQueue;
@property(readonly, nonatomic) NSMutableArray *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
@property(retain, nonatomic) WFIntentExecutor *executor; // @synthesize executor=_executor;
@property(nonatomic) unsigned long long loadingState; // @synthesize loadingState=_loadingState;
@property(retain, nonatomic) NSError *loadingOptionsError; // @synthesize loadingOptionsError=_loadingOptionsError;
@property(copy, nonatomic) NSArray *paymentMethods; // @synthesize paymentMethods=_paymentMethods;
@property(copy, nonatomic) NSArray *rideOptions; // @synthesize rideOptions=_rideOptions;
@property(retain, nonatomic) WFPaymentMethodParameter *paymentMethodParameterParameter; // @synthesize paymentMethodParameterParameter=_paymentMethodParameterParameter;
@property(retain, nonatomic) WFRideOptionParameter *rideOptionParameterParameter; // @synthesize rideOptionParameterParameter=_rideOptionParameterParameter;
@property(nonatomic) __weak id <WFRideOptionsLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property(copy, nonatomic) CLPlacemark *dropOffLocation; // @synthesize dropOffLocation=_dropOffLocation;
@property(copy, nonatomic) CLPlacemark *pickupLocation; // @synthesize pickupLocation=_pickupLocation;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;	// IMP=0x00000000003aae8a
- (void)loadRideOptionsValueWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000003aadd9
- (void)loadPossibleStatesForEnumeration:(id)arg1 searchTerm:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000003aad1d
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;	// IMP=0x00000000003aab59
- (id)init;	// IMP=0x00000000003aa40b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
