//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUWiFiScanner : NSObject
{
    _Bool _activateCalled;	// 8 = 0x8
    NSMutableDictionary *_devices;	// 16 = 0x10
    _Bool _invalidateCalled;	// 24 = 0x18
    _Bool _invalidateDone;	// 25 = 0x19
    _Bool _scanning;	// 26 = 0x1a
    NSObject<OS_dispatch_source> *_scanTimer;	// 32 = 0x20
    _Bool _suspended;	// 40 = 0x28
    struct LogCategory *_ucat;	// 48 = 0x30
    unsigned int _changeFlags;	// 56 = 0x38
    unsigned int _scanFlags;	// 60 = 0x3c
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 64 = 0x40
    NSString *_label;	// 72 = 0x48
    NSString *_ssid;	// 80 = 0x50
    CDUnknownBlockType _deviceFoundHandler;	// 88 = 0x58
    CDUnknownBlockType _deviceLostHandler;	// 96 = 0x60
    CDUnknownBlockType _deviceChangedHandler;	// 104 = 0x68
    CDUnknownBlockType _errorHandler;	// 112 = 0x70
    CDUnknownBlockType _invalidationHandler;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000000c967c
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceChangedHandler; // @synthesize deviceChangedHandler=_deviceChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceLostHandler; // @synthesize deviceLostHandler=_deviceLostHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceFoundHandler; // @synthesize deviceFoundHandler=_deviceFoundHandler;
@property(copy, nonatomic) NSString *ssid; // @synthesize ssid=_ssid;
@property(nonatomic) unsigned int scanFlags; // @synthesize scanFlags=_scanFlags;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) unsigned int changeFlags; // @synthesize changeFlags=_changeFlags;
- (void)_scanWiFiProcessResult:(id)arg1;	// IMP=0x00000000000c8ed9
- (void)_scanWiFiFinished:(id)arg1 status:(int)arg2;	// IMP=0x00000000000c890e
- (void)_scanWiFiStart;	// IMP=0x00000000000c86a0
- (void)resume;	// IMP=0x00000000000c8655
- (void)suspend;	// IMP=0x00000000000c860a
- (void)_invalidated;	// IMP=0x00000000000c8581
- (void)invalidate;	// IMP=0x00000000000c8536
- (void)activate;	// IMP=0x00000000000c84eb
- (void)_cleanup;	// IMP=0x00000000000c83c3
- (void)dealloc;	// IMP=0x00000000000c834c
- (id)init;	// IMP=0x00000000000c82c5

@end

