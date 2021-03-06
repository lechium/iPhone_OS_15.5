//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface PKPaymentDeviceConfigurationData : NSObject <NSSecureCoding>
{
    _Bool _devSigned;	// 8 = 0x8
    NSNumber *_primaryJSBLSequenceCounter;	// 16 = 0x10
    NSString *_secureElementIdentifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001f3b7
- (void).cxx_destruct;	// IMP=0x000000000001f403
@property(nonatomic) _Bool devSigned; // @synthesize devSigned=_devSigned;
@property(copy, nonatomic) NSString *secureElementIdentifier; // @synthesize secureElementIdentifier=_secureElementIdentifier;
@property(copy, nonatomic) NSNumber *primaryJSBLSequenceCounter; // @synthesize primaryJSBLSequenceCounter=_primaryJSBLSequenceCounter;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001f33f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001f26d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001f178

@end

