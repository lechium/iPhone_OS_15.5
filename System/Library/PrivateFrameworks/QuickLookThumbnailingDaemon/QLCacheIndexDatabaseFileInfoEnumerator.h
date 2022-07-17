//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class QLCacheVersionedFileIdentifier;

@interface QLCacheIndexDatabaseFileInfoEnumerator
{
    _Bool _extraInfo;	// 24 = 0x18
    _Bool _ubiquitous;	// 25 = 0x19
    QLCacheVersionedFileIdentifier *_fileIdentifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001cca4
- (_Bool)nextFileWithCacheId:(unsigned long long *)arg1 versionedFileIdentifier:(id *)arg2 thumbnailCount:(unsigned int *)arg3 minSize:(float *)arg4 maxSize:(float *)arg5 totalDataLength:(unsigned long long *)arg6;	// IMP=0x000000000001ca74
- (id)initWithSqliteDatabase:(id)arg1 toEnumerateUbiquitousFiles:(_Bool)arg2 extraInfo:(_Bool)arg3;	// IMP=0x000000000001ca1f

@end
