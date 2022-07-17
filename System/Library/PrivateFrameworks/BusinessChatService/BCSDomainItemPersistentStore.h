//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BusinessChatService/BCSDomainItemCaching-Protocol.h>

@class NSString;

@interface BCSDomainItemPersistentStore <BCSDomainItemCaching>
{
}

- (_Bool)executeDeleteDomainDomainItemSQLQuery:(id)arg1;	// IMP=0x000000000001db22
- (void)deleteAllExpiredDomainItems;	// IMP=0x000000000001da86
- (void)deleteAllDomainItems;	// IMP=0x000000000001da2a
- (void)deleteDomainItemMatching:(id)arg1;	// IMP=0x000000000001d99c
- (void)updateDomainItem:(id)arg1 withDomainItemIdentifier:(id)arg2;	// IMP=0x000000000001d748
- (void)updateDomainItemsForDomainShard:(id)arg1;	// IMP=0x000000000001d4d7
- (id)domainItemMatching:(id)arg1;	// IMP=0x000000000001d316
- (const char *)schema;	// IMP=0x000000000001d2fd
- (long long)schemaVersion;	// IMP=0x000000000001d2f2
- (id)databasePath;	// IMP=0x000000000001d244

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
