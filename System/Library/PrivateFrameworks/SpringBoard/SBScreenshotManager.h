//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SBSceneManagerCoordinator, _SBScreenshotPersistenceCoordinator;
@protocol SBScreenshotManagerDataSource;

@interface SBScreenshotManager : NSObject
{
    SBSceneManagerCoordinator *_sceneManagerCoordinator;	// 8 = 0x8
    _SBScreenshotPersistenceCoordinator *_persistenceCoordinator;	// 16 = 0x10
    id <SBScreenshotManagerDataSource> _dataSource;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002b97a2
@property(retain, nonatomic, getter=_persistenceCoordinator, setter=_setPersistenceCoordinator:) _SBScreenshotPersistenceCoordinator *persistenceCoordinator; // @synthesize persistenceCoordinator=_persistenceCoordinator;
@property(retain, nonatomic, getter=_sceneManagerCoordinator, setter=_setSceneManagerCoordinator:) SBSceneManagerCoordinator *sceneManagerCoordinator; // @synthesize sceneManagerCoordinator=_sceneManagerCoordinator;
@property(readonly, nonatomic) id <SBScreenshotManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)_providerForScreen:(id)arg1;	// IMP=0x00000000002b96d5
- (id)_fetchEligibleScreenshotProvidersForSnapshotting;	// IMP=0x00000000002b94f9
- (void)saveScreenshotsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000002b8d72
- (void)saveScreenshots;	// IMP=0x00000000002b8cae
- (id)_initWithDataSource:(id)arg1 persistenceCoordinator:(id)arg2 sceneManagerCoordinator:(id)arg3;	// IMP=0x00000000002b8bf7
- (id)initWithDataSource:(id)arg1;	// IMP=0x00000000002b8b61

@end
