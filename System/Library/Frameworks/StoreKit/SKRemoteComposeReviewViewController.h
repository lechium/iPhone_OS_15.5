//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

#import <StoreKit/SKUIClientComposeReviewViewController-Protocol.h>

@class NSString, SKComposeReviewViewController;

__attribute__((visibility("hidden")))
@interface SKRemoteComposeReviewViewController : _UIRemoteViewController <SKUIClientComposeReviewViewController>
{
    SKComposeReviewViewController *_composeReviewViewController;	// 8 = 0x8
}

+ (id)serviceViewControllerInterface;	// IMP=0x0000000000034cd3
+ (id)exportedInterface;	// IMP=0x0000000000034cb3
- (void).cxx_destruct;	// IMP=0x00000000000351f2
@property(nonatomic) __weak SKComposeReviewViewController *composeReviewViewController; // @synthesize composeReviewViewController=_composeReviewViewController;
- (void)promptForStarRating;	// IMP=0x0000000000035023
- (void)didPrepareWithResult:(id)arg1 error:(id)arg2;	// IMP=0x0000000000034f93
- (void)didFinishWithResult:(id)arg1 error:(id)arg2;	// IMP=0x0000000000034f03
- (void)_keyboardVisibilityDidChangeNotification:(id)arg1;	// IMP=0x0000000000034d50
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x0000000000034cf3
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x0000000000034c73
- (void)dealloc;	// IMP=0x0000000000034bd1
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000034b13

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

