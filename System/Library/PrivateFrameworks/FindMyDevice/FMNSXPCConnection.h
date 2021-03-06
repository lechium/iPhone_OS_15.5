//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FindMyDevice/FMNSXPCConnecting-Protocol.h>

@class FMFuture, NSString, NSXPCConnection;

@interface FMNSXPCConnection : NSObject <FMNSXPCConnecting>
{
    _Bool __testMockConnection;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    FMFuture *_future;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001578d
@property(nonatomic) _Bool _testMockConnection; // @synthesize _testMockConnection=__testMockConnection;
@property(retain, nonatomic) FMFuture *future; // @synthesize future=_future;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)destroyXPCConnection;	// IMP=0x000000000001573f
- (void)invalidate;	// IMP=0x000000000001572d
@property(readonly, nonatomic) long long state;
- (void)addFailureBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001554f
- (id)remoteObjectProxy;	// IMP=0x00000000000152f3
- (void)dealloc;	// IMP=0x00000000000152b5
- (id)initWithConfiguration:(id)arg1 exportedObject:(id)arg2;	// IMP=0x0000000000014be9
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000014bd5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

