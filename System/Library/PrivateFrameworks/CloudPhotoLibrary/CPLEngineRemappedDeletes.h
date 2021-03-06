//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLPlatformObject, NSMutableDictionary, NSString;

@interface CPLEngineRemappedDeletes <CPLAbstractObject>
{
    NSMutableDictionary *_perTransactionRemappedScopedIdentifiers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000aec8f
- (void)writeTransactionDidSucceed;	// IMP=0x00000000000aec45
- (void)writeTransactionDidFail;	// IMP=0x00000000000aebfb
- (id)realScopedIdentifierForRemappedScopedIdentifier:(id)arg1;	// IMP=0x00000000000ae7fc
- (id)_fixupRemappedDeletesAndReturnBestCloudScopedIdentifierFromRemappedScopedIdentifiers:(id)arg1 fallback:(id)arg2;	// IMP=0x00000000000ae4eb
- (void)discardDeleteForRemappedRecordWithScopedIdentifier:(id)arg1;	// IMP=0x00000000000ae39d
- (void)scheduleDeleteForRemappedRecordWithScopedIdentifier:(id)arg1 realScopedIdentifier:(id)arg2 asap:(_Bool)arg3;	// IMP=0x00000000000ae21a
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x00000000000ae1ab
- (unsigned long long)scopeType;	// IMP=0x00000000000ae1a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end

