//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface NARApplicationWorkspace : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000001ed6
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)_loadConnectionIfNeeded;	// IMP=0x0000000000001d1f
- (void)_connectionInvalidated;	// IMP=0x0000000000001c84
- (id)_workspaceServiceWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001c6e
- (void)getWorkspaceInfoIncludingHiddenApps:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000001a89
- (void)getWorkspaceInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000183b
- (id)workspaceInfo:(id *)arg1;	// IMP=0x0000000000001506
- (void)dealloc;	// IMP=0x00000000000014c4
- (id)init;	// IMP=0x000000000000146c

@end
