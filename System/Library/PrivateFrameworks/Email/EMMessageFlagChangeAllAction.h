//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface EMMessageFlagChangeAllAction
{
    NSArray *_mailboxObjectIDs;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003fcfa
- (void).cxx_destruct;	// IMP=0x000000000003feee
@property(readonly, copy, nonatomic) NSArray *mailboxObjectIDs; // @synthesize mailboxObjectIDs=_mailboxObjectIDs;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003fe2b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003fd02
- (long long)signpostType;	// IMP=0x000000000003fcef
- (id)initWithMailboxes:(id)arg1 messageListItemsToExclude:(id)arg2 flagChange:(id)arg3;	// IMP=0x000000000003fbf8

@end

