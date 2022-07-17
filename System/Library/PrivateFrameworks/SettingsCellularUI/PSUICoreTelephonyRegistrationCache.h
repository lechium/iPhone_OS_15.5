//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SettingsCellularUI/CoreTelephonyClientDataDelegate-Protocol.h>
#import <SettingsCellularUI/CoreTelephonyClientRegistrationDelegate-Protocol.h>

@class CoreTelephonyClient, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface PSUICoreTelephonyRegistrationCache : NSObject <CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    CoreTelephonyClient *_client;	// 16 = 0x10
    NSMutableDictionary *_imsStatusVoiceDict;	// 24 = 0x18
    NSMutableDictionary *_imsStatusSMSDict;	// 32 = 0x20
    NSMutableDictionary *_rejectCauseCodeDict;	// 40 = 0x28
    NSMutableDictionary *_supportedDataRatesDict;	// 48 = 0x30
    NSMutableDictionary *_maxDataRateDict;	// 56 = 0x38
    NSMutableDictionary *_operatorNameDict;	// 64 = 0x40
}

+ (id)sharedInstance;	// IMP=0x000000000004e286
- (void).cxx_destruct;	// IMP=0x0000000000050e52
@property(retain) NSMutableDictionary *operatorNameDict; // @synthesize operatorNameDict=_operatorNameDict;
@property(retain) NSMutableDictionary *maxDataRateDict; // @synthesize maxDataRateDict=_maxDataRateDict;
@property(retain) NSMutableDictionary *supportedDataRatesDict; // @synthesize supportedDataRatesDict=_supportedDataRatesDict;
@property(retain) NSMutableDictionary *rejectCauseCodeDict; // @synthesize rejectCauseCodeDict=_rejectCauseCodeDict;
@property(retain) NSMutableDictionary *imsStatusSMSDict; // @synthesize imsStatusSMSDict=_imsStatusSMSDict;
@property(retain) NSMutableDictionary *imsStatusVoiceDict; // @synthesize imsStatusVoiceDict=_imsStatusVoiceDict;
@property(retain, nonatomic) CoreTelephonyClient *client; // @synthesize client=_client;
- (void)operatorNameChanged:(id)arg1 name:(id)arg2;	// IMP=0x0000000000050a71
- (id)localizedOperatorName:(id)arg1;	// IMP=0x0000000000050945
- (void)fetchLocalizedOperatorName;	// IMP=0x0000000000050507
- (void)setMaxDataRate:(id)arg1 dataRate:(long long)arg2;	// IMP=0x00000000000501ff
- (long long)maxDataRate:(id)arg1;	// IMP=0x00000000000500be
- (void)fetchMaxDataRate;	// IMP=0x000000000004fc47
- (id)supportedDataRates:(id)arg1;	// IMP=0x000000000004fb1b
- (void)fetchSupportedDataRates;	// IMP=0x000000000004f634
- (id)rejectCauseCode:(id)arg1;	// IMP=0x000000000004f508
- (void)fetchRejectCauseCode;	// IMP=0x000000000004f0ca
- (void)imsRegistrationChanged:(id)arg1 info:(id)arg2;	// IMP=0x000000000004ef98
- (_Bool)IMSStatusSMS:(id)arg1;	// IMP=0x000000000004ee4f
- (_Bool)IMSStatusVoice:(id)arg1;	// IMP=0x000000000004ed06
- (void)fetchIMSStatus;	// IMP=0x000000000004e721
- (void)preferredDataSimChanged:(id)arg1;	// IMP=0x000000000004e70f
- (void)handleDataUsageChanged;	// IMP=0x000000000004e63d
- (void)clearCache;	// IMP=0x000000000004e591
- (id)init;	// IMP=0x000000000004e4e8
- (id)initPrivate;	// IMP=0x000000000004e2eb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
