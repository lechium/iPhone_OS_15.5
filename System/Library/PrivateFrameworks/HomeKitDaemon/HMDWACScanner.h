//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HAPAirPlayAccessoryBrowserDelegate-Protocol.h>
#import <HomeKitDaemon/HMDWACScanner-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class CUWiFiScanner, NSString;
@protocol HMDWACScannerDelegate, OS_dispatch_queue;

@interface HMDWACScanner : NSObject <HMFLogging, HAPAirPlayAccessoryBrowserDelegate, HMDWACScanner>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    CUWiFiScanner *_wifiScanner;	// 16 = 0x10
    id <HMDWACScannerDelegate> _delegate;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x000000000063e822
- (void).cxx_destruct;	// IMP=0x000000000063c214
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <HMDWACScannerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)wacBrowser:(id)arg1 didUpdateAirPlayDevice:(id)arg2;	// IMP=0x000000000063c147
- (void)wacBrowser:(id)arg1 didRemoveAirPlayDevice:(id)arg2;	// IMP=0x000000000063c0bc
- (void)wacBrowser:(id)arg1 didFindAirPlayDevice:(id)arg2;	// IMP=0x000000000063c031
- (void)stop;	// IMP=0x000000000063bfe6
- (void)resume;	// IMP=0x000000000063bf9b
- (void)backoff;	// IMP=0x000000000063bf50
- (void)startDiscoveringAirPlayAccessoriesWithBrowser:(id)arg1;	// IMP=0x000000000063bec5
- (void)start;	// IMP=0x000000000063be7a
- (void)setDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x000000000063bdc2
- (id)init;	// IMP=0x000000000063bd64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
