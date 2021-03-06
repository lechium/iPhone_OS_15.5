//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MailKit/NSCopying-Protocol.h>
#import <MailKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface MEDecodedMessageBanner : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _dismissable;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_primaryActionTitle;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000845d
- (void).cxx_destruct;	// IMP=0x00000000000088c8
@property(readonly, nonatomic, getter=isDismissable) _Bool dismissable; // @synthesize dismissable=_dismissable;
@property(readonly, nonatomic) NSString *primaryActionTitle; // @synthesize primaryActionTitle=_primaryActionTitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (unsigned long long)hash;	// IMP=0x0000000000008824
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000008682
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000008677
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000008583
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000008465
- (id)initWithTitle:(id)arg1 primaryActionTitle:(id)arg2 dismissable:(_Bool)arg3;	// IMP=0x000000000000839a

@end

