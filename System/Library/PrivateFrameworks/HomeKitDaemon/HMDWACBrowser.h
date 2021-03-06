//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDWACScannerDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMFMessageDispatcher, NSMutableDictionary, NSString;
@protocol HMDWACBrowserDelegate, HMDWACScanner, OS_dispatch_queue;

@interface HMDWACBrowser : NSObject <HMDWACScannerDelegate, HMFLogging>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    id <HMDWACScanner> _wacScanner;	// 16 = 0x10
    NSMutableDictionary *_unassociatedAccessories;	// 24 = 0x18
    HMFMessageDispatcher *_messageDispatcher;	// 32 = 0x20
    _Bool _scanIsActive;	// 40 = 0x28
    id <HMDWACBrowserDelegate> _delegate;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x00000000007358a5
- (void).cxx_destruct;	// IMP=0x0000000000734eb5
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <HMDWACBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property _Bool scanIsActive; // @synthesize scanIsActive=_scanIsActive;
- (void)scannerDidStop:(id)arg1;	// IMP=0x0000000000734c94
- (void)scanner:(id)arg1 didError:(id)arg2;	// IMP=0x0000000000734ba4
- (void)scanner:(id)arg1 didUpdateDevice:(id)arg2;	// IMP=0x000000000073491d
- (void)scanner:(id)arg1 didRemoveDevice:(id)arg2;	// IMP=0x00000000007348e0
- (void)scanner:(id)arg1 didAddDevice:(id)arg2;	// IMP=0x00000000007348d3
- (void)clearBackoff;	// IMP=0x00000000007347d2
- (void)requestBackoff;	// IMP=0x00000000007346d1
- (void)stopBrowsingForAccessories;	// IMP=0x0000000000734686
- (void)startBrowsingForAirPlayWACAccessoriesWithBrowser:(id)arg1;	// IMP=0x00000000007345fb
- (void)startBrowsingForAccessories;	// IMP=0x00000000007345b0
- (void)setDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x00000000007344f8
- (id)initWithWACScanner:(id)arg1 messageDispatcher:(id)arg2;	// IMP=0x0000000000734401

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

