//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSNumber, NSSet, NSString;

@interface HAPMetadata : HMFObject
{
    NSNumber *_version;	// 8 = 0x8
    NSNumber *_schemaVersion;	// 16 = 0x10
    NSString *_hapBaseUUIDSuffix;	// 24 = 0x18
    NSDictionary *_rawPlist;	// 32 = 0x20
    NSMutableArray *_parsedUUIDs;	// 40 = 0x28
    NSDictionary *_hapUnitMap;	// 48 = 0x30
    NSDictionary *_hapPropertyMap;	// 56 = 0x38
    NSDictionary *_hapCharacteristicMap;	// 64 = 0x40
    NSDictionary *_hapServiceMap;	// 72 = 0x48
    NSSet *_hapSupportsAuthDataSet;	// 80 = 0x50
    NSDictionary *_hapCharacteristicNameTypeMap;	// 88 = 0x58
    NSDictionary *_hapServiceNameTypeMap;	// 96 = 0x60
}

+ (id)shortenHAPType:(id)arg1 baseUUIDSuffix:(id)arg2;	// IMP=0x000000000015a6ca
+ (id)getSharedInstance;	// IMP=0x000000000015a69f
+ (void)setCurrentMetadataHook:(CDUnknownBlockType)arg1;	// IMP=0x000000000015a67e
- (void).cxx_destruct;	// IMP=0x0000000000158d33
@property(retain, nonatomic) NSDictionary *hapServiceNameTypeMap; // @synthesize hapServiceNameTypeMap=_hapServiceNameTypeMap;
@property(retain, nonatomic) NSDictionary *hapCharacteristicNameTypeMap; // @synthesize hapCharacteristicNameTypeMap=_hapCharacteristicNameTypeMap;
@property(retain, nonatomic) NSSet *hapSupportsAuthDataSet; // @synthesize hapSupportsAuthDataSet=_hapSupportsAuthDataSet;
@property(retain, nonatomic) NSDictionary *hapServiceMap; // @synthesize hapServiceMap=_hapServiceMap;
@property(retain, nonatomic) NSDictionary *hapCharacteristicMap; // @synthesize hapCharacteristicMap=_hapCharacteristicMap;
@property(retain, nonatomic) NSDictionary *hapPropertyMap; // @synthesize hapPropertyMap=_hapPropertyMap;
@property(retain, nonatomic) NSDictionary *hapUnitMap; // @synthesize hapUnitMap=_hapUnitMap;
@property(retain, nonatomic) NSMutableArray *parsedUUIDs; // @synthesize parsedUUIDs=_parsedUUIDs;
@property(readonly, nonatomic) NSDictionary *rawPlist; // @synthesize rawPlist=_rawPlist;
@property(retain, nonatomic) NSString *hapBaseUUIDSuffix; // @synthesize hapBaseUUIDSuffix=_hapBaseUUIDSuffix;
@property(retain, nonatomic) NSNumber *schemaVersion; // @synthesize schemaVersion=_schemaVersion;
@property(retain, nonatomic) NSNumber *version; // @synthesize version=_version;
- (id)generateHAPMetadataTuplesDictionary:(id)arg1;	// IMP=0x0000000000158873
- (id)generateDictionary;	// IMP=0x0000000000157cb5
- (_Bool)updateRawPlist;	// IMP=0x0000000000157bb7
- (id)initWithServices:(id)arg1 characteristics:(id)arg2 units:(id)arg3 properties:(id)arg4 addAuthDataTuples:(id)arg5 hapBaseUUIDSuffix:(id)arg6;	// IMP=0x0000000000156e8f
@property(readonly, nonatomic) NSArray *hapSupportsAuthDataTuples;
@property(readonly, nonatomic) NSArray *hapServices;
@property(readonly, nonatomic) NSArray *hapCharacteristics;
@property(readonly, nonatomic) NSArray *hapProperties;
@property(readonly, nonatomic) NSArray *hapValueUnits;
- (id)hapUnitFromName:(id)arg1;	// IMP=0x0000000000156c7c
- (id)hapServiceFromType:(id)arg1;	// IMP=0x0000000000156bf9
- (id)hapServiceFromName:(id)arg1;	// IMP=0x0000000000156b31
- (id)hapCharacteristicFromType:(id)arg1;	// IMP=0x0000000000156aae
- (id)hapCharacteristicFromName:(id)arg1;	// IMP=0x00000000001569e6
- (id)getDefaultServiceProperties:(id)arg1;	// IMP=0x0000000000156996
- (id)getDefaultCharacteristicProperties:(id)arg1;	// IMP=0x0000000000156946
- (id)getDefaultCharacteristicMetadata:(id)arg1;	// IMP=0x00000000001565e1
- (_Bool)supportsAdditionalAuthorizationData:(id)arg1 forService:(id)arg2;	// IMP=0x000000000015652c
- (id)serviceTypeToBTLE:(id)arg1;	// IMP=0x000000000015647b
- (id)btleToServiceType:(id)arg1;	// IMP=0x000000000015631e
- (id)characteristicValueUnitOfType:(id)arg1;	// IMP=0x00000000001562ce
- (_Bool)isMandatoryCharacteristic:(id)arg1 forService:(id)arg2;	// IMP=0x000000000015622f
- (id)descriptionFromCharacteristicType:(id)arg1;	// IMP=0x00000000001561aa
- (id)descriptionFromServiceType:(id)arg1;	// IMP=0x0000000000156125
- (_Bool)validateMandatoryCharacteristics:(id)arg1 forService:(id)arg2;	// IMP=0x000000000015602b
- (_Bool)allowAssociatedService:(id)arg1;	// IMP=0x0000000000155fe7
- (_Bool)isStandardHAPUnitName:(id)arg1;	// IMP=0x0000000000155fb4
- (_Bool)isStandardHAPCharacteristicName:(id)arg1;	// IMP=0x0000000000155f2a
- (_Bool)isStandardHAPCharacteristic:(id)arg1;	// IMP=0x0000000000155ef7
- (_Bool)isStandardHAPServiceName:(id)arg1;	// IMP=0x0000000000155e6d
- (_Bool)isStandardHAPService:(id)arg1;	// IMP=0x0000000000155e3a
- (id)characteristicTypeFromUTI:(id)arg1;	// IMP=0x0000000000155db7
- (id)characteristicUTIFromType:(id)arg1;	// IMP=0x0000000000155d67
- (id)serviceTypeFromUTI:(id)arg1;	// IMP=0x0000000000155ce4
- (id)serviceUTIFromType:(id)arg1;	// IMP=0x0000000000155c94
- (_Bool)parseMetadata:(id)arg1;	// IMP=0x00000000001555bf
- (id)parseCharacteristicServiceTuples:(id)arg1;	// IMP=0x0000000000154fdc
- (id)parseServices:(id)arg1;	// IMP=0x00000000001542b4
- (id)parseServiceCharacteristics:(id)arg1;	// IMP=0x0000000000154004
- (id)parseCharacteristics:(id)arg1;	// IMP=0x00000000001537bb
- (id)parseCharacteristicValue:(id)arg1;	// IMP=0x000000000015348e
- (id)parseProperties:(id)arg1;	// IMP=0x00000000001530c1
- (id)parseUnits:(id)arg1;	// IMP=0x0000000000152d7b
- (_Bool)parseVersion:(id)arg1;	// IMP=0x0000000000152c78
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x000000000015283e

@end
