//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MFMailboxUid, MFMessageHeaders, MailAccount;

@interface MFFakeMailMessage
{
    MFMailboxUid *_mailbox;	// 192 = 0xc0
    MFMessageHeaders *_headers;	// 200 = 0xc8
    MailAccount *_account;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x0000000000052fe3
@property(retain, nonatomic) MailAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) MFMessageHeaders *headers; // @synthesize headers=_headers;
@property(retain, nonatomic) MFMailboxUid *mailbox; // @synthesize mailbox=_mailbox;

@end
