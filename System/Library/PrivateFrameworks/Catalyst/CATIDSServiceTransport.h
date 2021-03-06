//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATIDSServiceConnectionDelegate-Protocol.h>

@class CATIDSServiceConnection, NSMutableArray;

@interface CATIDSServiceTransport <CATIDSServiceConnectionDelegate>
{
    CATIDSServiceConnection *mConnection;	// 8 = 0x8
    NSMutableArray *mReceiveQueue;	// 16 = 0x10
    _Bool mIsActive;	// 24 = 0x18
    _Bool mDidDelegateInvalidation;	// 25 = 0x19
}

- (void).cxx_destruct;	// IMP=0x0000000000015c2f
- (void)serviceReceiveQueue;	// IMP=0x0000000000015b6e
- (void)tryReportingInvalidation;	// IMP=0x0000000000015b49
- (void)connectionClosed:(id)arg1;	// IMP=0x0000000000015a73
- (void)connection:(id)arg1 receivedData:(id)arg2;	// IMP=0x00000000000158e7
- (id)name;	// IMP=0x0000000000015801
- (id)operationToSendMessage:(id)arg1;	// IMP=0x000000000001579d
- (void)invalidateConnection;	// IMP=0x0000000000015756
- (void)suspendConnection;	// IMP=0x000000000001571a
- (void)resumeConnection;	// IMP=0x000000000001565b
- (id)initWithConnection:(id)arg1;	// IMP=0x00000000000155b1

@end

