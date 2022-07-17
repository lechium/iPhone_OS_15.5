//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SYDDaemonToClientConnection, SYDStoreConfiguration, SYDSyncManager;

@protocol SYDDaemonToClientConnectionDelegate
- (void)processAccountChanges;
- (SYDSyncManager *)connection:(SYDDaemonToClientConnection *)arg1 syncManagerForStoreConfiguration:(SYDStoreConfiguration *)arg2;
- (void)connectionDidInvalidate:(SYDDaemonToClientConnection *)arg1;
@end
