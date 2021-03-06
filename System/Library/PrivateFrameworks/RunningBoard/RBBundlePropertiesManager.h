//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RunningBoard/RBBundlePropertiesLSProviderDelegate-Protocol.h>
#import <RunningBoard/RBBundlePropertiesManaging-Protocol.h>
#import <RunningBoard/RBStateCapturing-Protocol.h>

@class NSString, RBBundlePropertiesBSXPCProvider, RBBundlePropertiesLSProvider, RBProcessIndex;
@protocol RBBundlePropertiesManagerDelegate;

@interface RBBundlePropertiesManager : NSObject <RBBundlePropertiesLSProviderDelegate, RBBundlePropertiesManaging, RBStateCapturing>
{
    RBBundlePropertiesLSProvider *_lsProvider;	// 8 = 0x8
    RBBundlePropertiesBSXPCProvider *_xpcProvider;	// 16 = 0x10
    RBProcessIndex *_processIndex;	// 24 = 0x18
    id <RBBundlePropertiesManagerDelegate> _delegate;	// 32 = 0x20
    struct os_unfair_lock_s _lock;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000007431d
- (id)captureState;	// IMP=0x000000000007430b
@property(readonly, copy, nonatomic) NSString *stateCaptureTitle;
- (void)bundlePropertiesProvider:(id)arg1 didChangePropertiesForProcessIdentities:(id)arg2;	// IMP=0x00000000000742e0
- (void)removeProcess:(id)arg1;	// IMP=0x0000000000074247
- (void)addProcess:(id)arg1;	// IMP=0x00000000000741f3
- (id)propertiesForIdentity:(id)arg1 identifier:(id)arg2;	// IMP=0x00000000000740ea
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <RBBundlePropertiesManagerDelegate> delegate;
- (id)init;	// IMP=0x0000000000073efc

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

