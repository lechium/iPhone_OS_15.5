//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Email/EFPubliclyDescribable-Protocol.h>
#import <Email/NSSecureCoding-Protocol.h>

@class EMListUnsubscribeCommandMessageHeaders, NSString, NSURL;
@protocol EDReceivingAccount;

@interface EMListUnsubscribeCommand : NSObject <NSSecureCoding, EFPubliclyDescribable>
{
    id <EDReceivingAccount> _account;	// 8 = 0x8
    NSString *_accountIdentifier;	// 16 = 0x10
    _Bool _isMailtoOperation;	// 24 = 0x18
    long long _headerFlags;	// 32 = 0x20
    NSString *_address;	// 40 = 0x28
    NSString *_subject;	// 48 = 0x30
    NSString *_body;	// 56 = 0x38
    EMListUnsubscribeCommandMessageHeaders *_originalMessageHeaders;	// 64 = 0x40
    NSURL *_oneClickURL;	// 72 = 0x48
    NSString *_postContent;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000029766
+ (void)setAccountFinderBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000029561
+ (CDUnknownBlockType)accountFinderBlock;	// IMP=0x0000000000029548
+ (id)oneClickUnsubscribeCommandWithURL:(id)arg1 postContent:(id)arg2 account:(id)arg3 headers:(id)arg4 headerFlags:(long long)arg5;	// IMP=0x0000000000028e40
+ (id)mailtoUnsubscribeCommandWithAddress:(id)arg1 subject:(id)arg2 body:(id)arg3 account:(id)arg4 headers:(id)arg5 headerFlags:(long long)arg6;	// IMP=0x0000000000028d29
- (void).cxx_destruct;	// IMP=0x0000000000029d11
@property(readonly, nonatomic) NSString *postContent; // @synthesize postContent=_postContent;
@property(readonly, nonatomic) NSURL *oneClickURL; // @synthesize oneClickURL=_oneClickURL;
@property(readonly, nonatomic) EMListUnsubscribeCommandMessageHeaders *originalMessageHeaders; // @synthesize originalMessageHeaders=_originalMessageHeaders;
@property(readonly, nonatomic) NSString *body; // @synthesize body=_body;
@property(readonly, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(readonly, nonatomic) NSString *address; // @synthesize address=_address;
@property(readonly, nonatomic) long long headerFlags; // @synthesize headerFlags=_headerFlags;
@property(nonatomic) _Bool isMailtoOperation; // @synthesize isMailtoOperation=_isMailtoOperation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000029a29
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002976e
- (id)_accountWithIdentifier:(id)arg1;	// IMP=0x00000000000295db
@property(readonly, nonatomic) id <EDReceivingAccount> account;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002949e
@property(readonly, copy, nonatomic) NSString *ef_publicDescription;
@property(readonly) unsigned long long hash;
- (void)_commonInitWithAddress:(id)arg1 subject:(id)arg2 body:(id)arg3 URL:(id)arg4 postContent:(id)arg5;	// IMP=0x00000000000291f6
- (id)initWithAddress:(id)arg1 subject:(id)arg2 body:(id)arg3 URL:(id)arg4 postContent:(id)arg5 account:(id)arg6 headers:(id)arg7 headerFlags:(long long)arg8 isMailto:(_Bool)arg9;	// IMP=0x0000000000028f64
- (id)init;	// IMP=0x0000000000028733

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

