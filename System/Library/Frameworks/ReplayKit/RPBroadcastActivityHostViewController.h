//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

#import <ReplayKit/RPBroadcastActivityCommunicationHostProtocol-Protocol.h>

@class RPBroadcastActivityViewController;

@interface RPBroadcastActivityHostViewController : _UIRemoteViewController <RPBroadcastActivityCommunicationHostProtocol>
{
    RPBroadcastActivityViewController *_broadcastActivityViewController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001111d
@property(nonatomic) __weak RPBroadcastActivityViewController *broadcastActivityViewController; // @synthesize broadcastActivityViewController=_broadcastActivityViewController;
- (oneway void)presentationInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000011059
- (long long)modalPresentationStyle;	// IMP=0x0000000000010fc2
- (unsigned long long)popoverArrowDirection;	// IMP=0x0000000000010f5a
- (struct CGRect)popoverControllerSourceRect;	// IMP=0x0000000000010d83
- (oneway void)extensionDidFinishWithLaunchURL:(id)arg1 broadcastURL:(id)arg2 extensionBundleID:(id)arg3 cancelled:(_Bool)arg4;	// IMP=0x0000000000010ceb
- (void)viewDidLoad;	// IMP=0x0000000000010c50

@end

