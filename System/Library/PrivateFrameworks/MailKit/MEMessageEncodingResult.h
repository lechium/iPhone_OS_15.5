//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MailKit/NSSecureCoding-Protocol.h>

@class MEEncodedOutgoingMessage, NSError;

@interface MEMessageEncodingResult : NSObject <NSSecureCoding>
{
    MEEncodedOutgoingMessage *_encodedMessage;	// 8 = 0x8
    NSError *_signingError;	// 16 = 0x10
    NSError *_encryptionError;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000c95c
- (void).cxx_destruct;	// IMP=0x000000000000cbda
@property(readonly, copy, nonatomic) NSError *encryptionError; // @synthesize encryptionError=_encryptionError;
@property(readonly, copy, nonatomic) NSError *signingError; // @synthesize signingError=_signingError;
@property(readonly, copy, nonatomic) MEEncodedOutgoingMessage *encodedMessage; // @synthesize encodedMessage=_encodedMessage;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000cab3
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000c964
- (id)initWithEncodedMessage:(id)arg1 signingError:(id)arg2 encryptionError:(id)arg3;	// IMP=0x000000000000c881

@end
