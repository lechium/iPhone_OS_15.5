//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface STCoreDataCloudKitMirroringSyncOperation
{
}

- (void)main;	// IMP=0x0040000000025f9a
- (void)_exportWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000025988
- (void)_migrateWithExportNeeded:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000257cd
- (void)_reconcileWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000255ad
- (void)_importWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000024f9b
- (void)synchronizeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000024d15
- (id)initWithPersistenceController:(id)arg1;	// IMP=0x0010000000024ce6

@end

