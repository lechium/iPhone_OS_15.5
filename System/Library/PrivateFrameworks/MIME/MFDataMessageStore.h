//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface MFDataMessageStore
{
    NSData *_data;	// 8 = 0x8
    Class _messageClass;	// 16 = 0x10
    NSString *_storagePath;	// 24 = 0x18
    id _mailboxUid;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000003371f
@property(retain, nonatomic) id mailboxUid; // @synthesize mailboxUid=_mailboxUid;
- (_Bool)messageCanBeTriaged:(id)arg1;	// IMP=0x0000000000033703
- (id)storeData:(id)arg1 forMimePart:(id)arg2 isComplete:(_Bool)arg3;	// IMP=0x00000000000336d8
- (id)_cachedBodyDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2;	// IMP=0x00000000000336ae
- (id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2;	// IMP=0x0000000000033698
- (id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2;	// IMP=0x0000000000033682
- (id)bodyDataForMessage:(id)arg1 isComplete:(_Bool *)arg2 isPartial:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4;	// IMP=0x00000000000334fe
- (_Bool)bodyFetchRequiresNetworkActivity;	// IMP=0x00000000000334f6
- (id)headerDataForMessage:(id)arg1 downloadIfNecessary:(_Bool)arg2;	// IMP=0x000000000003338f
- (id)account;	// IMP=0x0000000000033387
- (id)message;	// IMP=0x000000000003331f
- (void)setMessageClass:(Class)arg1;	// IMP=0x000000000003330e
- (void)setStoragePath:(id)arg1;	// IMP=0x00000000000332b0
- (id)storagePath;	// IMP=0x000000000003329b
- (id)storePath;	// IMP=0x0000000000033291
- (id)initWithData:(id)arg1;	// IMP=0x00000000000331fc

@end
