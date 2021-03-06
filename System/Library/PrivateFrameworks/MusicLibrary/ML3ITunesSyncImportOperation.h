//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface ML3ITunesSyncImportOperation
{
    _Bool _sagaIsEnabled;	// 8 = 0x8
    _Bool _resetSync;	// 9 = 0x9
    NSMutableDictionary *_cachedPIDToFilePathMap;	// 16 = 0x10
    NSMutableDictionary *_cachedPIDToLocationPropertyMap;	// 24 = 0x18
    NSMutableDictionary *_cachedSyncIDsToPIDsMap;	// 32 = 0x20
    NSMutableSet *_importedPlaylists;	// 40 = 0x28
    long long _devicePrimaryContainer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000017c8da
- (void)_archiveSyncPlistFiles;	// IMP=0x000000000017bf53
- (void)_processGeniusConfigPlist:(id)arg1;	// IMP=0x000000000017ba52
- (id)_dbInfoValuesForStep:(id)arg1;	// IMP=0x000000000017b524
- (void)_recoverExistingAsset:(id)arg1 forTrackId:(long long)arg2;	// IMP=0x000000000017b076
- (_Bool)_processDeletePlaylistOperation:(id)arg1 withImportSession:(void *)arg2;	// IMP=0x000000000017ae32
- (_Bool)_processUpdatePlaylistOperation:(id)arg1 withImportSession:(void *)arg2;	// IMP=0x000000000017ab97
- (_Bool)_processInsertPlaylistOperation:(id)arg1 withImportSession:(void *)arg2;	// IMP=0x000000000017a321
- (_Bool)_processUpdateDBInfoOperation:(id)arg1 withImportSession:(void *)arg2;	// IMP=0x0000000000179e48
- (_Bool)_processDeleteTrackOperation:(id)arg1 withImportSession:(void *)arg2;	// IMP=0x0000000000179b72
- (_Bool)_processUpdateTrackOperation:(id)arg1 withImportSession:(void *)arg2;	// IMP=0x0000000000179885
- (_Bool)_processInsertTrackOperation:(id)arg1 withImportSession:(void *)arg2;	// IMP=0x000000000017958a
- (_Bool)_processSyncOperation:(id)arg1 withImportSession:(void *)arg2;	// IMP=0x00000000001792c2
- (id)_syncOperationsFromPlistFile:(id)arg1;	// IMP=0x000000000017909f
- (id)_syncPlistFilesFromDirectory:(id)arg1;	// IMP=0x0000000000178ce3
- (_Bool)_performImportFromPlistFiles:(id)arg1 withTransaction:(id)arg2;	// IMP=0x0000000000177cf8
- (_Bool)_performImportOfTrackData:(id)arg1 WithTransaction:(id)arg2;	// IMP=0x0000000000177618
- (_Bool)_performImportWithTransaction:(id)arg1;	// IMP=0x0000000000177222
- (void)main;	// IMP=0x0000000000176fc2
- (unsigned long long)importSource;	// IMP=0x0000000000176fb7

@end

