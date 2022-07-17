//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface CXCallDirectoryManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSXPCConnection *_defaultConnection;	// 16 = 0x10
    NSXPCConnection *_maintenanceConnection;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0000000000043604
- (void).cxx_destruct;	// IMP=0x00000000000455ad
@property(retain, nonatomic) NSXPCConnection *maintenanceConnection; // @synthesize maintenanceConnection=_maintenanceConnection;
@property(retain, nonatomic) NSXPCConnection *defaultConnection; // @synthesize defaultConnection=_defaultConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)setPrioritizedExtensionIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004531a
- (void)getExtensionsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004514f
- (void)compactStoreWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000044f86
- (void)openSettingsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000044db8
- (void)synchronizeExtensionsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000044bef
- (void)firstIdentificationEntriesForEnabledExtensionsWithPhoneNumbers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000449fc
- (void)firstIdentificationEntryForEnabledExtensionWithPhoneNumber:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000044870
- (void)setEnabled:(_Bool)arg1 forExtensionWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000044602
- (void)getEnabledStatusForExtensionWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000044360
- (void)reloadExtensionWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000440c2
- (id)maintenanceConnectionRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004403f
- (id)defaultConnectionRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000043fbc
- (void)dealloc;	// IMP=0x00000000000436f5
- (id)init;	// IMP=0x000000000004369d

@end
