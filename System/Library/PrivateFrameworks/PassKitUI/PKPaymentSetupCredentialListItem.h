//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSCopying-Protocol.h>

@class PKPaymentCredential, PKPaymentPass, UIImage;

@interface PKPaymentSetupCredentialListItem <NSCopying>
{
    _Bool _isUnavailable;	// 8 = 0x8
    _Bool _isRefund;	// 9 = 0x9
    _Bool _isFetchingPassSnapshot;	// 10 = 0xa
    PKPaymentCredential *_credential;	// 16 = 0x10
    unsigned long long _lastCheckedCredentialHash;	// 24 = 0x18
    UIImage *_passSnapshot;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000005e89a
@property(nonatomic) _Bool isFetchingPassSnapshot; // @synthesize isFetchingPassSnapshot=_isFetchingPassSnapshot;
@property(nonatomic) _Bool isRefund; // @synthesize isRefund=_isRefund;
@property(nonatomic) _Bool isUnavailable; // @synthesize isUnavailable=_isUnavailable;
@property(retain, nonatomic) UIImage *passSnapshot; // @synthesize passSnapshot=_passSnapshot;
@property(nonatomic) unsigned long long lastCheckedCredentialHash; // @synthesize lastCheckedCredentialHash=_lastCheckedCredentialHash;
@property(retain, nonatomic) PKPaymentCredential *credential; // @synthesize credential=_credential;
- (id)description;	// IMP=0x000000000005e6bd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005e623
- (unsigned long long)hash;	// IMP=0x000000000005e58c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005e4a8
@property(readonly, nonatomic) PKPaymentPass *paymentPass;
- (id)initWithCredential:(id)arg1;	// IMP=0x000000000005e1b2

@end
