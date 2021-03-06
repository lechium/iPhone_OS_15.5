//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NBRemoteObjectClassC, NSURL, NSUUID;

@protocol NBRemoteObjectClassCDelegate <NSObject>
- (void)remoteObjectReceivedRestorePayloadRequest:(NSURL *)arg1 requestIdentifier:(id)arg2;
- (void)remoteObjectReceivedDeleteBackupRequest:(NSUUID *)arg1 requestIdentifier:(id)arg2;
- (void)remoteObjectReceivedCreateBackupRequest:(id)arg1;
- (void)remoteObjectReceivedRestoreRequest:(NSUUID *)arg1 requestIdentifier:(id)arg2;
- (void)remoteObjectReceivedBackupListRequest:(NBRemoteObjectClassC *)arg1 requestIdentifier:(id)arg2;
@end

