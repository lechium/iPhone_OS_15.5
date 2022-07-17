//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSString;

@interface PXRecipientTransport : NSObject <NSCopying>
{
    NSString *_address;	// 8 = 0x8
    long long _addressKind;	// 16 = 0x10
}

+ (id)new;	// IMP=0x00000000001a8b14
- (void).cxx_destruct;	// IMP=0x00000000001a8b04
@property(readonly, nonatomic) long long addressKind; // @synthesize addressKind=_addressKind;
@property(readonly, copy, nonatomic) NSString *address; // @synthesize address=_address;
- (id)description;	// IMP=0x00000000001a8a37
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001a8a2c
- (unsigned long long)hash;	// IMP=0x00000000001a89e8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a88be
- (id)initWithAddress:(id)arg1 addressKind:(long long)arg2;	// IMP=0x00000000001a87c5
- (id)init;	// IMP=0x00000000001a874b

@end
