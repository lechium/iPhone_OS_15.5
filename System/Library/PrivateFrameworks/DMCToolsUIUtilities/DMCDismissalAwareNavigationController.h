//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

@interface DMCDismissalAwareNavigationController : UINavigationController
{
    _Bool _isPresentingAlert;	// 8 = 0x8
    CDUnknownBlockType _transitionCompletionBlock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000085c1
@property(copy, nonatomic) CDUnknownBlockType transitionCompletionBlock; // @synthesize transitionCompletionBlock=_transitionCompletionBlock;
@property(nonatomic) _Bool isPresentingAlert; // @synthesize isPresentingAlert=_isPresentingAlert;
- (id)rootViewController;	// IMP=0x000000000000852d
- (void)didShowViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000083dc
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000000822d
- (void)presentAlert:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000007e4e
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000007c96

@end

