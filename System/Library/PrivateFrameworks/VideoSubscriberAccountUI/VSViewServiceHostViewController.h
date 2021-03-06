//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <VideoSubscriberAccountUI/VSViewServiceRemoteViewControllerDelegate-Protocol.h>

@class NSMutableDictionary, NSString, VSOptional, VSViewControllerFactory, VSViewServiceRemoteViewController;
@protocol VSViewServiceHostViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSViewServiceHostViewController : UIViewController <VSViewServiceRemoteViewControllerDelegate>
{
    _Bool _hasRetriedOnce;	// 8 = 0x8
    _Bool _hasRequestedPresentation;	// 9 = 0x9
    id <VSViewServiceHostViewControllerDelegate> _delegate;	// 16 = 0x10
    NSMutableDictionary *_requestsByID;	// 24 = 0x18
    VSOptional *_currentRequest;	// 32 = 0x20
    VSViewServiceRemoteViewController *_remoteViewController;	// 40 = 0x28
    VSViewControllerFactory *_viewControllerFactory;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000004450
@property(retain, nonatomic) VSViewControllerFactory *viewControllerFactory; // @synthesize viewControllerFactory=_viewControllerFactory;
@property(nonatomic) _Bool hasRequestedPresentation; // @synthesize hasRequestedPresentation=_hasRequestedPresentation;
@property(nonatomic) _Bool hasRetriedOnce; // @synthesize hasRetriedOnce=_hasRetriedOnce;
@property(retain, nonatomic) VSViewServiceRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(retain, nonatomic) VSOptional *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(retain, nonatomic) NSMutableDictionary *requestsByID; // @synthesize requestsByID=_requestsByID;
@property(nonatomic) __weak id <VSViewServiceHostViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_addRemoteViewControllerAsChildViewController;	// IMP=0x0000000000004213
- (void)_removeRemoteViewControllerAsChildViewController;	// IMP=0x0000000000004149
- (void)_connectToViewServiceForRequest:(id)arg1;	// IMP=0x0000000000003bb9
- (void)viewServiceRemoteViewController:(id)arg1 didSelectProviderWithIdentifier:(id)arg2 vetoHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000003b6c
- (void)viewServiceRemoteViewController:(id)arg1 didCancelRequest:(id)arg2;	// IMP=0x0000000000003b17
- (void)viewServiceRemoteViewController:(id)arg1 didChooseAdditionalProvidersForRequest:(id)arg2;	// IMP=0x0000000000003ac2
- (void)viewServiceRemoteViewController:(id)arg1 request:(id)arg2 didFailWithError:(id)arg3;	// IMP=0x0000000000003a5e
- (void)viewServiceRemoteViewController:(id)arg1 didTerminateWithError:(id)arg2;	// IMP=0x00000000000036d4
- (void)viewServiceRemoteViewController:(id)arg1 request:(id)arg2 didFinishWithResponse:(id)arg3;	// IMP=0x0000000000003670
- (void)dismissViewServiceRemoteViewController:(id)arg1;	// IMP=0x0000000000003627
- (void)presentViewServiceRemoteViewController:(id)arg1;	// IMP=0x00000000000035d2
- (_Bool)isModalInPresentation;	// IMP=0x00000000000035ca
- (long long)modalPresentationStyle;	// IMP=0x00000000000035bf
- (void)_cancelButtonPressed:(id)arg1;	// IMP=0x00000000000033f7
- (_Bool)_shouldAuthenticateAccountProviderWithIdentifier:(id)arg1;	// IMP=0x000000000000337d
- (void)_dismissViewServiceHostViewController;	// IMP=0x0000000000003331
- (void)_presentViewServiceHostViewController;	// IMP=0x00000000000032e5
- (void)_didChooseAdditionalProvidersForRequest:(id)arg1;	// IMP=0x00000000000031ee
- (void)_didCancelRequest:(id)arg1;	// IMP=0x00000000000030f7
- (void)_request:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000002fb5
- (void)_request:(id)arg1 didFinishWithResponse:(id)arg2;	// IMP=0x0000000000002e73
- (void)_didCompleteRequest:(id)arg1;	// IMP=0x0000000000002bee
- (id)_requestForID:(id)arg1;	// IMP=0x0000000000002b3e
- (void)enqueueViewServiceRequest:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x00000000000029a5
- (void)dealloc;	// IMP=0x000000000000296f
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000002883

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

