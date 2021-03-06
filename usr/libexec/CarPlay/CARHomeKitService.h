//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CARHome, CARObserverHashTable, HMService, NSDictionary, NSString, NSUUID;

@interface CARHomeKitService : NSObject
{
    _Bool _lastWritten;	// 8 = 0x8
    NSUUID *_homeUniqueIdentifier;	// 16 = 0x10
    CARHome *_home;	// 24 = 0x18
    NSDictionary *_characteristics;	// 32 = 0x20
    HMService *_service;	// 40 = 0x28
    NSDictionary *_characteristicsByType;	// 48 = 0x30
    CARObserverHashTable *_observers;	// 56 = 0x38
}

+ (id)observerProtocol;	// IMP=0x00200000000a2b0a
+ (id)serviceType;	// IMP=0x00100000000a2afd
+ (id)serviceWithHome:(id)arg1 service:(id)arg2;	// IMP=0x00100000000a17d8
+ (id)registeredServiceClasses;	// IMP=0x00100000000a1772
+ (void)registerServiceClass:(Class)arg1;	// IMP=0x00100000000a1695
+ (void)load;	// IMP=0x00100000000a1647
- (void).cxx_destruct;	// IMP=0x00200000000a34d4
@property(retain, nonatomic) CARObserverHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) NSDictionary *characteristicsByType; // @synthesize characteristicsByType=_characteristicsByType;
@property(retain, nonatomic) HMService *service; // @synthesize service=_service;
@property(nonatomic) _Bool lastWritten; // @synthesize lastWritten=_lastWritten;
@property(readonly, nonatomic) NSDictionary *characteristics; // @synthesize characteristics=_characteristics;
@property(readonly, nonatomic) __weak CARHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) NSUUID *homeUniqueIdentifier; // @synthesize homeUniqueIdentifier=_homeUniqueIdentifier;
- (void)accessoryDidUpdateReachability:(id)arg1;	// IMP=0x00100000000a33ae
- (void)accessory:(id)arg1 service:(id)arg2 didUpdateValueForCharacteristic:(id)arg3;	// IMP=0x00100000000a3141
- (void)accessoryDidUpdateServices:(id)arg1;	// IMP=0x00100000000a3097
@property(readonly, nonatomic) double distance;
@property(readonly, nonatomic) NSString *stateDescription;
@property(readonly, nonatomic) _Bool usable;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier;
- (_Bool)_shouldUpdateLastUsedForCharacteristic:(id)arg1;	// IMP=0x00100000000a2c22
- (void)_characteristicDidUpdate:(id)arg1;	// IMP=0x00100000000a2b78
- (id)serviceType;	// IMP=0x00100000000a2b28
- (id)managedCharacteristics;	// IMP=0x00100000000a2b1b
- (void)refreshCharacteristicValues;	// IMP=0x00100000000a2924
@property(readonly, copy) NSString *description;
- (void)removeObserver:(id)arg1;	// IMP=0x00100000000a269f
- (void)addObserver:(id)arg1;	// IMP=0x00100000000a262d
@property(readonly, nonatomic) _Bool hasError;
@property(readonly, nonatomic) _Bool pendingRead;
@property(readonly, nonatomic) _Bool pendingWrite;
@property(readonly, nonatomic) _Bool current;
@property(readonly, nonatomic) _Bool reachable;
@property(readonly, nonatomic) NSString *type;
@property(readonly, nonatomic) _Bool interactive;
- (id)characteristicForName:(id)arg1;	// IMP=0x00100000000a1e18
- (id)characteristicForType:(id)arg1;	// IMP=0x00100000000a1d6b
- (id)initWithHome:(id)arg1 service:(id)arg2;	// IMP=0x00100000000a1918

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

