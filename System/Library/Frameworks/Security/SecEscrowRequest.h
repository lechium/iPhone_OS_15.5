//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Security/SecEscrowRequestable-Protocol.h>

@class NSString, NSXPCConnection;

@interface SecEscrowRequest : NSObject <SecEscrowRequestable>
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

+ (id)request:(id *)arg1;	// IMP=0x000000000002549c
- (void).cxx_destruct;	// IMP=0x0000000000024634
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (_Bool)escrowCompletedWithinLastSeconds:(double)arg1;	// IMP=0x000000000002446c
- (_Bool)pendingEscrowUpload:(id *)arg1;	// IMP=0x00000000000241c5
- (unsigned long long)storePrerecordsInEscrow:(id *)arg1;	// IMP=0x000000000002400c
- (_Bool)resetAllRequests:(id *)arg1;	// IMP=0x0000000000023e9c
- (id)fetchStatuses:(id *)arg1;	// IMP=0x0000000000023cc4
- (id)fetchRequestWaitingOnPasscode:(id *)arg1;	// IMP=0x0000000000023ad5
- (id)fetchPrerecord:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000238b6
- (_Bool)cachePrerecord:(id)arg1 serializedPrerecord:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000236f1
- (_Bool)triggerEscrowUpdate:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002352c
- (_Bool)triggerEscrowUpdate:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000023515
- (void)dealloc;	// IMP=0x00000000000234aa
- (id)initWithConnection:(id)arg1;	// IMP=0x000000000002343f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

