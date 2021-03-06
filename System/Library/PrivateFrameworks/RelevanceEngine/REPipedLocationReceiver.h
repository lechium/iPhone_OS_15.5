//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelevanceEngine/REPipedLocationDonor-Protocol.h>

@class CLLocation, NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface REPipedLocationReceiver <REPipedLocationDonor>
{
    NSXPCConnection *_connection;	// 8 = 0x8
    CLLocation *_location;	// 16 = 0x10
    long long _connectionWindowRetainCount;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000006350f
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_queue_clearConnection;	// IMP=0x00000000000634a9
- (void)_queue_setupConnection;	// IMP=0x00000000000630de
@property(copy, nonatomic) CLLocation *location;
- (void)_queue_setLocation:(id)arg1;	// IMP=0x0000000000062c44
- (void)dealloc;	// IMP=0x0000000000062b4c
- (id)_init;	// IMP=0x0000000000062aed

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

