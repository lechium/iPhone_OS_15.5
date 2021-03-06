//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

#import <StoreKit/SKCloudServiceSetupExtensionClientInterface-Protocol.h>

@class NSString;
@protocol SKCloudServiceSetupRemoteViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKCloudServiceSetupRemoteViewController : _UIRemoteViewController <SKCloudServiceSetupExtensionClientInterface>
{
    id <SKCloudServiceSetupRemoteViewControllerDelegate> _delegate;	// 8 = 0x8
}

+ (id)serviceViewControllerInterface;	// IMP=0x0000000000022b75
+ (id)exportedInterface;	// IMP=0x0000000000022b5c
- (void).cxx_destruct;	// IMP=0x0000000000022ea6
@property(nonatomic) __weak id <SKCloudServiceSetupRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)presentSafariViewControllerWithURL:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000022de9
- (void)overrideRedeemCameraPerformAction:(long long)arg1 withObject:(id)arg2;	// IMP=0x0000000000022d71
- (void)overrideCreditCardPresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000022cff
- (void)dismissSafariViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000022c84
- (void)dismissCloudServiceSetupViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000022c09
- (void)didFinishLoadingWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x0000000000022b8e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

