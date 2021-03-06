//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSXPCListener, SHAPSConnection;

__attribute__((visibility("hidden")))
@interface SHServer : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableArray *_connections;	// 16 = 0x10
    SHAPSConnection *_apsConnection;	// 24 = 0x18
    NSXPCListener *_listener;	// 32 = 0x20
}

+ (void)start;	// IMP=0x00200000000020ac
- (void).cxx_destruct;	// IMP=0x002000000000215d
@property(nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(readonly, nonatomic) SHAPSConnection *apsConnection; // @synthesize apsConnection=_apsConnection;
@property(readonly, nonatomic) NSMutableArray *connections; // @synthesize connections=_connections;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000001a81
- (void)configure;	// IMP=0x00100000000018cf
- (id)init;	// IMP=0x00100000000017f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

