//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MailAccount;

@interface FavoriteItem_Inbox
{
    MailAccount *_account;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x002000000001d03c
- (id)analyticsKey;	// IMP=0x001000000001d02d
- (id)persistentIDForMigration;	// IMP=0x001000000001d010
- (id)criterion;	// IMP=0x001000000001cf99
- (_Bool)acceptsMessageTransfers;	// IMP=0x001000000001cf91
- (id)representingMailbox;	// IMP=0x001000000001cf74
- (id)account;	// IMP=0x000000000001cf5f
- (_Bool)isVisible;	// IMP=0x001000000001cf38
- (id)displayName;	// IMP=0x001000000001ce48
- (_Bool)_displayNameShouldBeRedacted;	// IMP=0x001000000001cdb0
- (id)parentItemID;	// IMP=0x001000000001cd4c
- (id)itemID;	// IMP=0x001000000001cc63
- (id)dictionaryRepresentation;	// IMP=0x001000000001cb59
- (id)initWithDictionary:(id)arg1;	// IMP=0x001000000001ca2b
- (unsigned long long)hash;	// IMP=0x001000000001c9c8
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000001c8a4
- (id)initWithAccount:(id)arg1;	// IMP=0x001000000001c81d

@end
