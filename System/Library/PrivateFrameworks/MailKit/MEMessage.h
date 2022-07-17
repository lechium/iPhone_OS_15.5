//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MailKit/NSSecureCoding-Protocol.h>

@class MEEmailAddress, MEMessageRecipients, NSArray, NSData, NSDate, NSDictionary, NSString;

@interface MEMessage : NSObject <NSSecureCoding>
{
    long long _state;	// 8 = 0x8
    long long _encryptionState;	// 16 = 0x10
    NSString *_subject;	// 24 = 0x18
    MEEmailAddress *_fromAddress;	// 32 = 0x20
    NSDate *_dateSent;	// 40 = 0x28
    NSDate *_dateReceived;	// 48 = 0x30
    NSDictionary *_headers;	// 56 = 0x38
    NSData *_rawData;	// 64 = 0x40
    MEMessageRecipients *_recipients;	// 72 = 0x48
}

+ (_Bool)extensionCanSetHeaderKey:(id)arg1;	// IMP=0x000000000000b1bc
+ (id)_protectedHeaders;	// IMP=0x000000000000ae87
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000a1d0
- (void).cxx_destruct;	// IMP=0x000000000000b2f4
@property(retain, nonatomic) MEMessageRecipients *recipients; // @synthesize recipients=_recipients;
@property(readonly, copy, nonatomic) NSData *rawData; // @synthesize rawData=_rawData;
@property(readonly, copy, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(readonly, copy, nonatomic) NSDate *dateReceived; // @synthesize dateReceived=_dateReceived;
@property(readonly, copy, nonatomic) NSDate *dateSent; // @synthesize dateSent=_dateSent;
@property(readonly, copy, nonatomic) MEEmailAddress *fromAddress; // @synthesize fromAddress=_fromAddress;
@property(readonly, copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(readonly, nonatomic) long long encryptionState; // @synthesize encryptionState=_encryptionState;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (id)_sanitaizedHeadersForHeaders:(id)arg1;	// IMP=0x000000000000ab11
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000a7e7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000a5b7
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000a246
@property(readonly, copy, nonatomic) NSArray *replyToAddresses;
@property(readonly, copy, nonatomic) NSArray *bccAddresses;
@property(readonly, copy, nonatomic) NSArray *ccAddresses;
@property(readonly, copy, nonatomic) NSArray *toAddresses;
@property(readonly, copy, nonatomic) NSArray *allRecipientAddresses;
- (id)initWithState:(long long)arg1 encryptionState:(long long)arg2 subject:(id)arg3 recipients:(id)arg4 from:(id)arg5 dataSent:(id)arg6 dateReceived:(id)arg7 headers:(id)arg8 rawData:(id)arg9;	// IMP=0x000000000000a003

@end
