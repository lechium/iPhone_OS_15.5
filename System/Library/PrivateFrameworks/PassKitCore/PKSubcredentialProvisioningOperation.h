//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PKSubcredentialProvisioningConfiguration, PKSubcredentialProvisioningOperationContext;
@protocol PKSubcredentialProvisioningOperationDelegate;

@interface PKSubcredentialProvisioningOperation : NSObject
{
    _Bool _inProgress;	// 8 = 0x8
    _Bool _canCancelOperation;	// 9 = 0x9
    _Bool _canBeRestarted;	// 10 = 0xa
    id <PKSubcredentialProvisioningOperationDelegate> _delegate;	// 16 = 0x10
    PKSubcredentialProvisioningConfiguration *_configuration;	// 24 = 0x18
    PKSubcredentialProvisioningOperationContext *_context;	// 32 = 0x20
}

+ (id)operationForState:(long long)arg1 configuration:(id)arg2 context:(id)arg3 delegate:(id)arg4;	// IMP=0x00000000004460c4
- (void).cxx_destruct;	// IMP=0x000000000044667b
@property(readonly, nonatomic) _Bool canBeRestarted; // @synthesize canBeRestarted=_canBeRestarted;
@property(readonly, nonatomic) _Bool canCancelOperation; // @synthesize canCancelOperation=_canCancelOperation;
@property(readonly, nonatomic) PKSubcredentialProvisioningOperationContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) PKSubcredentialProvisioningConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) __weak id <PKSubcredentialProvisioningOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)failWithErrorCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3;	// IMP=0x0000000000446535
- (void)failWithErrorCode:(long long)arg1 description:(id)arg2;	// IMP=0x0000000000446520
- (void)failWithError:(id)arg1;	// IMP=0x00000000004464ad
- (void)advanceToState:(long long)arg1;	// IMP=0x0000000000446453
@property(readonly, nonatomic, getter=isInProgress) _Bool inProgress;
- (void)cancelOperation;	// IMP=0x000000000044642f
- (void)performOperation;	// IMP=0x000000000044636a
- (id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3;	// IMP=0x00000000004462c0

@end
