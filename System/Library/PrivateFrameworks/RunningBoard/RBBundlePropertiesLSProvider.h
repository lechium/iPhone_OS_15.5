//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RunningBoard/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class NSCache, NSString;
@protocol RBBundlePropertiesLSProviderDelegate;

@interface RBBundlePropertiesLSProvider : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    NSCache *_propertiesByIdentity;	// 8 = 0x8
    id <RBBundlePropertiesLSProviderDelegate> _delegate;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000004737c
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x0000000000047372
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x00000000000470c4
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;	// IMP=0x0000000000046dbc
- (id)propertiesForIdentity:(id)arg1;	// IMP=0x0000000000046bc5
@property(nonatomic) __weak id <RBBundlePropertiesLSProviderDelegate> delegate;
- (id)init;	// IMP=0x00000000000469cb

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
