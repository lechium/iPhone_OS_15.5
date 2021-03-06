//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, NSString, NSXPCConnection, NSXPCStoreServerConnectionContext;

@protocol NSXPCStoreServerDelegate

@optional
- (NSString *)identifierForConnection:(NSXPCConnection *)arg1;
- (void)performRecoveryForError:(NSError *)arg1 fromContext:(NSXPCStoreServerConnectionContext *)arg2;
- (_Bool)willPerformRecoveryForError:(NSError *)arg1 fromContext:(NSXPCStoreServerConnectionContext *)arg2;
@end

