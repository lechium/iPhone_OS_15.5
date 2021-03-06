//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSNumber, NSString, NSURL, SAPersonAttribute;

@interface SAEmailEmail
{
}

+ (id)emailWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000002478d
+ (id)email;	// IMP=0x000000000002477b
@property(copy, nonatomic) NSString *type;
@property(copy, nonatomic) NSString *timeZoneId;
@property(copy, nonatomic) NSString *subject;
@property(copy, nonatomic) NSURL *referenceId;
@property(copy, nonatomic) NSArray *recipientsTo;
@property(copy, nonatomic) NSArray *recipientsCc;
@property(copy, nonatomic) NSArray *recipientsBcc;
@property(copy, nonatomic) NSArray *receivingAddresses;
@property(copy, nonatomic) NSNumber *outgoing;
@property(copy, nonatomic) NSString *messagePreview;
@property(copy, nonatomic) NSString *message;
@property(retain, nonatomic) SAPersonAttribute *fromEmail;
@property(copy, nonatomic) NSDate *dateSent;
@property(copy, nonatomic) NSArray *attachments;
- (id)encodedClassName;	// IMP=0x000000000002476e
- (id)groupIdentifier;	// IMP=0x000000000002475a

@end

