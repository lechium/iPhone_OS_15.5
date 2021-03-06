//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSortDescriptor, NSString, PHAssetCollection, PHCollectionList, PHImportSource, PHPhotoLibrary;

@interface PHImportOptions : NSObject
{
    struct options_bits _options_bits;	// 8 = 0x8
    PHAssetCollection *_destinationAlbum;	// 16 = 0x10
    PHCollectionList *_destinationFolder;	// 24 = 0x18
    NSSortDescriptor *_sortDescriptor;	// 32 = 0x20
    NSMutableDictionary *_userIptcMetadata;	// 40 = 0x28
    NSString *_personId;	// 48 = 0x30
    PHImportSource *_importSource;	// 56 = 0x38
    PHPhotoLibrary *_library;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001c52bb
@property(retain, nonatomic) PHPhotoLibrary *library; // @synthesize library=_library;
@property(retain, nonatomic) PHImportSource *importSource; // @synthesize importSource=_importSource;
@property(retain, nonatomic) NSString *personId; // @synthesize personId=_personId;
@property(retain, nonatomic) NSMutableDictionary *userIptcMetadata; // @synthesize userIptcMetadata=_userIptcMetadata;
@property(retain, nonatomic) NSSortDescriptor *sortDescriptor; // @synthesize sortDescriptor=_sortDescriptor;
@property(retain, nonatomic) PHCollectionList *destinationFolder; // @synthesize destinationFolder=_destinationFolder;
@property(retain, nonatomic) PHAssetCollection *destinationAlbum; // @synthesize destinationAlbum=_destinationAlbum;
- (void)setAllowUnsupported:(_Bool)arg1;	// IMP=0x00000000001c51e6
- (_Bool)allowUnsupported;	// IMP=0x00000000001c51d9
- (void)setOmitImportComplete:(_Bool)arg1;	// IMP=0x00000000001c51c1
- (_Bool)omitImportComplete;	// IMP=0x00000000001c51b6
@property(nonatomic) unsigned char metadataAddMode;
@property(nonatomic) _Bool deleteAfterImport;
@property(nonatomic) _Bool skipDiskSpaceCheck;
@property(nonatomic) _Bool allowDuplicates;
@property(nonatomic) _Bool shouldImportAsReferenced;
@property(nonatomic) unsigned char fileOperation;
@property(nonatomic) _Bool skipAlertWhenFinished;
@property(nonatomic) _Bool hideProgress;
- (void)setImportedBy:(short)arg1;	// IMP=0x00000000001c5083
- (short)importedBy;	// IMP=0x00000000001c5079
@property(nonatomic) _Bool preserveFolderStructure;
- (id)init;	// IMP=0x00000000001c4fdf

@end

