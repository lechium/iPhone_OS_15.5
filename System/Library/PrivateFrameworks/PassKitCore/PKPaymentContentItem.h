//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSAttributedString, NSURLRequest;

@interface PKPaymentContentItem : NSObject <NSSecureCoding>
{
    _Bool _centered;	// 8 = 0x8
    NSURLRequest *_imageRequest;	// 16 = 0x10
    struct CGImage *_image;	// 24 = 0x18
    NSAttributedString *_title;	// 32 = 0x20
    NSAttributedString *_label;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000294fcd
+ (id)itemWithProtobuf:(id)arg1;	// IMP=0x0000000000175d55
- (void).cxx_destruct;	// IMP=0x00000000002952d0
@property(nonatomic, getter=isCentered) _Bool centered; // @synthesize centered=_centered;
@property(copy, nonatomic) NSAttributedString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSAttributedString *title; // @synthesize title=_title;
@property(nonatomic) struct CGImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSURLRequest *imageRequest; // @synthesize imageRequest=_imageRequest;
- (unsigned long long)hash;	// IMP=0x000000000029516d
- (_Bool)isEqualToPaymentContentItem:(id)arg1;	// IMP=0x0000000000295103
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000029509b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000294fd5
- (void)dealloc;	// IMP=0x0000000000294f93
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000294eb8
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000294cdd
- (id)protobuf;	// IMP=0x000000000017604c

@end
