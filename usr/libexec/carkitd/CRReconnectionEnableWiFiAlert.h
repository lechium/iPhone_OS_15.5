//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRVehicle;

@interface CRReconnectionEnableWiFiAlert
{
    CRVehicle *_vehicle;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000248f5
@property(retain, nonatomic) CRVehicle *vehicle; // @synthesize vehicle=_vehicle;
- (_Bool)presentAlertWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000247c2
- (id)alertDeclineButtonTitle;	// IMP=0x00100000000247b1
- (id)alertAcceptButtonTitle;	// IMP=0x001000000002476b
- (id)alertMessage;	// IMP=0x0010000000024763
- (id)alertTitle;	// IMP=0x001000000002471d
- (id)lockscreenMessage;	// IMP=0x00100000000246d7
- (id)initWithVehicle:(id)arg1;	// IMP=0x001000000002466f

@end
