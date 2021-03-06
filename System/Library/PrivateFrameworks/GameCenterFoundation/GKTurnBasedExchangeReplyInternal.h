//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDate, NSDictionary;

@interface GKTurnBasedExchangeReplyInternal
{
    NSDictionary *_localizableMessage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    NSDate *_replyDate;	// 24 = 0x18
    unsigned char _recipientIndex;	// 32 = 0x20
}

+ (id)secureCodedPropertyKeys;	// IMP=0x00000000000fe558
- (void).cxx_destruct;	// IMP=0x00000000000fe79f
@property(retain, nonatomic) NSDate *replyDate; // @synthesize replyDate=_replyDate;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSDictionary *localizableMessage; // @synthesize localizableMessage=_localizableMessage;
@property(nonatomic) unsigned char recipientIndex; // @synthesize recipientIndex=_recipientIndex;

@end

