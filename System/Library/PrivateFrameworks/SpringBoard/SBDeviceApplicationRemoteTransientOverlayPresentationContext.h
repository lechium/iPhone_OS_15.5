//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SBRemoteTransientOverlayViewController, SBSRemoteAlertPresentationTarget;

@interface SBDeviceApplicationRemoteTransientOverlayPresentationContext : NSObject
{
    SBRemoteTransientOverlayViewController *_remoteViewController;	// 8 = 0x8
    SBSRemoteAlertPresentationTarget *_presentationTarget;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000601342
@property(retain, nonatomic) SBSRemoteAlertPresentationTarget *presentationTarget; // @synthesize presentationTarget=_presentationTarget;
@property(retain, nonatomic) SBRemoteTransientOverlayViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;

@end
