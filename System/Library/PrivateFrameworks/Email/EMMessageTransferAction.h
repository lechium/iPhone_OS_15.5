//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ECMessageFlagChange, NSURL;

@interface EMMessageTransferAction
{
    _Bool _copyMessages;	// 8 = 0x8
    NSURL *_destinationMailboxURL;	// 16 = 0x10
    long long _specialDestinationMailboxType;	// 24 = 0x18
    ECMessageFlagChange *_flagChange;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000624d4
- (void).cxx_destruct;	// IMP=0x00000000000627c6
@property(readonly, nonatomic) _Bool copyMessages; // @synthesize copyMessages=_copyMessages;
@property(readonly, nonatomic) ECMessageFlagChange *flagChange; // @synthesize flagChange=_flagChange;
@property(readonly, nonatomic) long long specialDestinationMailboxType; // @synthesize specialDestinationMailboxType=_specialDestinationMailboxType;
@property(readonly, nonatomic) NSURL *destinationMailboxURL; // @synthesize destinationMailboxURL=_destinationMailboxURL;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006263b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000624dc
- (long long)signpostType;	// IMP=0x00000000000624c9
- (id)initWithMessageListItems:(id)arg1 specialDestinationMailboxType:(long long)arg2 flagChange:(id)arg3 copyMessages:(_Bool)arg4;	// IMP=0x000000000006241a
- (id)initWithMessageListItems:(id)arg1 destinationMailbox:(id)arg2 copyMessages:(_Bool)arg3;	// IMP=0x00000000000622fb

@end

