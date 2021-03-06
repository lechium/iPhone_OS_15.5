//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKXPCLogicalDeviceScopedDaemon-Protocol.h>

@class CKDLogicalDeviceContext;

@interface CKDLogicalDeviceScopedStateManager : NSObject <CKXPCLogicalDeviceScopedDaemon>
{
    CKDLogicalDeviceContext *_deviceContext;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000154d65
@property(nonatomic) __weak CKDLogicalDeviceContext *deviceContext; // @synthesize deviceContext=_deviceContext;
- (void)addClouddThrottle:(id)arg1;	// IMP=0x0000000000154cae
- (void)allClouddThrottlesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000154c01
- (void)clearAllClouddThrottles;	// IMP=0x0000000000154b97
- (id)initWithDeviceContext:(id)arg1;	// IMP=0x0000000000154b33

@end

