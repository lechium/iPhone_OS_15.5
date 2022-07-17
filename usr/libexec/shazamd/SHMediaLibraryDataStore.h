//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFetchedResultsController, NSManagedObjectContext, NSPersistentContainer, NSString;
@protocol SHMediaLibraryDataStoreDelegate;

__attribute__((visibility("hidden")))
@interface SHMediaLibraryDataStore : NSObject
{
    NSFetchedResultsController *_tracksFetchedResultsController;	// 8 = 0x8
    NSFetchedResultsController *_groupsFetchedResultsController;	// 16 = 0x10
    id <SHMediaLibraryDataStoreDelegate> _delegate;	// 24 = 0x18
    NSPersistentContainer *_persistentContainer;	// 32 = 0x20
    NSManagedObjectContext *_managedObjectContext;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000003f4fa
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain, nonatomic) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
- (long long)libraryChangeTypeForFetchedResultsChangeType:(unsigned long long)arg1;	// IMP=0x001000000003f4a3
- (id)libraryItemFromManagedObject:(id)arg1;	// IMP=0x001000000003f0d5
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;	// IMP=0x001000000003ee94
@property(readonly, nonatomic) NSFetchedResultsController *groupsFetchedResultsController; // @synthesize groupsFetchedResultsController=_groupsFetchedResultsController;
@property(readonly, nonatomic) NSFetchedResultsController *tracksFetchedResultsController; // @synthesize tracksFetchedResultsController=_tracksFetchedResultsController;
- (void)updateManagedTrack:(id)arg1 withUpdatedTrack:(id)arg2;	// IMP=0x001000000003e7f1
- (void)associateTrack:(id)arg1 toGroupWithIdentifier:(id)arg2 context:(id)arg3;	// IMP=0x001000000003e5b2
- (id)createMetadataWithData:(id)arg1 track:(id)arg2 group:(id)arg3 context:(id)arg4;	// IMP=0x001000000003e496
- (id)fetchManagedObjectForRequest:(id)arg1 withPredicate:(id)arg2 context:(id)arg3;	// IMP=0x001000000003e139
- (void)reset;	// IMP=0x001000000003e08a
- (_Bool)commitChangesWithError:(id *)arg1;	// IMP=0x001000000003ddc6
- (void)deleteAllSyncMetadataItems;	// IMP=0x001000000003dcb2
- (void)deleteAllItems;	// IMP=0x001000000003daaf
- (void)deleteAllItemsWithFetchRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000003d4e8
- (void)deleteItemsByIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000003d06c
- (id)updateReportForLibraryGroups:(id)arg1;	// IMP=0x001000000003cb45
- (void)persistLibraryGroups:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000003c055
- (id)updateReportForLibraryTrack:(id)arg1;	// IMP=0x001000000003bb4b
- (void)persistUpdatedTracks:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000003b06a
- (id)fetchLibraryGroupsWithParameters:(id)arg1;	// IMP=0x001000000003ac37
- (id)fetchAllUploadableGroupsMissingLibrarySyncMetadata;	// IMP=0x001000000003a7f4
- (id)fetchAllUploadableTracksMissingLibrarySyncMetadata;	// IMP=0x001000000003a327
- (id)fetchLibraryTracksWithParameters:(id)arg1;	// IMP=0x0010000000039d8a
- (void)fetchLibraryItemsWithParameters:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000039cad
@property(nonatomic) __weak id <SHMediaLibraryDataStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (void)loadStoreWithType:(long long)arg1;	// IMP=0x00100000000395f5
- (id)initWithStoreType:(long long)arg1;	// IMP=0x001000000003959f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
