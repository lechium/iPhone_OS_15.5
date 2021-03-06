//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariSharedUI/WBSCloudBookmarksMigrationCoordinator.h>

#import <MobileSafariUI/WBSCloudBookmarksMigrationCoordinatorLocalDataProvider-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SafariCloudBookmarksMigrationCoordinator : WBSCloudBookmarksMigrationCoordinator <WBSCloudBookmarksMigrationCoordinatorLocalDataProvider>
{
}

+ (id)migrationCoordinator;	// IMP=0x000000000010635e
- (void)getLocalMigrationStateForMigrationCoordinator:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000106967
- (_Bool)_evaluateMigrationEnabled;	// IMP=0x00000000001068bc
- (void)_detectedLocalMigrationStateTransition:(id)arg1;	// IMP=0x000000000010679a
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000010670b
- (void)dealloc;	// IMP=0x000000000010663e
- (id)initWithSyncAgent:(id)arg1;	// IMP=0x00000000001064fe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

