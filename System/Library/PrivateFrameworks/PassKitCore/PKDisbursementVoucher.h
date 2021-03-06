//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, NSURL;

@interface PKDisbursementVoucher : NSObject <NSSecureCoding, NSCopying>
{
    NSData *_data;	// 8 = 0x8
    NSURL *_redemptionURL;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003f89b8
- (void).cxx_destruct;	// IMP=0x00000000003f8dbe
@property(copy, nonatomic) NSURL *redemptionURL; // @synthesize redemptionURL=_redemptionURL;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
- (id)description;	// IMP=0x00000000003f8cef
- (unsigned long long)hash;	// IMP=0x00000000003f8c78
- (_Bool)isEqualToDisbursementVoucher:(id)arg1;	// IMP=0x00000000003f8c2b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003f8bc3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003f8b3f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003f8ad1
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003f89c0
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000003f88cb

@end

