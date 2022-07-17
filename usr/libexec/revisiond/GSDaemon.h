//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCListener;
@protocol OS_dispatch_source;

@interface GSDaemon : NSObject
{
    NSObject<OS_dispatch_source> *_int_src;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_term_src;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_quit_src;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_hup_src;	// 32 = 0x20
    NSXPCListener *_listener;	// 40 = 0x28
}

+ (id)daemon;	// IMP=0x002000000000d978
- (void).cxx_destruct;	// IMP=0x002000000000e0a1
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000000de27
- (void)invalidate;	// IMP=0x001000000000dd50
- (int)resume;	// IMP=0x001000000000dce0
- (void)_resume;	// IMP=0x001000000000dbdd
- (void)waitUntilDeviceIsUnlocked;	// IMP=0x001000000000dbd7
- (id)_registerSignal:(int)arg1 queue:(id)arg2;	// IMP=0x001000000000db24
- (id)init;	// IMP=0x001000000000d9cd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
