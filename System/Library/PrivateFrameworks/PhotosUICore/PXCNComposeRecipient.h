//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNComposeRecipient;

@interface PXCNComposeRecipient
{
    CNComposeRecipient *_recipient;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000095ca73
@property(readonly, nonatomic) CNComposeRecipient *recipient; // @synthesize recipient=_recipient;
- (id)description;	// IMP=0x000000000095ca21
- (id)initWithRecipient:(id)arg1;	// IMP=0x000000000095c886
- (id)initWithContact:(id)arg1 address:(id)arg2 nameComponents:(id)arg3 recipientKind:(long long)arg4;	// IMP=0x000000000095c7ea

@end

