//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class CKRecord, HMFVersion, NSManagedObject, NSMutableDictionary, NSSet, NSString, NSUUID;
@protocol HMDBackingStoreObjectProtocol, HMDNSManagedObjectBackingStoreModelObjectRepresentable;

@interface HMDBackingStoreModelObject : HMFObject <HMFLogging, NSCopying>
{
    NSMutableDictionary *_reserved;	// 8 = 0x8
    _Bool _bsoDataVersionOverride;	// 16 = 0x10
    NSUUID *_uuid;	// 24 = 0x18
    NSUUID *_parentUUID;	// 32 = 0x20
    id <HMDBackingStoreObjectProtocol> _bsoDelegate;	// 40 = 0x28
    NSString *_bsoType;	// 48 = 0x30
    unsigned long long _bsoLogRowID;	// 56 = 0x38
    HMFVersion *_bsoDataVersion;	// 64 = 0x40
    unsigned long long _objectChangeType;	// 72 = 0x48
    CKRecord *_bsoRecord;	// 80 = 0x50
    NSManagedObject<HMDNSManagedObjectBackingStoreModelObjectRepresentable> *_managedObject;	// 88 = 0x58
}

+ (_Bool)resolveInstanceMethod:(SEL)arg1;	// IMP=0x000000000088de3f
+ (id)logCategory;	// IMP=0x000000000088de0f
+ (id)formatValue:(id)arg1;	// IMP=0x000000000088d903
+ (id)objectFromCloud:(id)arg1 error:(id *)arg2;	// IMP=0x000000000088d6f4
+ (id)objectFromData:(id)arg1 encoding:(unsigned long long)arg2 record:(id)arg3 error:(id *)arg4;	// IMP=0x000000000088d4b2
+ (id)objectFromData:(id)arg1 encoding:(unsigned long long)arg2 rowID:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x000000000088d47b
+ (id)objectFromData:(id)arg1 encoding:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000088d3a6
+ (id)objectFromDictionaryData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000088d388
+ (id)objectFromDictionaryData:(id)arg1 type:(id)arg2 error:(id *)arg3;	// IMP=0x000000000088bf1e
+ (Class)genericRepresentation;	// IMP=0x000000000088bf0d
+ (id)readonlyBefore;	// IMP=0x000000000088bf05
+ (id)bsoSchemaHash;	// IMP=0x000000000088bd6c
+ (id)schemaHashRoot;	// IMP=0x000000000088bd64
+ (id)properties;	// IMP=0x000000000088bd4b
+ (Class)backedObjectClass;	// IMP=0x000000000088bd43
+ (_Bool)cd_addChildren:(id)arg1 excluding:(id)arg2 toSet:(id)arg3 error:(id *)arg4;	// IMP=0x00000000004f116e
+ (_Bool)cd_addChild:(id)arg1 excluding:(id)arg2 toSet:(id)arg3 error:(id *)arg4;	// IMP=0x00000000004f10b8
+ (id)cd_parentReferenceName;	// IMP=0x00000000004f10b0
+ (id)fetchByModelID;	// IMP=0x00000000004f1080
- (void).cxx_destruct;	// IMP=0x000000000088b916
@property _Bool bsoDataVersionOverride; // @synthesize bsoDataVersionOverride=_bsoDataVersionOverride;
@property(retain, nonatomic) NSManagedObject<HMDNSManagedObjectBackingStoreModelObjectRepresentable> *managedObject; // @synthesize managedObject=_managedObject;
@property(retain, nonatomic) CKRecord *bsoRecord; // @synthesize bsoRecord=_bsoRecord;
@property(nonatomic) unsigned long long objectChangeType; // @synthesize objectChangeType=_objectChangeType;
@property(retain, nonatomic) HMFVersion *bsoDataVersion; // @synthesize bsoDataVersion=_bsoDataVersion;
@property(readonly) unsigned long long bsoLogRowID; // @synthesize bsoLogRowID=_bsoLogRowID;
@property(retain, nonatomic) NSString *bsoType; // @synthesize bsoType=_bsoType;
@property(nonatomic) __weak id <HMDBackingStoreObjectProtocol> bsoDelegate; // @synthesize bsoDelegate=_bsoDelegate;
@property(retain, nonatomic) NSUUID *parentUUID; // @synthesize parentUUID=_parentUUID;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000088b6fa
- (id)valueForKey:(id)arg1;	// IMP=0x000000000088b6a7
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000088b601
- (id)logIdentifier;	// IMP=0x000000000088b5f4
- (void)dumpDebug;	// IMP=0x000000000088b5db
- (void)dumpDebug:(id)arg1;	// IMP=0x000000000088b5be
- (void)clearVersionOverride;	// IMP=0x000000000088b5aa
- (id)debugString:(_Bool)arg1 prefix:(id)arg2;	// IMP=0x000000000088ae66
- (id)debugString:(_Bool)arg1;	// IMP=0x000000000088ae4d
- (void)dumpWithVerbosity:(_Bool)arg1 prefix:(id)arg2 logType:(unsigned char)arg3;	// IMP=0x000000000088ad4c
@property(readonly, copy) NSString *description;
- (id)defaultValueForPropertyNamed:(id)arg1 isSet:(_Bool *)arg2;	// IMP=0x000000000088aa9b
- (void)setPropertyIfNotNil:(id)arg1 named:(id)arg2;	// IMP=0x000000000088a4d6
- (_Bool)diff:(id)arg1 differingFields:(id *)arg2;	// IMP=0x000000000088a17f
- (_Bool)merge:(id)arg1 error:(id *)arg2;	// IMP=0x000000000088a133
- (id)merge:(id)arg1;	// IMP=0x000000000088a11f
- (id)merge:(id)arg1 from:(unsigned long long)arg2;	// IMP=0x0000000000889d19
- (_Bool)validForStorage;	// IMP=0x0000000000889d11
- (_Bool)propertyIsAvailable:(id)arg1;	// IMP=0x0000000000889bf6
- (_Bool)propertyIsReadOnly:(id)arg1;	// IMP=0x0000000000889ad8
@property(readonly, nonatomic, getter=isReplayable) _Bool replayable;
@property(readonly, nonatomic, getter=isGenericRepresentation) _Bool isGenericRepresentation; // @dynamic isGenericRepresentation;
@property(readonly, nonatomic, getter=isReadOnly) _Bool isReadOnly; // @dynamic isReadOnly;
- (_Bool)propertyWasSet:(id)arg1;	// IMP=0x000000000088996c
- (id)setProperties;	// IMP=0x00000000008897c3
- (void)setParentUUIDIfNotNil:(id)arg1;	// IMP=0x0000000000889580
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008894b6
@property(readonly) unsigned long long hash;
- (id)encodeForCloud:(id *)arg1;	// IMP=0x0000000000889372
- (id)encodeWithEncoding:(unsigned long long)arg1 for:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000008892d6
- (id)encodeFor:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000000889210
- (id)encodeWithEncoding:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000008891f9
- (id)encodeWithError:(id *)arg1;	// IMP=0x00000000008891e2
- (id)encodeAsNSDictionaryFor:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000000888413
- (id)prepareFor:(unsigned long long)arg1;	// IMP=0x00000000008883c6
- (id)validateType:(id)arg1 path:(id)arg2;	// IMP=0x0000000000887fc8
- (_Bool)_validateType:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000887711
@property(readonly, nonatomic) NSSet *dependentUUIDs; // @dynamic dependentUUIDs;
@property(readonly, nonatomic) _Bool bsoIgnoreModel;
@property(copy, nonatomic) HMFVersion *bsoIgnoredBefore;
- (id)backedObjectWithParent:(id)arg1 error:(id *)arg2;	// IMP=0x000000000088740a
- (id)initWithUUID:(id)arg1 parentUUID:(id)arg2;	// IMP=0x00000000008873ee
- (id)initWithUUID:(id)arg1;	// IMP=0x00000000008873d2
- (id)initWithObjectChangeType:(unsigned long long)arg1 uuid:(id)arg2 parentUUID:(id)arg3;	// IMP=0x00000000008873b5
- (id)initWithVersion:(id)arg1 changeType:(unsigned long long)arg2 uuid:(id)arg3 parentUUID:(id)arg4;	// IMP=0x00000000008871a0
- (id)typeNameForDebug;	// IMP=0x00000000008870eb
- (id)convertToLegacyV4;	// IMP=0x000000000018b25d
- (id)cd_childrenExcluding:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004f07c9
- (id)cd_currentManagedObjectInContext:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004f03c4
- (id)cd_fetchManagedObjectWithError:(id *)arg1;	// IMP=0x00000000004f00aa
- (id)cd_fetchParentForManagedObjectUsingParentReferenceName:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004ef89b
- (void)cd_populateParentRelationshipInContext:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004ef7f1
- (_Bool)cd_updateManagedObjectInContext:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004ef51d
- (id)cd_uuidValueFromStringModelObjectField:(id)arg1;	// IMP=0x00000000004ef340
- (id)cd_generateValueForProperty:(id)arg1 managedObjectField:(id)arg2 context:(id)arg3;	// IMP=0x00000000004ef26d
- (_Bool)cd_populateFromManagedObject:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004ef0cf
- (id)cd_generateValueForModelObjectFromManagedObject:(id)arg1 modelObjectField:(id)arg2 modelFieldInfo:(id)arg3;	// IMP=0x00000000004eecf4
- (id)initWithManagedObject:(id)arg1 changeType:(unsigned long long)arg2 detached:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00000000004ee854

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

