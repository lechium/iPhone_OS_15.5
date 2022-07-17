//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PLLibraryServicesManager;

@interface PLPlatformLibraryServicesDelegate : NSObject
{
    _Bool _shouldSkipFileSystemImportOperation;	// 8 = 0x8
    PLLibraryServicesManager *_libraryServicesManager;	// 16 = 0x10
    long long _migrationType;	// 24 = 0x18
}

+ (Class)platformLibraryServicesDelegateClass;	// IMP=0x00200000000148e5
- (void).cxx_destruct;	// IMP=0x002000000001595c
@property(nonatomic) _Bool shouldSkipFileSystemImportOperation; // @synthesize shouldSkipFileSystemImportOperation=_shouldSkipFileSystemImportOperation;
@property(nonatomic) long long migrationType; // @synthesize migrationType=_migrationType;
@property(readonly, nonatomic) __weak PLLibraryServicesManager *libraryServicesManager; // @synthesize libraryServicesManager=_libraryServicesManager;
- (id)logPrefix;	// IMP=0x00100000000158d0
- (void)handleCompletedAllOperationsForLibraryState:(long long)arg1;	// IMP=0x00100000000156ec
- (void)operationCompletionActivities;	// IMP=0x00100000000154b3
- (id)commonBuiltInOperations;	// IMP=0x0010000000014e4b
- (id)operationForGreenTeaContactsAuthorizationCheck;	// IMP=0x0010000000014dd4
- (id)operationForLocaleChangeCheck;	// IMP=0x0010000000014d5d
- (id)systemLibraryBuiltInOperations;	// IMP=0x0010000000014b07
- (id)operationsForLibraryStateTransition:(long long)arg1;	// IMP=0x001000000001494f
@property(readonly, nonatomic) long long requiredStateForFileSystemImportOperation;
- (id)initWithLibraryServicesManager:(id)arg1;	// IMP=0x00100000000148f6

@end
