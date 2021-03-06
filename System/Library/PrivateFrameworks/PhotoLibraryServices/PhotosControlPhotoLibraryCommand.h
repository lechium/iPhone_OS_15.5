//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSManagedObjectContext, NSObject, NSString, NSURL, PHPhotoLibrary, PLPhotosCTL;
@protocol OS_dispatch_group;

@interface PhotosControlPhotoLibraryCommand
{
    NSManagedObjectContext *_moc;	// 8 = 0x8
    PHPhotoLibrary *_photoLibrary;	// 16 = 0x10
    NSURL *_libraryURL;	// 24 = 0x18
    NSString *_libraryArg;	// 32 = 0x20
    NSObject<OS_dispatch_group> *_group;	// 40 = 0x28
    PLPhotosCTL *_ctl;	// 48 = 0x30
    struct _NSRange _argumentRangeForRunOnManagedObjects;	// 56 = 0x38
}

+ (const char *)libraryOptstring;	// IMP=0x00000000003a0b3c
+ (struct option *)libraryLongopts;	// IMP=0x00000000003a0b34
+ (id)libraryUsagesummary;	// IMP=0x00000000003a0b2c
+ (id)libraryUsage;	// IMP=0x00000000003a0b24
+ (struct option *)longopts;	// IMP=0x00000000003a0ad5
+ (const char *)optstring;	// IMP=0x00000000003a0a73
+ (id)usage;	// IMP=0x00000000003a09d0
+ (id)usagesummary;	// IMP=0x00000000003a095c
- (void).cxx_destruct;	// IMP=0x000000000039f847
@property(readonly) NSString *libraryArg; // @synthesize libraryArg=_libraryArg;
@property(readonly) NSURL *libraryURL; // @synthesize libraryURL=_libraryURL;
- (int)runOnPhotoKitAssetArgumentsAllowAll:(_Bool)arg1 propertySets:(id)arg2 additionalPredicate:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x000000000039f7b2
- (id)managedObjectContext;	// IMP=0x000000000039f76e
- (id)photoLibrary;	// IMP=0x000000000039f72a
- (id)plPhotoLibrary;	// IMP=0x000000000039f6e6
- (_Bool)libraryProcessOption:(BOOL)arg1 arg:(id)arg2;	// IMP=0x000000000039f6de
- (_Bool)processOption:(int)arg1 arg:(id)arg2;	// IMP=0x000000000039f63e
- (id)libraryURLFromArgument:(id)arg1;	// IMP=0x000000000039f467
- (id)processBooleanOptionArg:(id)arg1;	// IMP=0x000000000039f269
- (int)save;	// IMP=0x000000000039f1a4
- (id)jsonDictionaryFromError:(id)arg1;	// IMP=0x000000000039f098
- (id)jsonDictionaryFromManagedObject:(id)arg1 maxDepth:(unsigned long long)arg2;	// IMP=0x000000000039f07b
- (id)_jsonDictionaryFromManagedObject:(id)arg1 allPreviousObjects:(id)arg2 currentDepth:(unsigned long long)arg3 maxDepth:(unsigned long long)arg4;	// IMP=0x000000000039ee90
- (int)runOnAssetArgumentsAllowAll:(_Bool)arg1 additionalPredicate:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000000039ed9b
- (int)runOnManagedObjectArgumentsWithEntityName:(id)arg1 identifierPropertyKey:(id)arg2 allowAll:(_Bool)arg3 additionalPredicate:(id)arg4 sortDescriptors:(id)arg5 relationshipKeyPathsForPrefetching:(id)arg6 block:(CDUnknownBlockType)arg7;	// IMP=0x000000000039ea4a
- (int)runOnManagedObjectArgumentsWithEntityName:(id)arg1 identifierPropertyKey:(id)arg2 allowAll:(_Bool)arg3 additionalPredicate:(id)arg4 sortDescriptors:(id)arg5 block:(CDUnknownBlockType)arg6;	// IMP=0x000000000039ea27
- (int)runOnManagedObjectArgumentsWithEntityName:(id)arg1 identifierPropertyKey:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000000039ea04
- (void)setArgumentRangeForRunOnManagedObjects:(struct _NSRange)arg1;	// IMP=0x000000000039e9ee
- (_Bool)argument:(id)arg1 isValidDouble:(double *)arg2;	// IMP=0x000000000039e960
- (id)photosCtl;	// IMP=0x000000000039e94b
- (void)configureWithAlternateURLToLibraryDatabase:(id)arg1;	// IMP=0x000000000039e63e
- (void)waitForGroup;	// IMP=0x000000000039e622
- (void)leaveGroup;	// IMP=0x000000000039e60d
- (void)enterGroup;	// IMP=0x000000000039e5f8
- (id)initWithArgc:(int)arg1 argv:(char **)arg2 options:(unsigned char)arg3 ctl:(id)arg4;	// IMP=0x000000000039e548

@end

