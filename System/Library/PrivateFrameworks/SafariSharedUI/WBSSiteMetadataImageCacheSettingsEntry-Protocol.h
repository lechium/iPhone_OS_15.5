//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariSharedUI/NSObject-Protocol.h>

@class WBSSQLiteRow;

@protocol WBSSiteMetadataImageCacheSettingsEntry <NSObject>
@property(readonly, nonatomic) long long databaseID;
- (id)entryWithDatabaseID:(long long)arg1;
- (id)initWithSQLiteRow:(WBSSQLiteRow *)arg1;
@end
