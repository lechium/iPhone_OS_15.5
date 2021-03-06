//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIViewController;

@interface AAUICustodianRecoveryApprovalController : NSObject
{
    NSString *_recoverySessionID;	// 8 = 0x8
    UIViewController *_presenter;	// 16 = 0x10
    _Bool _isResetEligible;	// 24 = 0x18
}

+ (id)approvalControllerWithPresenter:(id)arg1 recoverySessionID:(id)arg2;	// IMP=0x0000000000003cea
- (void).cxx_destruct;	// IMP=0x0000000000004e52
@property(nonatomic) _Bool isResetEligible; // @synthesize isResetEligible=_isResetEligible;
- (id)_actionsForRecoveryCodeAlert:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004b0a
- (void)_promptForRecoveryCodeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000041c4
- (void)_validateRecoveryCode:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000040a8
- (void)validateRecoveryCodeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003e6d
- (void)dealloc;	// IMP=0x0000000000003de9

@end

