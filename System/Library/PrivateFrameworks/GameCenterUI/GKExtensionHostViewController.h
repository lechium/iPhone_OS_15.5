//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

#import <GameCenterUI/GKSocialGamingExtensionInterface-Protocol.h>
#import <GameCenterUI/GKSocialGamingHostInterface-Protocol.h>

@class NSMapTable, NSString, UIViewController;
@protocol GKExtensionHostViewControllerDelegate, GKSocialGamingHostInterface;

@interface GKExtensionHostViewController : _UIRemoteViewController <GKSocialGamingHostInterface, GKSocialGamingExtensionInterface>
{
    id <GKExtensionHostViewControllerDelegate> _delegate;	// 8 = 0x8
    UIViewController<GKSocialGamingHostInterface> *_hostViewController;	// 16 = 0x10
    NSMapTable *_targetForSelector;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000018fb43
@property(retain, nonatomic) NSMapTable *targetForSelector; // @synthesize targetForSelector=_targetForSelector;
@property(nonatomic) __weak UIViewController<GKSocialGamingHostInterface> *hostViewController; // @synthesize hostViewController=_hostViewController;
@property(nonatomic) __weak id <GKExtensionHostViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000000018f9c2
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x000000000018f7e8
- (id)methodSignatureForProtocol:(id)arg1 selector:(SEL)arg2;	// IMP=0x000000000018f761
- (void)buildLookupForHost:(id)arg1;	// IMP=0x000000000018f58a
- (void)addTarget:(id)arg1 forProtocol:(id)arg2 toLookup:(id)arg3;	// IMP=0x000000000018f398
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x000000000018f2b7
- (oneway void)extensionWillFinish;	// IMP=0x000000000018f27a
- (oneway void)finishExtension;	// IMP=0x000000000018f23d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
