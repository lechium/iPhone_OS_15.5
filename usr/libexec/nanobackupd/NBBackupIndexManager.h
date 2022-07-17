//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NBBackupiCloud, NSArray, NSMutableDictionary;

@interface NBBackupIndexManager : NSObject
{
    NSArray *_allBackups;	// 8 = 0x8
    NSMutableDictionary *_metadataIndex;	// 16 = 0x10
    NBBackupiCloud *_iCloudBackup;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000006b1f
@property(retain, nonatomic) NBBackupiCloud *iCloudBackup; // @synthesize iCloudBackup=_iCloudBackup;
@property(retain, nonatomic) NSMutableDictionary *metadataIndex; // @synthesize metadataIndex=_metadataIndex;
@property(readonly, nonatomic) NSArray *allBackups; // @synthesize allBackups=_allBackups;
- (id)newBackupUUID;	// IMP=0x00100000000069bc
- (id)pathToBackupIndex;	// IMP=0x0010000000006932
- (id)persistMetadataIndex;	// IMP=0x00100000000066b8
- (id)_metadataIndexReadFromDiskIfNeeded;	// IMP=0x0010000000006559
- (id)metadataIndexReadFromDiskIfNeeded;	// IMP=0x0010000000006500
- (void)removeICloudBackupsFromIndex;	// IMP=0x001000000000633f
- (_Bool)shouldLoadiCloudBackups;	// IMP=0x0010000000006196
- (void)loadiCloudBackups:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005bac
- (void)purgeCache;	// IMP=0x0010000000005b6f
- (void)deleteBackupWithID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005694
- (void)createNewBackup:(CDUnknownBlockType)arg1;	// IMP=0x00100000000053fe
- (id)pathToBackupID:(id)arg1;	// IMP=0x001000000000536b
- (id)pathToBackup:(id)arg1;	// IMP=0x0010000000005309
- (void)backupForID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005178
- (void)localBackupsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000004f8a
- (void)iCloudBackupsWithTimeout:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004cef
- (void)allBackupsWithTimeout:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004a23
- (id)initWithiCloudBackup:(id)arg1;	// IMP=0x00100000000049b8

@end
