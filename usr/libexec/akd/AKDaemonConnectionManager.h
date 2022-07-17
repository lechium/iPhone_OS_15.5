//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AAFService, AKAuthorizationEndorserRapportClient, NSString, NSXPCListener;

@interface AKDaemonConnectionManager : NSObject
{
    NSXPCListener *_anisetteServiceListener;	// 8 = 0x8
    NSXPCListener *_authServiceListener;	// 16 = 0x10
    NSXPCListener *_authorizationServiceListener;	// 24 = 0x18
    NSXPCListener *_custodianServiceListener;	// 32 = 0x20
    NSXPCListener *_privateEmailServiceListener;	// 40 = 0x28
    AKAuthorizationEndorserRapportClient *_authorizationEndorserRapportClient;	// 48 = 0x30
    AAFService *_inheritanceDaemonService;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x0020000000081ddd
- (void).cxx_destruct;	// IMP=0x00200000000831db
@property(retain, nonatomic) AAFService *inheritanceDaemonService; // @synthesize inheritanceDaemonService=_inheritanceDaemonService;
@property(retain, nonatomic) AKAuthorizationEndorserRapportClient *authorizationEndorserRapportClient; // @synthesize authorizationEndorserRapportClient=_authorizationEndorserRapportClient;
@property(retain, nonatomic) NSXPCListener *privateEmailServiceListener; // @synthesize privateEmailServiceListener=_privateEmailServiceListener;
@property(retain, nonatomic) NSXPCListener *custodianServiceListener; // @synthesize custodianServiceListener=_custodianServiceListener;
@property(retain, nonatomic) NSXPCListener *authorizationServiceListener; // @synthesize authorizationServiceListener=_authorizationServiceListener;
@property(retain, nonatomic) NSXPCListener *authServiceListener; // @synthesize authServiceListener=_authServiceListener;
@property(retain, nonatomic) NSXPCListener *anisetteServiceListener; // @synthesize anisetteServiceListener=_anisetteServiceListener;
- (void)_exitForSIGTERM;	// IMP=0x001000000008307e
- (void)_stopObservingLanguageChangeNotification;	// IMP=0x0010000000083056
- (void)_beginObservingLanguageChangeNotfication;	// IMP=0x0010000000082fbf
- (void)_startListeningForMessagesFromPairedDevice;	// IMP=0x0010000000082ec1
- (void)_checkKeybagUnlockState;	// IMP=0x0010000000082e02
- (void)_checkScreenUnlockStateFromNotificationDictionary:(id)arg1;	// IMP=0x0010000000082d18
- (_Bool)_isDeviceScreenUnlockNotification:(id)arg1;	// IMP=0x0010000000082d10
- (_Bool)_isPasscodeChangeNotification:(id)arg1;	// IMP=0x0010000000082d08
- (void)_monitorXPCEvents;	// IMP=0x0010000000082d02
- (void)_startMonitoringPushEvents;	// IMP=0x0010000000082b89
- (_Bool)shouldAllowClient:(id)arg1 logging:(id *)arg2;	// IMP=0x00100000000829cc
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000008255c
- (void)_setupServices;	// IMP=0x0010000000082333
- (void)startForTesting;	// IMP=0x00100000000822a1
- (void)start;	// IMP=0x001000000008212e
- (id)init;	// IMP=0x0010000000081fe4
- (void)dealloc;	// IMP=0x0010000000081e32

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
