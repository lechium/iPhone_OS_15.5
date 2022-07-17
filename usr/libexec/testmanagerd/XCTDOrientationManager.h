//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, XCTDOrientationChangeRequest;
@protocol XCAXManager, XCTDBKSAccelerometer, XCTDOrientationManagerDelegate;

@interface XCTDOrientationManager : NSObject
{
    _Bool _valid;	// 8 = 0x8
    _Bool _hasPreparedAX;	// 9 = 0x9
    id <XCTDOrientationManagerDelegate> _delegate;	// 16 = 0x10
    id <XCTDBKSAccelerometer> _accelerometer;	// 24 = 0x18
    CDUnknownFunctionPointerType _setDeviceOrientationFunc;	// 32 = 0x20
    id <XCAXManager> _axManager;	// 40 = 0x28
    NSNumber *_axToken;	// 48 = 0x30
    XCTDOrientationChangeRequest *_currentChangeRequest;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000002f7c4
@property(retain) XCTDOrientationChangeRequest *currentChangeRequest; // @synthesize currentChangeRequest=_currentChangeRequest;
@property(copy) NSNumber *axToken; // @synthesize axToken=_axToken;
@property _Bool hasPreparedAX; // @synthesize hasPreparedAX=_hasPreparedAX;
@property(getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(readonly) __weak id <XCAXManager> axManager; // @synthesize axManager=_axManager;
@property(readonly) CDUnknownFunctionPointerType setDeviceOrientationFunc; // @synthesize setDeviceOrientationFunc=_setDeviceOrientationFunc;
@property(readonly) id <XCTDBKSAccelerometer> accelerometer; // @synthesize accelerometer=_accelerometer;
@property(readonly) __weak id <XCTDOrientationManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;	// IMP=0x001000000002f706
- (void)rotateDeviceToOrientation:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002f39a
- (void)_prepareAXManager;	// IMP=0x001000000002f0cc
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(long long)arg2;	// IMP=0x001000000002efb9
@property(readonly) long long interfaceOrientation;
@property(readonly) long long deviceOrientation;
- (id)initWithDelegate:(id)arg1 axManager:(id)arg2 accelerometer:(id)arg3 setDeviceOrientationFunc:(CDUnknownFunctionPointerType)arg4;	// IMP=0x001000000002ec8f
- (id)initWithDelegate:(id)arg1 axManager:(id)arg2;	// IMP=0x001000000002ec04
- (void)invalidate;	// IMP=0x001000000002ea4a
- (void)dealloc;	// IMP=0x001000000002e998

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
