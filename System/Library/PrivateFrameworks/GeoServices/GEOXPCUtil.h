//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GEOXPCUtil : NSObject
{
}

+ (id)createServerConnectionWithPort:(const char *)arg1 queue:(id)arg2 debugIdentifier:(id)arg3 eventHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000009e38e8
+ (id)createServerConnectionWithQueue:(id)arg1 debugIdentifier:(id)arg2 eventHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000009e38c6
+ (id)createServerConnectionWithDebugIdentifier:(id)arg1 eventHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000009e38a5
+ (void)setDefaultXPCServerConnectionQueue:(id)arg1;	// IMP=0x00000000009e37f4
+ (id)defaultXPCServerConnectionQueue;	// IMP=0x00000000009e3756
+ (void)setDaemonXPCConnectionCreationBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000009e3690
+ (CDUnknownBlockType)daemonXPCConnectionCreationBlock;	// IMP=0x00000000009e35eb

@end

