//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CURunLoopThread;
@protocol OS_dispatch_queue;

@interface CUMobileDeviceDiscovery : NSObject
{
    _Bool _activateCalled;	// 8 = 0x8
    _Bool _invalidateCalled;	// 9 = 0x9
    CURunLoopThread *_mdRunLoopThread;	// 16 = 0x10
    CUMobileDeviceDiscovery *_selfRef;	// 24 = 0x18
    unsigned int _changeFlags;	// 32 = 0x20
    unsigned int _discoveryFlags;	// 36 = 0x24
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 40 = 0x28
    CDUnknownBlockType _invalidationHandler;	// 48 = 0x30
    CDUnknownBlockType _deviceFoundHandler;	// 56 = 0x38
    CDUnknownBlockType _deviceLostHandler;	// 64 = 0x40
    CDUnknownBlockType _deviceChangedHandler;	// 72 = 0x48
}

+ (void)getDevicesWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000749d5
- (void).cxx_destruct;	// IMP=0x00000000000746d7
@property(copy, nonatomic) CDUnknownBlockType deviceChangedHandler; // @synthesize deviceChangedHandler=_deviceChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceLostHandler; // @synthesize deviceLostHandler=_deviceLostHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceFoundHandler; // @synthesize deviceFoundHandler=_deviceFoundHandler;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(nonatomic) unsigned int discoveryFlags; // @synthesize discoveryFlags=_discoveryFlags;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) unsigned int changeFlags; // @synthesize changeFlags=_changeFlags;
- (void)_mdThreadFinalize;	// IMP=0x000000000007462e
- (void)_mdThreadInitialize;	// IMP=0x0000000000074628
- (void)_invalidated;	// IMP=0x000000000007451c
- (void)invalidate;	// IMP=0x00000000000744d1
- (void)activate;	// IMP=0x0000000000074486
- (id)init;	// IMP=0x000000000007440a

@end
