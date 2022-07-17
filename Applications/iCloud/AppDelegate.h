//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class NSMutableDictionary, NSMutableSet, NSObject, NSString, UIWindow;
@protocol OS_dispatch_queue;

@interface AppDelegate : UIResponder
{
    _Bool _isInitialized;	// 8 = 0x8
    UIWindow *_window;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_acceptQueue;	// 24 = 0x18
    NSMutableSet *_activeSharingURLs;	// 32 = 0x20
    NSMutableDictionary *_activeVettingURLToVettingAcceptor;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000001abd7
@property(retain, nonatomic, getter=activeVettingURLToVettingAcceptor) NSMutableDictionary *activeVettingURLToVettingAcceptor; // @synthesize activeVettingURLToVettingAcceptor=_activeVettingURLToVettingAcceptor;
@property(retain, nonatomic, getter=activeSharingURLs) NSMutableSet *activeSharingURLs; // @synthesize activeSharingURLs=_activeSharingURLs;
@property(retain, nonatomic, getter=acceptQueue) NSObject<OS_dispatch_queue> *acceptQueue; // @synthesize acceptQueue=_acceptQueue;
@property(nonatomic) _Bool isInitialized; // @synthesize isInitialized=_isInitialized;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001ab41
- (_Bool)handleUniversalLinkInUserActivity:(id)arg1;	// IMP=0x001000000001aa23
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x001000000001a958
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x001000000001a950
- (_Bool)_canBeAcceptedOnWatch:(id)arg1;	// IMP=0x001000000001a8b9
- (_Bool)_handleURL:(id)arg1;	// IMP=0x001000000001a66f
- (void)vetURL:(id)arg1;	// IMP=0x0010000000019d04
- (void)acceptShareWithMetadata:(id)arg1 shareURL:(id)arg2;	// IMP=0x0010000000019c72
- (void)acceptShareWithURL:(id)arg1;	// IMP=0x0010000000019bf9
- (void)_acceptShareWithAcceptor:(id)arg1;	// IMP=0x00100000000191fd
- (void)initOnce;	// IMP=0x0010000000018f93
- (_Bool)_shouldLaunchAcceptFlowForShareURL:(id)arg1;	// IMP=0x0010000000018e40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
