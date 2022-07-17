//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuickLookThumbnailing/QLCacheFileProviderFileIdentifier.h>

@interface QLCacheFileProviderFileIdentifier (SQLRequests)
+ (_Bool)removeFromDatabase:(id)arg1 fileWithCacheId:(unsigned long long)arg2;	// IMP=0x0000000000002c8c
+ (id)whereClauseToFindCacheId;	// IMP=0x0000000000002b4b
+ (id)queryStringToFindCacheIds;	// IMP=0x0000000000002b3e
+ (unsigned long long)rowIdFromCacheId:(unsigned long long)arg1;	// IMP=0x0000000000002a09
+ (unsigned long long)cacheIdFromRowId:(unsigned long long)arg1;	// IMP=0x0000000000002a00
+ (id)tableName;	// IMP=0x00000000000029f3
- (void)bindInFindCacheIdStatement:(struct sqlite3_stmt *)arg1 database:(id)arg2 startingAtIndex:(unsigned int)arg3 gettingNextIndex:(unsigned int *)arg4;	// IMP=0x0000000000002b6d
- (struct sqlite3_stmt *)statementToFindCacheIdInDatabase:(id)arg1;	// IMP=0x0000000000002a12
@end
