//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface FRAppCacheSnapshotter : NSObject
{
    NSDate *_existingSnapshotCreationDate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000ef3be
- (id)creationDateOFURL:(id)arg1;	// IMP=0x00100000000ef2cc
- (id)snapshotURLForCachesURL:(id)arg1;	// IMP=0x00100000000ef2b0
- (id)URLWithSuffix:(id)arg1 baseURL:(id)arg2;	// IMP=0x00100000000ef1cf
- (id)tempRestoreURL;	// IMP=0x00100000000ef17b
- (id)snapshotURL;	// IMP=0x00100000000ef12e
- (void)copyURL:(id)arg1 toURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000eef0f
@property(readonly, nonatomic) NSDate *existingSnapshotCreationDate; // @synthesize existingSnapshotCreationDate=_existingSnapshotCreationDate;
@property(readonly, nonatomic) _Bool snapshotPreparedAndWaitingForRestoration;
- (void)finalizeRestoreOfCachesDirectory;	// IMP=0x00100000000eecd7
- (void)prepareToRestoreSnapshotAndKillApp;	// IMP=0x00100000000eea82
- (void)removeExistingSnapshotWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ee9b6
- (void)snapshotWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ee754

@end

