//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFDeviceContextServiceDelegate-Protocol.h>

@class AFDeviceContextConnection, NSString;

@interface _AFDeviceContextServiceDelegateProxy : NSObject <AFDeviceContextServiceDelegate>
{
    AFDeviceContextConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001491fe
- (oneway void)updateLocalDeviceContext:(id)arg1;	// IMP=0x00000000001491a4
- (id)initWithConnection:(id)arg1;	// IMP=0x0000000000149140

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
