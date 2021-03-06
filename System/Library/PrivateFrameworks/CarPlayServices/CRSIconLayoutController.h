//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CarPlayServices/CRSIconLayoutServerToClientInterface-Protocol.h>

@class BSServiceConnection, NSString;
@protocol OS_dispatch_queue;

@interface CRSIconLayoutController : NSObject <CRSIconLayoutServerToClientInterface>
{
    BSServiceConnection *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000061d4
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) BSServiceConnection *connection; // @synthesize connection=_connection;
- (void)invalidate;	// IMP=0x00000000000060a0
- (void)fetchApplicationIconInformationForBundleIdentifier:(id)arg1 vehicleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000005e0d
- (void)resetIconStateForVehicleID:(id)arg1;	// IMP=0x0000000000005cff
- (void)setIconOrder:(id)arg1 hiddenIcons:(id)arg2 forVehicleID:(id)arg3;	// IMP=0x0000000000005a50
- (void)exportIconStateForCertificateSerial:(id)arg1 categories:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000510c
- (void)fetchIconStateForVehicleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004c1c
- (void)dealloc;	// IMP=0x0000000000004bb1
- (id)init;	// IMP=0x00000000000046b1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

