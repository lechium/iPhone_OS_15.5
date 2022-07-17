//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AIDAAccountManager, AKAppleIDAuthenticationController, NSArray, NSError;
@protocol AADeviceListDelegate;

@interface AADeviceList : NSObject
{
    AKAppleIDAuthenticationController *_authController;	// 8 = 0x8
    AIDAAccountManager *_accountManager;	// 16 = 0x10
    NSArray *_devices;	// 24 = 0x18
    NSError *_loadError;	// 32 = 0x20
    id <AADeviceListDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000003626a
@property(nonatomic) __weak id <AADeviceListDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSError *loadError; // @synthesize loadError=_loadError;
@property(readonly, nonatomic) NSArray *devices; // @synthesize devices=_devices;
- (void)_renewCredentials;	// IMP=0x0000000000035e76
- (void)_loadRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000035bc2
- (void)_createRequestForAccount:(id)arg1 requestHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000035793
- (void)_setDeviceList:(id)arg1 loadError:(id)arg2;	// IMP=0x00000000000356cb
- (void)_loadDeviceList;	// IMP=0x000000000003552e
- (id)_authController;	// IMP=0x00000000000354f3
- (id)_aidaAccount;	// IMP=0x0000000000035473
- (id)_appleAccount;	// IMP=0x0000000000035415
- (id)_accountStore;	// IMP=0x00000000000353ff
- (void)refreshDeviceList;	// IMP=0x0000000000035359
- (id)initWithAccountManager:(id)arg1;	// IMP=0x00000000000352de

@end
