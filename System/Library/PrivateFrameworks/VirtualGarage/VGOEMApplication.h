//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VirtualGarage/INIntentResponseObserver-Protocol.h>
#import <VirtualGarage/VGOEMApplication-Protocol.h>

@class INCExtensionConnection, LSApplicationRecord, NSArray, NSString;
@protocol OS_dispatch_queue, VGOEMAppSOCStreaming;

@interface VGOEMApplication : NSObject <INIntentResponseObserver, VGOEMApplication>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    INCExtensionConnection *_chargeStreamingConnection;	// 16 = 0x10
    _Bool _enabled;	// 24 = 0x18
    LSApplicationRecord *_applicationRecord;	// 32 = 0x20
    id <VGOEMAppSOCStreaming> _chargeStreamingDelegate;	// 40 = 0x28
    NSString *_identifier;	// 48 = 0x30
    NSArray *_allowedFormulaIDs;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000002834d
@property(retain, nonatomic) NSArray *allowedFormulaIDs; // @synthesize allowedFormulaIDs=_allowedFormulaIDs;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <VGOEMAppSOCStreaming> chargeStreamingDelegate; // @synthesize chargeStreamingDelegate=_chargeStreamingDelegate;
@property(readonly, nonatomic) LSApplicationRecord *applicationRecord; // @synthesize applicationRecord=_applicationRecord;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002820e
- (id)_connectionWithIntent:(id)arg1;	// IMP=0x0000000000027e6d
- (void)intentResponseDidUpdate:(id)arg1 withSerializedCacheItems:(id)arg2;	// IMP=0x0000000000027816
- (void)stopSendingChargeUpdatesForVehicle:(id)arg1;	// IMP=0x00000000000272cd
- (void)startSendingChargeUpdatesForVehicle:(id)arg1;	// IMP=0x0000000000026d9c
- (void)_createChargeStreamingConnectionIfNeededForVehicle:(id)arg1;	// IMP=0x00000000000269a0
- (void)getStateOfChargeForVehicle:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002560c
- (void)listCarsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002498f
- (id)_powerByConnectorDictionaryFromCar:(id)arg1;	// IMP=0x0000000000024572
- (id)_vehiclesFromListCarsIntentResponse:(id)arg1;	// IMP=0x0000000000023ba3
- (id)_vehicleStateFromResponse:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000232e8
- (_Bool)_isValidConsumptionModelForResponse:(id)arg1;	// IMP=0x0000000000023128
- (unsigned long long)_VGChargingConnectorTypeOptionFromINCarChargingConnectorType:(id)arg1;	// IMP=0x000000000002304d
- (unsigned long long)_VGChargingConnectorTypeOptionsFromINCarChargingConnectorTypes:(id)arg1;	// IMP=0x0000000000022dff
- (id)initWithIdentifier:(id)arg1 applicationRecord:(id)arg2;	// IMP=0x0000000000022d21

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
