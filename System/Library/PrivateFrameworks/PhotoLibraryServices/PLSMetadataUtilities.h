//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PLSMetadataUtilities : NSObject
{
}

+ (id)allAlbumsDetailsWriteToPath:(id)arg1 inLibrary:(id)arg2;	// IMP=0x00000000000ac2f1
+ (id)_detailsForAlbum:(id)arg1;	// IMP=0x00000000000abc62
+ (id)allAssetsDetailsWriteToPath:(id)arg1 includingLocal:(_Bool)arg2 includingFingerprints:(_Bool)arg3 forAlbumTitled:(id)arg4 library:(id)arg5;	// IMP=0x00000000000ab8e5
+ (void)serializeJSONFromObjectDetails:(id)arg1 ToPath:(id)arg2;	// IMP=0x00000000000ab817
+ (_Bool)initializeJSONFileAtPath:(id)arg1;	// IMP=0x00000000000ab737
+ (void)_writeJSONForObjectDetails:(id)arg1 toFile:(id)arg2;	// IMP=0x00000000000ab485
+ (void)writeJSONData:(id)arg1 toFile:(id)arg2;	// IMP=0x00000000000ab3ef
+ (id)_detailsForAsset:(id)arg1 includingLocal:(_Bool)arg2 includingFingerprints:(_Bool)arg3;	// IMP=0x00000000000aa707
+ (id)_normalizeObjectForJSON:(id)arg1;	// IMP=0x00000000000aa167
+ (id)dictionaryFromManagedObject:(id)arg1 excludeAttributes:(id)arg2 includingRelationships:(id)arg3 excludeRelationshipAttributes:(id)arg4 andSubRelationships:(id)arg5;	// IMP=0x00000000000a988e
+ (id)_allAlbumsInPhotoLibrary:(id)arg1;	// IMP=0x00000000000a9736
+ (_Bool)_writeDetails:(id)arg1 forEntityNamed:(id)arg2 toFilepath:(id)arg3 withDefaultFilename:(id)arg4;	// IMP=0x00000000000a94c3

@end

