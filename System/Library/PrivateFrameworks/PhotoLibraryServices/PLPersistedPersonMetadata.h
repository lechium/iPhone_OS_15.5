//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSSet, NSString, NSURL, PLPerson;

@interface PLPersistedPersonMetadata : NSObject
{
    _Bool _cplEnabled;	// 8 = 0x8
    short _keyFacePickSource;	// 10 = 0xa
    short _userFeedbackType;	// 12 = 0xc
    short _userFeedbackFeature;	// 14 = 0xe
    unsigned int _manualOrder;	// 16 = 0x10
    int _type;	// 20 = 0x14
    int _verifiedType;	// 24 = 0x18
    int _cloudVerifiedType;	// 28 = 0x1c
    NSString *_personUUID;	// 32 = 0x20
    NSNumber *_detectionType;	// 40 = 0x28
    NSString *_mergeTargetPersonUUID;	// 48 = 0x30
    NSString *_fullName;	// 56 = 0x38
    NSString *_displayName;	// 64 = 0x40
    NSString *_personUri;	// 72 = 0x48
    NSArray *_detectedFaces;	// 80 = 0x50
    NSArray *_rejectedFaces;	// 88 = 0x58
    NSDictionary *_contactMatchingDictionary;	// 96 = 0x60
    NSString *_userFeedbackUUID;	// 104 = 0x68
    NSString *_userFeedbackContext;	// 112 = 0x70
    NSDate *_userFeedbackLastModifiedDate;	// 120 = 0x78
    NSSet *_userFeedbacks;	// 128 = 0x80
    NSArray *_userFeedbacksDictionaryArray;	// 136 = 0x88
    long long _fromVersion;	// 144 = 0x90
    PLPerson *_person;	// 152 = 0x98
    NSURL *_metadataURL;	// 160 = 0xa0
}

+ (void)performPostImportMigrationFromVersion:(unsigned long long)arg1 fromDataInManagedObjectContext:(id)arg2;	// IMP=0x0000000000426e91
+ (void)updateMergeTargetPersonWithPersonUUIDMapping:(id)arg1 fromDataInManagedObjectContext:(id)arg2;	// IMP=0x0000000000426b56
+ (id)personUUIDsToDedupeWithMetadataURLs:(id)arg1 cplEnabled:(_Bool)arg2;	// IMP=0x000000000042657b
+ (id)_persistedFaceMetadataWithFaces:(id)arg1 keyFace:(id)arg2 clusterRejectedFaceIDs:(id)arg3;	// IMP=0x0000000000426290
+ (id)_clusterRejectedFaceIDsWithPerson:(id)arg1;	// IMP=0x00000000004260f8
+ (id)_rejectedFacesToArchiveWithPerson:(id)arg1;	// IMP=0x0000000000425f63
+ (id)_detectedFacesToArchiveWithPerson:(id)arg1;	// IMP=0x0000000000425d06
+ (id)_fetchFacesWithPredicate:(id)arg1 resultType:(unsigned long long)arg2 managedObjectContext:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000425bb3
+ (_Bool)_deleteMetadataFileForPersonUUID:(id)arg1 metadataURL:(id)arg2;	// IMP=0x0000000000425982
+ (_Bool)deleteMetadataFileForPersonUUID:(id)arg1 pathManager:(id)arg2;	// IMP=0x00000000004258ff
+ (id)urlsForPersistedPersonsInMetadataDirectoryOfLibrary:(id)arg1;	// IMP=0x00000000004257bb
+ (id)_metadataFileURLForPersonUUID:(id)arg1 pathManager:(id)arg2;	// IMP=0x00000000004256c9
+ (_Bool)isValidPath:(id)arg1 outPersonUUID:(id *)arg2;	// IMP=0x00000000004255da
+ (_Bool)isValidPath:(id)arg1;	// IMP=0x00000000004255c6
- (void).cxx_destruct;	// IMP=0x00000000004251b0
@property(retain, nonatomic) NSURL *metadataURL; // @synthesize metadataURL=_metadataURL;
@property(retain, nonatomic) PLPerson *person; // @synthesize person=_person;
@property(nonatomic) long long fromVersion; // @synthesize fromVersion=_fromVersion;
@property(retain, nonatomic) NSArray *userFeedbacksDictionaryArray; // @synthesize userFeedbacksDictionaryArray=_userFeedbacksDictionaryArray;
@property(retain, nonatomic) NSSet *userFeedbacks; // @synthesize userFeedbacks=_userFeedbacks;
@property(readonly, nonatomic) NSDate *userFeedbackLastModifiedDate; // @synthesize userFeedbackLastModifiedDate=_userFeedbackLastModifiedDate;
@property(readonly, nonatomic) NSString *userFeedbackContext; // @synthesize userFeedbackContext=_userFeedbackContext;
@property(readonly, nonatomic) short userFeedbackFeature; // @synthesize userFeedbackFeature=_userFeedbackFeature;
@property(readonly, nonatomic) short userFeedbackType; // @synthesize userFeedbackType=_userFeedbackType;
@property(readonly, nonatomic) NSString *userFeedbackUUID; // @synthesize userFeedbackUUID=_userFeedbackUUID;
@property(nonatomic) short keyFacePickSource; // @synthesize keyFacePickSource=_keyFacePickSource;
@property(copy, nonatomic) NSDictionary *contactMatchingDictionary; // @synthesize contactMatchingDictionary=_contactMatchingDictionary;
@property(retain, nonatomic) NSArray *rejectedFaces; // @synthesize rejectedFaces=_rejectedFaces;
@property(retain, nonatomic) NSArray *detectedFaces; // @synthesize detectedFaces=_detectedFaces;
@property(nonatomic) int cloudVerifiedType; // @synthesize cloudVerifiedType=_cloudVerifiedType;
@property(nonatomic) int verifiedType; // @synthesize verifiedType=_verifiedType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) unsigned int manualOrder; // @synthesize manualOrder=_manualOrder;
@property(retain, nonatomic) NSString *personUri; // @synthesize personUri=_personUri;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(retain, nonatomic) NSString *mergeTargetPersonUUID; // @synthesize mergeTargetPersonUUID=_mergeTargetPersonUUID;
@property(nonatomic) NSNumber *detectionType; // @synthesize detectionType=_detectionType;
@property(retain, nonatomic) NSString *personUUID; // @synthesize personUUID=_personUUID;
- (id)jsonDictionary;	// IMP=0x0000000000424b3e
- (_Bool)matchesEntityInLibraryBackedByManagedObjectContext:(id)arg1 diff:(id *)arg2;	// IMP=0x000000000042410f
- (void)_saveMetadata;	// IMP=0x000000000042401d
- (id)_metadataData;	// IMP=0x00000000004234ae
- (_Bool)readMetadata;	// IMP=0x00000000004228f4
- (_Bool)readDetectedFaces;	// IMP=0x00000000004226d2
- (_Bool)_readUUID;	// IMP=0x00000000004225d2
- (id)description;	// IMP=0x0000000000422313
- (_Bool)_insertRejectedFacesOnPerson:(id)arg1 fromDataInManagedObjectContext:(id)arg2 deferUnmatched:(_Bool)arg3;	// IMP=0x0000000000421fd5
- (_Bool)_insertDetectedFacesOnPerson:(id)arg1 fromDataInManagedObjectContext:(id)arg2 deferUnmatched:(_Bool)arg3;	// IMP=0x0000000000421c97
- (_Bool)hasAllAssetsAvailableInManagedObjectContext:(id)arg1 includePendingAssetChanges:(_Bool)arg2;	// IMP=0x0000000000421a90
- (void)_addAssetUUIDsFromFaces:(id)arg1 toMutableSet:(id)arg2;	// IMP=0x0000000000421907
- (_Bool)updateFacesInPerson:(id)arg1 fromDataInManagedObjectContext:(id)arg2 deferUnmatched:(_Bool)arg3;	// IMP=0x000000000042187c
- (id)insertPersonFromDataInManagedObjectContext:(id)arg1;	// IMP=0x0000000000421485
- (void)removePersistedData;	// IMP=0x0000000000421408
- (void)writePersistedData;	// IMP=0x00000000004213f6
- (id)detectedFaceIdentifiers;	// IMP=0x0000000000421216
- (id)initWithPersistedDataAtURL:(id)arg1 deferUnarchiving:(_Bool)arg2 cplEnabled:(_Bool)arg3;	// IMP=0x0000000000421159
- (id)initWithPersistedDataAtURL:(id)arg1 cplEnabled:(_Bool)arg2;	// IMP=0x0000000000421142
- (id)initWithPLPerson:(id)arg1 metadataURL:(id)arg2;	// IMP=0x000000000042106b
- (id)initWithPLPerson:(id)arg1 pathManager:(id)arg2;	// IMP=0x0000000000420fa7
- (id)init;	// IMP=0x0000000000420f20

@end

