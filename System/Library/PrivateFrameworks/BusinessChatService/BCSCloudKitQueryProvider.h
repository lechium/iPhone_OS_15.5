//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BusinessChatService/BCSCloudKitQueryProviding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BCSCloudKitQueryProvider : NSObject <BCSCloudKitQueryProviding>
{
}

- (id)_shardRecordTypeForType:(long long)arg1;	// IMP=0x00000000000378eb
- (id)_shardRecordNameForType:(long long)arg1 index:(long long)arg2 count:(long long)arg3;	// IMP=0x0000000000037895
- (id)queryForFetchItemsWithStartIndex:(long long)arg1 endIndex:(long long)arg2 type:(long long)arg3;	// IMP=0x00000000000376ee
- (id)queryForFetchShardIdentifier:(id)arg1;	// IMP=0x0000000000037560
- (id)queryForFetchConfigItemWithType:(long long)arg1;	// IMP=0x00000000000373db

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

