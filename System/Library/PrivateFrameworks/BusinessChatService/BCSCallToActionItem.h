//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BusinessChatService/NSCopying-Protocol.h>
#import <BusinessChatService/NSSecureCoding-Protocol.h>

@class NSString;

@interface BCSCallToActionItem : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isDefault;	// 8 = 0x8
    NSString *_language;	// 16 = 0x10
    NSString *_subtitle;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    NSString *_body;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000039a7b
- (void).cxx_destruct;	// IMP=0x0000000000039c30
@property(readonly, nonatomic) _Bool isDefault; // @synthesize isDefault=_isDefault;
@property(readonly, nonatomic) NSString *body; // @synthesize body=_body;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *language; // @synthesize language=_language;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000039a83
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003991a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003986c
- (id)description;	// IMP=0x000000000003972f
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 language:(id)arg3 body:(id)arg4 isDefault:(_Bool)arg5;	// IMP=0x000000000003961c
- (id)initWithCallToAction:(id)arg1;	// IMP=0x0000000000026938

@end

