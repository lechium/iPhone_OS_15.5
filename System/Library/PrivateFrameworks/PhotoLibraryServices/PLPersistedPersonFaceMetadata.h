//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSSecureCoding-Protocol.h>
#import <PhotoLibraryServices/PLDetectionAdditionalDescription-Protocol.h>
#import <PhotoLibraryServices/PLFaceRebuildDescription-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface PLPersistedPersonFaceMetadata : NSObject <NSSecureCoding, PLFaceRebuildDescription, PLDetectionAdditionalDescription>
{
    _Bool _isHidden;	// 8 = 0x8
    _Bool _manual;	// 9 = 0x9
    _Bool _representative;	// 10 = 0xa
    _Bool _clusterRejected;	// 11 = 0xb
    _Bool _hidden;	// 12 = 0xc
    int _nameSource;	// 16 = 0x10
    int _cloudNameSource;	// 20 = 0x14
    NSString *_assetUUID;	// 24 = 0x18
    NSString *_assetCloudGUID;	// 32 = 0x20
    double _centerX;	// 40 = 0x28
    double _centerY;	// 48 = 0x30
    double _size;	// 56 = 0x38
    double _bodyCenterX;	// 64 = 0x40
    double _bodyCenterY;	// 72 = 0x48
    double _bodyWidth;	// 80 = 0x50
    double _bodyHeight;	// 88 = 0x58
    NSNumber *_detectionType;	// 96 = 0x60
    NSArray *_detectionTraits;	// 104 = 0x68
}

+ (void)enumerateMatchedAssetsWithMetadata:(id)arg1 inContext:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000420ab4
+ (id)_persistedFacesWithUnarchiver:(id)arg1 key:(id)arg2;	// IMP=0x00000000004209d7
+ (id)_migrateDetectedFaces:(id)arg1 forPersonMetadata:(id)arg2 fromVersion:(unsigned long long)arg3;	// IMP=0x000000000041ff95
+ (id)_persistedFaceMetadataWithDetectedFace:(id)arg1 isKeyFace:(_Bool)arg2 isClusterRejected:(_Bool)arg3;	// IMP=0x000000000041fa1f
+ (id)_detectedFaceRelationshipKeyPathsToPrefetch;	// IMP=0x000000000041f9fb
+ (id)_detectedFacePropertiesToFetch;	// IMP=0x000000000041f9d7
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000041f9cf
- (void).cxx_destruct;	// IMP=0x000000000041f8e8
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(readonly, nonatomic, getter=isHidden) _Bool isHidden; // @synthesize isHidden=_isHidden;
@property(retain, nonatomic) NSArray *detectionTraits; // @synthesize detectionTraits=_detectionTraits;
@property(nonatomic) int cloudNameSource; // @synthesize cloudNameSource=_cloudNameSource;
@property(nonatomic) int nameSource; // @synthesize nameSource=_nameSource;
@property(nonatomic, getter=isClusterRejected) _Bool clusterRejected; // @synthesize clusterRejected=_clusterRejected;
@property(nonatomic, getter=isRepresentative) _Bool representative; // @synthesize representative=_representative;
@property(nonatomic, getter=isManual) _Bool manual; // @synthesize manual=_manual;
@property(nonatomic) NSNumber *detectionType; // @synthesize detectionType=_detectionType;
@property(nonatomic) double bodyHeight; // @synthesize bodyHeight=_bodyHeight;
@property(nonatomic) double bodyWidth; // @synthesize bodyWidth=_bodyWidth;
@property(nonatomic) double bodyCenterY; // @synthesize bodyCenterY=_bodyCenterY;
@property(nonatomic) double bodyCenterX; // @synthesize bodyCenterX=_bodyCenterX;
@property(nonatomic) double size; // @synthesize size=_size;
@property(nonatomic) double centerY; // @synthesize centerY=_centerY;
@property(nonatomic) double centerX; // @synthesize centerX=_centerX;
@property(copy, nonatomic) NSString *assetCloudGUID; // @synthesize assetCloudGUID=_assetCloudGUID;
@property(copy, nonatomic) NSString *assetUUID; // @synthesize assetUUID=_assetUUID;
- (id)jsonDictionary;	// IMP=0x000000000041f23e
- (_Bool)matchesEntityInLibraryBackedByManagedObjectContext:(id)arg1 forRejectedPersonUUID:(id)arg2 diff:(id *)arg3;	// IMP=0x000000000041ee37
- (_Bool)matchesEntityInLibraryBackedByManagedObjectContext:(id)arg1 forConfirmedPersonUUID:(id)arg2 diff:(id *)arg3;	// IMP=0x000000000041e8b0
- (id)matchingFaceInManagedObejctContext:(id)arg1;	// IMP=0x000000000041e52f
- (id)_identifier;	// IMP=0x000000000041e44a
- (id)_insertDeferredRebuildFaceFromDataInManagedObjectContext:(id)arg1 personUUID:(id)arg2 isRejected:(_Bool)arg3;	// IMP=0x000000000041e244
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000041dbeb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000041d8fd
- (id)additionalDescription;	// IMP=0x000000000041d8f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
