//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AADeviceProvisioningSession : NSObject
{
    NSString *_dsid;	// 8 = 0x8
    unsigned long long _dsidNumber;	// 16 = 0x10
    struct OpaqueCFHTTPCookieStorage *_cookieStorageRef;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000034f45
- (int)eraseProvisioning;	// IMP=0x0000000000034f3d
- (int)synchronizeProvisioningWithData:(id)arg1;	// IMP=0x0000000000034f35
- (int)provisionDeviceWithData:(id)arg1;	// IMP=0x0000000000034f2d
- (id)deviceProvisioningInfo;	// IMP=0x0000000000034ec8
- (void)addProvisioningInfoToURLRequest:(id)arg1 sendEmptyValues:(_Bool)arg2;	// IMP=0x0000000000034d36
- (void)addProvisioningInfoToAARequest:(id)arg1 withFallback:(_Bool)arg2;	// IMP=0x0000000000034c27
- (void)addProvisioningInfoToAARequest:(id)arg1;	// IMP=0x0000000000034c13
- (void)setCookieStorageRef:(struct OpaqueCFHTTPCookieStorage *)arg1;	// IMP=0x0000000000034c09
- (id)initWithAccount:(id)arg1;	// IMP=0x0000000000034b31
- (id)initWithDSID:(id)arg1;	// IMP=0x00000000000349d3
- (id)init;	// IMP=0x00000000000349bf

@end
