//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

#import <HealthUI/HKHealthPrivacyHostRemoteViewController-Protocol.h>

@protocol HKHealthPrivacyHostRecalibrateEstimatesControllerDelegate, HKHealthPrivacyServiceRemoteRecalibrateEstimatesViewController;

@interface HKHealthPrivacyHostRecalibrateEstimatesViewController : _UIRemoteViewController <HKHealthPrivacyHostRemoteViewController>
{
    id <HKHealthPrivacyHostRecalibrateEstimatesControllerDelegate> _delegate;	// 8 = 0x8
}

+ (id)exportedInterface;	// IMP=0x00000000002709f8
+ (id)serviceViewControllerInterface;	// IMP=0x00000000002709ee
+ (_Bool)shouldPropagateAppearanceCustomizations;	// IMP=0x00000000002709c2
+ (id)requestRemoteViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000270960
- (void).cxx_destruct;	// IMP=0x0000000000270a2f
@property(nonatomic) __weak id <HKHealthPrivacyHostRecalibrateEstimatesControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x00000000002709dc
@property(readonly, nonatomic) id <HKHealthPrivacyServiceRemoteRecalibrateEstimatesViewController> _healthPrivacyServiceViewControllerProxy;
- (void)didFinishWithError:(id)arg1;	// IMP=0x00000000002708ee
- (void)setRequestRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000270868

@end

