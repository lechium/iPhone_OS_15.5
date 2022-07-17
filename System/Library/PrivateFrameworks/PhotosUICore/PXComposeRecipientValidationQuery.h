//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSString, PXComposeRecipient;

@interface PXComposeRecipientValidationQuery : NSObject <NSCopying>
{
    PXComposeRecipient *_composeRecipient;	// 8 = 0x8
    NSString *_address;	// 16 = 0x10
    long long _addressKind;	// 24 = 0x18
    long long _validationType;	// 32 = 0x20
}

+ (id)new;	// IMP=0x0000000000418911
- (void).cxx_destruct;	// IMP=0x00000000004188e9
@property(nonatomic) long long validationType; // @synthesize validationType=_validationType;
@property(readonly, nonatomic) long long addressKind; // @synthesize addressKind=_addressKind;
@property(readonly, copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(readonly, nonatomic) PXComposeRecipient *composeRecipient; // @synthesize composeRecipient=_composeRecipient;
- (id)description;	// IMP=0x0000000000418839
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000041882e
- (unsigned long long)hash;	// IMP=0x00000000004187ea
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000418712
- (id)initWithComposeRecipient:(id)arg1 address:(id)arg2 addressKind:(long long)arg3;	// IMP=0x0000000000418570
- (id)init;	// IMP=0x00000000004184f6

@end
