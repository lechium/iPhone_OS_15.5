//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKLabeledValue : NSObject <NSSecureCoding>
{
    NSString *_label;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000f37b4
- (void).cxx_destruct;	// IMP=0x00000000000f3af2
@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
- (unsigned long long)hash;	// IMP=0x00000000000f3a9f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f3a10
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f39a2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f3891
- (id)initWithLabel:(id)arg1 value:(id)arg2;	// IMP=0x00000000000f37d8
- (id)init;	// IMP=0x00000000000f37bc

@end

