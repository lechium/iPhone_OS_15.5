//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSError, PUPickerConfiguration, PXContentUnavailableView;
@protocol _PUPickerUnavailableUIViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface _PUPickerUnavailableUIViewController : UIViewController
{
    unsigned long long _reason;	// 8 = 0x8
    PUPickerConfiguration *_configuration;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    id <_PUPickerUnavailableUIViewControllerDelegate> _delegate;	// 32 = 0x20
    PXContentUnavailableView *_unavailableView;	// 40 = 0x28
}

+ (id)unavailableUIViewControllerEmbeddedInNavigationController:(unsigned long long)arg1 configuration:(id)arg2 error:(id)arg3 delegate:(id)arg4;	// IMP=0x00000000001955d0
+ (id)unavailableUIViewController:(unsigned long long)arg1 configuration:(id)arg2 error:(id)arg3 delegate:(id)arg4;	// IMP=0x0000000000195520
- (void).cxx_destruct;	// IMP=0x000000000019549e
@property(readonly, nonatomic) PXContentUnavailableView *unavailableView; // @synthesize unavailableView=_unavailableView;
@property(nonatomic) __weak id <_PUPickerUnavailableUIViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) PUPickerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) unsigned long long reason; // @synthesize reason=_reason;
- (void)askDelegateToRetry;	// IMP=0x00000000001953e4
- (void)askDelegateToCancel;	// IMP=0x0000000000195387
- (id)reasonDebugDescription;	// IMP=0x0000000000195340
- (id)unavailableButtonTitle;	// IMP=0x00000000001952f5
- (id)unavailableMessage;	// IMP=0x00000000001951f1
- (id)unavailableTitle;	// IMP=0x00000000001950ca
- (void)updateUnavailableView;	// IMP=0x0000000000194ef4
- (void)cancelButtonTapped:(id)arg1;	// IMP=0x0000000000194ee2
- (void)updateReason:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x0000000000194e8f
- (void)viewDidLoad;	// IMP=0x0000000000194a6e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001949eb
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000019495b
- (id)init;	// IMP=0x00000000001948e1
- (id)initWithReason:(unsigned long long)arg1 configuration:(id)arg2 error:(id)arg3;	// IMP=0x00000000001947b6

@end

