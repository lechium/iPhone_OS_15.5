//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSFetchRequest, NSManagedObjectContext, NSOperationQueue, NSString, PLPhotoLibraryBundle, PLPhotoLibraryPathManager;

@interface PLEnumerateAndSaveController : NSObject
{
    _Atomic _Bool _cancelled;	// 8 = 0x8
    _Bool _concurrent;	// 9 = 0x9
    _Bool _succeeded;	// 10 = 0xa
    NSString *_operationName;	// 16 = 0x10
    NSManagedObjectContext *_originalContext;	// 24 = 0x18
    PLPhotoLibraryBundle *_libraryBundle;	// 32 = 0x20
    NSFetchRequest *_originalFetchRequest;	// 40 = 0x28
    NSOperationQueue *_operationQueue;	// 48 = 0x30
    PLPhotoLibraryPathManager *_pathManager;	// 56 = 0x38
    CDUnknownBlockType _processResultsBlock;	// 64 = 0x40
    CDUnknownBlockType _generateContextBlock;	// 72 = 0x48
    NSError *_firstError;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000004f9c76
@property(retain, nonatomic) NSError *firstError; // @synthesize firstError=_firstError;
@property(nonatomic) _Bool succeeded; // @synthesize succeeded=_succeeded;
@property(copy, nonatomic) CDUnknownBlockType generateContextBlock; // @synthesize generateContextBlock=_generateContextBlock;
@property(copy, nonatomic) CDUnknownBlockType processResultsBlock; // @synthesize processResultsBlock=_processResultsBlock;
@property(retain, nonatomic) PLPhotoLibraryPathManager *pathManager; // @synthesize pathManager=_pathManager;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSFetchRequest *originalFetchRequest; // @synthesize originalFetchRequest=_originalFetchRequest;
@property(retain, nonatomic) PLPhotoLibraryBundle *libraryBundle; // @synthesize libraryBundle=_libraryBundle;
@property(retain, nonatomic) NSManagedObjectContext *originalContext; // @synthesize originalContext=_originalContext;
@property(retain, nonatomic) NSString *operationName; // @synthesize operationName=_operationName;
@property(nonatomic) _Bool concurrent; // @synthesize concurrent=_concurrent;
- (_Bool)processObjectsWithError:(id *)arg1;	// IMP=0x00000000004f95ff
- (void)_inq_runOperationWithObjectIDs:(id)arg1 onContext:(id)arg2;	// IMP=0x00000000004f8fe4
- (id)initWithName:(id)arg1 fetchRequest:(id)arg2 context:(id)arg3 pathManager:(id)arg4 concurrent:(_Bool)arg5 generateContextBlock:(CDUnknownBlockType)arg6 processResultBlock:(CDUnknownBlockType)arg7;	// IMP=0x00000000004f8bb7

@end
