//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDate, PKPeerPaymentRecipient;

@interface PKCacheRecipientItem : NSObject <NSSecureCoding>
{
    NSDate *_insertDate;	// 8 = 0x8
    PKPeerPaymentRecipient *_item;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000040ea63
- (void).cxx_destruct;	// IMP=0x000000000040ea75
@property(readonly, nonatomic) PKPeerPaymentRecipient *item; // @synthesize item=_item;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000040e9f5
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000040e91b
- (_Bool)isNewerThan:(id)arg1;	// IMP=0x000000000040e8f9
- (_Bool)hasExpired;	// IMP=0x000000000040e84f
- (id)initWithItem:(id)arg1;	// IMP=0x000000000040e7ba

@end
