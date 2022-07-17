//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAP2AccessoryServer-Protocol.h>
#import <CoreHAP/HAP2AccessoryServerPairingDriverDelegate-Protocol.h>
#import <CoreHAP/HAP2AccessoryServerPrivate-Protocol.h>
#import <CoreHAP/HAP2PairedAccessoryServerPrivate-Protocol.h>
#import <CoreHAP/HAP2UnpairedAccessoryServerPrivate-Protocol.h>
#import <CoreHAP/HAPAccessoryReachabilityDelegate-Protocol.h>

@class HAP2PropertyLock, HAP2SerializedOperationQueue, HAPDeviceID, HMFVersion, NSArray, NSBackgroundActivityScheduler, NSData, NSString;
@protocol HAP2Accessory, HAP2AccessoryServerBrowserPrivate, HAP2AccessoryServerControllerPrivate, HAP2AccessoryServerDelegate, HAP2AccessoryServerMetadata, HAP2AccessoryServerPairingDriver, HAP2Cancelable, HAP2UnpairedAccessoryServerPairDelegate, HAPAccessoryReachabilityClient, HAPAccessoryReachabilityProfile;

@interface HAP2AccessoryServer <HAP2PairedAccessoryServerPrivate, HAPAccessoryReachabilityDelegate, HAP2UnpairedAccessoryServerPrivate, HAP2AccessoryServerPairingDriverDelegate, HAP2AccessoryServerPrivate, HAP2AccessoryServer>
{
    _Bool _internallyPaired;	// 8 = 0x8
    _Bool _hasDiscoveryAdvertisement;	// 9 = 0x9
    id <HAP2AccessoryServerDelegate> _delegate;	// 16 = 0x10
    unsigned long long _connectionState;	// 24 = 0x18
    HAP2SerializedOperationQueue *_operationQueue;	// 32 = 0x20
    NSString *_setupID;	// 40 = 0x28
    id <HAP2AccessoryServerControllerPrivate> _controller;	// 48 = 0x30
    id <HAP2AccessoryServerBrowserPrivate> _browser;	// 56 = 0x38
    id <HAP2AccessoryServerMetadata> _currentMetadata;	// 64 = 0x40
    NSString *_productData;	// 72 = 0x48
    NSArray *_privateAccessories;	// 80 = 0x50
    NSString *_pairedName;	// 88 = 0x58
    HMFVersion *_pairedProtocolVersion;	// 96 = 0x60
    id <HAP2Cancelable> _outstandingUpdateAccessoriesRequest;	// 104 = 0x68
    id <HAP2AccessoryServerPairingDriver> _internalPairingDriver;	// 112 = 0x70
    id <HAP2UnpairedAccessoryServerPairDelegate> _pairDelegate;	// 120 = 0x78
    id <HAPAccessoryReachabilityClient> _reachability;	// 128 = 0x80
    id <HAPAccessoryReachabilityProfile> _reachabilityProfile;	// 136 = 0x88
    NSBackgroundActivityScheduler *_backgroundScheduler;	// 144 = 0x90
    NSString *_reachabilityChangedReason;	// 152 = 0x98
    HAP2PropertyLock *_propertyLock;	// 160 = 0xa0
}

+ (id)pairedAccessoryServerWithMetadata:(id)arg1 browser:(id)arg2 controller:(id)arg3 operationQueue:(id)arg4;	// IMP=0x00000000000715e4
+ (id)unpairedAccessoryServerWithMetadata:(id)arg1 browser:(id)arg2 controller:(id)arg3 pairingDriver:(id)arg4 operationQueue:(id)arg5;	// IMP=0x000000000007156b
+ (id)new;	// IMP=0x00000000000714c3
- (void).cxx_destruct;	// IMP=0x0000000000070f7d
@property(readonly, nonatomic) __weak id <HAP2AccessoryServerBrowserPrivate> browser; // @synthesize browser=_browser;
@property(readonly, nonatomic) HAP2SerializedOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *setupHash;
@property(readonly, nonatomic) unsigned short configNumber;
@property(readonly, nonatomic) unsigned short stateNumber;
@property(readonly, nonatomic) unsigned long long category;
@property(readonly, nonatomic) NSString *model;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) HMFVersion *protocolVersion;
@property(readonly, nonatomic) _Bool hasPairings;
@property(readonly, nonatomic) HAPDeviceID *deviceID;
@property(retain, nonatomic) NSString *setupID; // @synthesize setupID=_setupID;
@property(copy, nonatomic) NSString *reachabilityChangedReason; // @synthesize reachabilityChangedReason=_reachabilityChangedReason;
@property(nonatomic) _Bool hasDiscoveryAdvertisement; // @synthesize hasDiscoveryAdvertisement=_hasDiscoveryAdvertisement;
@property(retain, nonatomic) NSString *productData; // @synthesize productData=_productData;
@property(readonly, nonatomic) id <HAP2AccessoryServerControllerPrivate> controller; // @synthesize controller=_controller;
@property(readonly, nonatomic) unsigned long long connectionState; // @synthesize connectionState=_connectionState;
@property(nonatomic) __weak id <HAP2AccessoryServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;	// IMP=0x000000000006ff77
- (id)init;	// IMP=0x000000000006fecf
- (void)pollAccessory;	// IMP=0x000000000018694e
- (void)verifyConnection;	// IMP=0x0000000000186844
- (void)closeSession;	// IMP=0x00000000001867ae
- (void)handleNetworkChanged;	// IMP=0x00000000001866e7
- (void)handleLostDiscoveryAdvertisementWithWillSleep:(_Bool)arg1;	// IMP=0x0000000000186615
- (void)handleLostDiscoveryAdvertisement;	// IMP=0x0000000000186601
- (void)handleReestablishedSession;	// IMP=0x0000000000186414
- (void)handleUpdatedCharacteristicValues:(id)arg1;	// IMP=0x000000000018621b
- (void)handleEvents:(id)arg1;	// IMP=0x0000000000186152
- (id)disableNotificationsForCharacteristics:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000018608a
- (id)enableNotificationsForCharacteristics:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000185fc2
- (id)writeValuesForCharacteristics:(id)arg1 timeout:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000185e2d
- (id)readValuesForCharacteristics:(id)arg1 timeout:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000185e19
- (void)mergeWithNewlyDiscoveredPairedAccessoryServer:(id)arg1;	// IMP=0x0000000000185d1d
- (void)becomeUnpairedWithAccessoryServer:(id)arg1;	// IMP=0x0000000000185bbf
- (void)stopConfirming;	// IMP=0x0000000000185a92
- (void)startConfirming;	// IMP=0x0000000000185965
- (_Bool)isConfirming;	// IMP=0x000000000018592a
- (id)updateAccessoriesWithReason:(id)arg1;	// IMP=0x0000000000185654
- (id)getPairingsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000018556d
- (id)removePairing:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000018545e
- (id)addPairing:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000185353
- (id)unpairWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000185146
- (void)clearAccessories;	// IMP=0x0000000000185121
@property(readonly, nonatomic) NSArray *accessories;
@property(readonly, nonatomic) id <HAP2Accessory> primaryAccessory;
@property(readonly, nonatomic, getter=isPaired) _Bool paired;
- (void)_setBackgroundActivityScheduler:(id)arg1;	// IMP=0x00000000001850b9
- (void)_performBackgroundPollWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000184f4d
- (void)pairingDriver:(id)arg1 validateSoftwareAuthUUID:(id)arg2 token:(id)arg3 model:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000001bdb69
- (void)pairingDriver:(id)arg1 validatePairingCert:(id)arg2 model:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001bd9fd
- (void)pairingDriver:(id)arg1 didFinishAuthWithError:(id)arg2;	// IMP=0x00000000001bd8e7
- (void)pairingDriver:(id)arg1 confirmSoftwareAuthUUID:(id)arg2 token:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001bd77b
- (void)pairingDriver:(id)arg1 authenticateSoftwareAuthUUID:(id)arg2 token:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001bd60f
- (void)pairingDriver:(id)arg1 doesRequireSetupCodeForAccessory:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001bd4ea
- (void)pairingDriver:(id)arg1 doesRequirePermission:(unsigned long long)arg2 accessory:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001bd3b9
- (void)pairingDriver:(id)arg1 didSaveRemotePairingIdentity:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001bd284
- (void)pairingDriver:(id)arg1 didRequestLocalPairingIdentityWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001bd16e
- (void)pairingDriver:(id)arg1 didRejectSetupCodeForAccessory:(id)arg2 backoffInterval:(double)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001bd035
- (void)pairingDriver:(id)arg1 didCompleteWithError:(id)arg2;	// IMP=0x00000000001bcf1f
@property(readonly, nonatomic) id <HAP2AccessoryServerPairingDriver> pairingDriver;
- (void)mergeWithNewlyDiscoveredUnpairedAccessoryServer:(id)arg1;	// IMP=0x00000000001bce19
- (void)becomePairedWithAccessoryServer:(id)arg1;	// IMP=0x00000000001bcc7b
- (id)identifyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001bcb94
- (id)pairWithDelegate:(id)arg1;	// IMP=0x00000000001bcabc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
