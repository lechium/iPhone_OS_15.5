//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/NSCopying-Protocol.h>
#import <SecurityFoundation/NSSecureCoding-Protocol.h>

@class NSData;

@interface _SFCiphertext : NSObject <NSCopying, NSSecureCoding>
{
    id _ciphertextInternal;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000010640
- (void).cxx_destruct;	// IMP=0x0000000000010a62
@property(readonly) NSData *ciphertext;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000109c1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000010954
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001092d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000010749
- (id)initWithCiphertext:(id)arg1;	// IMP=0x0000000000010648

@end

