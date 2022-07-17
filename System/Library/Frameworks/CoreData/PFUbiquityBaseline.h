//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSManagedObjectModel, NSMutableDictionary, NSPersistentStore, NSString, PFUbiquityBaselineMetadata, PFUbiquityLocation, _PFZipFileArchive;

__attribute__((visibility("hidden")))
@interface PFUbiquityBaseline
{
    PFUbiquityLocation *_baselineStagingLocation;	// 88 = 0x58
    PFUbiquityBaselineMetadata *_metadata;	// 96 = 0x60
    NSMutableDictionary *_storeFilenameToData;	// 104 = 0x68
    NSString *_storeFilename;	// 112 = 0x70
    NSString *_storeName;	// 120 = 0x78
    NSString *_modelVersionHash;	// 128 = 0x80
    NSManagedObjectModel *_model;	// 136 = 0x88
    _PFZipFileArchive *_baselineArchive;	// 144 = 0x90
    NSPersistentStore *_store;	// 152 = 0x98
}

- (_Bool)moveToPermanentLocation:(id *)arg1;	// IMP=0x0000000000284a33
- (_Bool)writeFileToLocation:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002845d3
- (_Bool)loadFileFromLocation:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002805a0
- (id)description;	// IMP=0x000000000027f26c
- (void)dealloc;	// IMP=0x000000000027f183
- (id)initWithBaselineLocation:(id)arg1 andLocalPeerID:(id)arg2;	// IMP=0x000000000027f02d
- (id)initWithLocalPeerID:(id)arg1 ubiquityRootLocation:(id)arg2 forStoreWithName:(id)arg3 andManagedObjectModel:(id)arg4;	// IMP=0x000000000027eef4
- (id)init;	// IMP=0x000000000027ee42

@end
