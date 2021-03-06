//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoMailKitServer/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface NNMKComposedMessage : NSObject <NSSecureCoding>
{
    _Bool _includeAttachments;	// 8 = 0x8
    NSString *_composedMessageId;	// 16 = 0x10
    unsigned long long _sendingType;	// 24 = 0x18
    NSArray *_to;	// 32 = 0x20
    NSArray *_cc;	// 40 = 0x28
    NSString *_subject;	// 48 = 0x30
    NSString *_body;	// 56 = 0x38
    NSString *_referenceMessageId;	// 64 = 0x40
    NSString *_standaloneReferenceMessageId;	// 72 = 0x48
    NSString *_accountId;	// 80 = 0x50
    NSArray *_attachments;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000057dad
- (void).cxx_destruct;	// IMP=0x000000000005865b
@property(nonatomic) _Bool includeAttachments; // @synthesize includeAttachments=_includeAttachments;
@property(retain, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(retain, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property(retain, nonatomic) NSString *standaloneReferenceMessageId; // @synthesize standaloneReferenceMessageId=_standaloneReferenceMessageId;
@property(retain, nonatomic) NSString *referenceMessageId; // @synthesize referenceMessageId=_referenceMessageId;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
@property(retain, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(retain, nonatomic) NSArray *cc; // @synthesize cc=_cc;
@property(retain, nonatomic) NSArray *to; // @synthesize to=_to;
@property(nonatomic) unsigned long long sendingType; // @synthesize sendingType=_sendingType;
@property(retain, nonatomic) NSString *composedMessageId; // @synthesize composedMessageId=_composedMessageId;
- (id)description;	// IMP=0x00000000000584e6
- (id)copyWithNewId;	// IMP=0x00000000000582e1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005816c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000057db5
- (unsigned long long)size;	// IMP=0x0000000000057c5e
- (id)init;	// IMP=0x0000000000057bc2

@end

