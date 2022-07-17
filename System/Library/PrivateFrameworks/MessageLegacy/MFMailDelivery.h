//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DeliveryAccount, MFDeliveryResult, MFMessage, MFMutableMessageHeaders, MFPlainTextDocument, MailAccount, NSArray, NSDictionary, NSString;

@interface MFMailDelivery : NSObject
{
    id _delegate;	// 8 = 0x8
    MFMessage *_message;	// 16 = 0x10
    MailAccount *_archiveAccount;	// 24 = 0x18
    DeliveryAccount *_account;	// 32 = 0x20
    MFDeliveryResult *_result;	// 40 = 0x28
    MFMutableMessageHeaders *_headers;	// 48 = 0x30
    NSDictionary *_compositionSpecification;	// 56 = 0x38
    NSArray *_mixedContent;	// 64 = 0x40
    _Bool _textPartsAreHTML;	// 72 = 0x48
    NSString *_htmlString;	// 80 = 0x50
    MFPlainTextDocument *_plainTextAlternative;	// 88 = 0x58
    NSArray *_otherStringsAndAttachments;	// 96 = 0x60
    NSArray *_charsets;	// 104 = 0x68
    unsigned int _threaded:1;	// 112 = 0x70
    unsigned int _useCellDataOnly:1;	// 112 = 0x70
    _Bool _isUserRequested;	// 113 = 0x71
    unsigned long long _conversationFlags;	// 120 = 0x78
}

+ (_Bool)deliverMessage:(id)arg1;	// IMP=0x00000000000316f4
+ (id)newWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5;	// IMP=0x000000000003167c
+ (id)newWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(_Bool)arg3;	// IMP=0x0000000000031613
+ (id)newWithMessage:(id)arg1;	// IMP=0x00000000000315b4
@property(nonatomic) _Bool isUserRequested; // @synthesize isUserRequested=_isUserRequested;
@property(nonatomic) unsigned long long conversationFlags; // @synthesize conversationFlags=_conversationFlags;
@property(retain, nonatomic) NSDictionary *compositionSpecification; // @synthesize compositionSpecification=_compositionSpecification;
- (void)archive;	// IMP=0x0000000000032119
- (void)setCellDataOnly:(_Bool)arg1;	// IMP=0x0000000000032107
- (id)deliverMessageData:(id)arg1 toRecipients:(id)arg2;	// IMP=0x00000000000320d9
- (id)deliverSynchronously;	// IMP=0x0000000000031e42
- (void)deliverAsynchronously;	// IMP=0x0000000000031d41
- (_Bool)shouldEncryptMessage;	// IMP=0x0000000000031d08
- (_Bool)shouldSignMessage;	// IMP=0x0000000000031ccf
- (id)headersForDelivery;	// IMP=0x0000000000031b94
- (id)originalHeaders;	// IMP=0x0000000000031b73
- (id)deliveryResult;	// IMP=0x0000000000031b69
- (long long)deliveryStatus;	// IMP=0x0000000000031b53
- (void)setAccount:(id)arg1;	// IMP=0x0000000000031b21
- (id)account;	// IMP=0x0000000000031b17
- (void)setArchiveAccount:(id)arg1;	// IMP=0x0000000000031ae9
- (id)archiveAccount;	// IMP=0x0000000000031adf
- (void)setDelegate:(id)arg1;	// IMP=0x0000000000031ad5
- (id)delegate;	// IMP=0x0000000000031acb
- (id)message;	// IMP=0x00000000000319df
- (id)newMessageWriter;	// IMP=0x0000000000031993
- (void)dealloc;	// IMP=0x00000000000318d8
- (id)initWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5;	// IMP=0x0000000000031839
- (id)initWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(_Bool)arg3;	// IMP=0x00000000000317c5
- (id)initWithMessage:(id)arg1;	// IMP=0x0000000000031791
- (id)init;	// IMP=0x0000000000031755

@end
