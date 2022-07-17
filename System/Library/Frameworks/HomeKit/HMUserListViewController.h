//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <HomeKit/HMUserManagementRemoteHost-Protocol.h>

@class HMHome, HMUserListRemoteViewController, _UIAsyncInvocation;

__attribute__((visibility("hidden")))
@interface HMUserListViewController : UIViewController <HMUserManagementRemoteHost>
{
    _Bool _shouldPresentWhenLoaded;	// 8 = 0x8
    HMHome *_home;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
    CDUnknownBlockType _loadHandler;	// 32 = 0x20
    _UIAsyncInvocation *_cancelServiceInvocation;	// 40 = 0x28
    HMUserListRemoteViewController *_remoteViewController;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000262388
@property(retain, nonatomic) HMUserListRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(retain, nonatomic) _UIAsyncInvocation *cancelServiceInvocation; // @synthesize cancelServiceInvocation=_cancelServiceInvocation;
@property(copy, nonatomic) CDUnknownBlockType loadHandler; // @synthesize loadHandler=_loadHandler;
@property(nonatomic) _Bool shouldPresentWhenLoaded; // @synthesize shouldPresentWhenLoaded=_shouldPresentWhenLoaded;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
- (void)_presentAsTopmostViewController;	// IMP=0x00000000002620a9
- (void)userManagementDidFinishWithError:(id)arg1;	// IMP=0x000000000026200c
- (void)userManagementDidLoad;	// IMP=0x0000000000261fad
- (void)_finishSetupWithError:(id)arg1;	// IMP=0x0000000000261e6b
- (void)_configureAndAddRemoteViewController;	// IMP=0x0000000000261ae6
- (void)_requestRemoteViewController;	// IMP=0x0000000000261a23
- (void)viewDidLoad;	// IMP=0x0000000000261988
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000000026197d
- (_Bool)shouldAutorotate;	// IMP=0x0000000000261975
- (void)presentWhenLoaded;	// IMP=0x000000000026195e
- (id)initWithHome:(id)arg1 loadHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002618b3

@end
