//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface ILMessageCommunication
{
    NSString *_messageBody;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000023c6
- (void).cxx_destruct;	// IMP=0x000000000000255b
@property(readonly, copy, nonatomic) NSString *messageBody; // @synthesize messageBody=_messageBody;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000002491
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000023ce
- (unsigned long long)hash;	// IMP=0x0000000000002345
- (_Bool)isEqualToMessageCommunication:(id)arg1;	// IMP=0x0000000000002281
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000002228
- (id)init;	// IMP=0x000000000000221a
- (id)initWithSender:(id)arg1 dateReceived:(id)arg2 messageBody:(id)arg3;	// IMP=0x0000000000002198

@end
