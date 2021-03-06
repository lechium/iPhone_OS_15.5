//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface PHFaceCrop
{
    short _state;	// 16 = 0x10
    short _type;	// 18 = 0x12
    NSData *_resourceData;	// 24 = 0x18
}

+ (id)fetchFaceCropByFaceLocalIdentifierForFaces:(id)arg1 fetchOptions:(id)arg2;	// IMP=0x00000000001f2ba2
+ (id)_trainingFaceCropByUUIDForPerson:(id)arg1 options:(id)arg2;	// IMP=0x00000000001f26d4
+ (id)fetchTransientTrainingFaceCropsForPerson:(id)arg1 options:(id)arg2;	// IMP=0x00000000001f24dc
+ (id)fetchFaceCropsNeedingFaceDetectionWithOptions:(id)arg1;	// IMP=0x00000000001f232e
+ (id)fetchFaceCropsForPerson:(id)arg1 options:(id)arg2;	// IMP=0x00000000001f225e
+ (id)fetchFaceCropsWithLocalIdentifiers:(id)arg1 options:(id)arg2;	// IMP=0x00000000001f218e
+ (id)fetchFaceCropsWithOptions:(id)arg1;	// IMP=0x00000000001f20e7
+ (id)fetchType;	// IMP=0x00000000001f20c8
+ (id)managedEntityName;	// IMP=0x00000000001f20bb
+ (id)identifierCode;	// IMP=0x00000000001f20ae
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x00000000001f1fe5
+ (id)entityKeyMap;	// IMP=0x00000000001f1f8f
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;	// IMP=0x00000000001f1f5f
- (void).cxx_destruct;	// IMP=0x00000000001f1f4c
@property(readonly, nonatomic) short type; // @synthesize type=_type;
@property(readonly, nonatomic) short state; // @synthesize state=_state;
@property(readonly, nonatomic) NSData *resourceData; // @synthesize resourceData=_resourceData;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;	// IMP=0x00000000001f1df1
- (Class)changeRequestClass;	// IMP=0x00000000001f1de0

@end

