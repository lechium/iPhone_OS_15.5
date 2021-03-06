//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MFMailMessageStore;

@interface MailboxSource
{
    MFMailMessageStore *_store;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000341f4
@property(retain, nonatomic) MFMailMessageStore *store; // @synthesize store=_store;
- (id)mailboxUids;	// IMP=0x0010000000034110
- (void)close;	// IMP=0x00100000000340bf
- (id)accountForAutoFetch;	// IMP=0x001000000003405b
- (id)_store;	// IMP=0x0010000000034046
- (id)equivalentCriterion;	// IMP=0x0010000000033f9f
- (id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned int)arg2 inMailbox:(id)arg3;	// IMP=0x0010000000033ee3
- (id)storeSearchResultUsingSearchContext:(id)arg1 limit:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0010000000033ce2
- (_Bool)supportsSearch;	// IMP=0x0010000000033cda
- (_Bool)canFetchSearchResults;	// IMP=0x0010000000033c82
- (id)description;	// IMP=0x0010000000033b89
- (id)initWithMailbox:(id)arg1;	// IMP=0x0010000000033a97

@end

