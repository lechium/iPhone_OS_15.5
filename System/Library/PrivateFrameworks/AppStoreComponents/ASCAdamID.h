//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreComponents/NSCopying-Protocol.h>
#import <AppStoreComponents/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface ASCAdamID : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_stringValue;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000014674
+ (id)invalidAdamID;	// IMP=0x0000000000014648
- (void).cxx_destruct;	// IMP=0x0000000000014a6a
@property(readonly, copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(readonly, nonatomic) long long int64value;
@property(readonly, copy, nonatomic) NSNumber *numberValue;
- (id)description;	// IMP=0x0000000000014908
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000014802
- (unsigned long long)hash;	// IMP=0x00000000000147bc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000147b1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000014738
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001467c
- (id)initWithInt64:(long long)arg1;	// IMP=0x00000000000145df
- (id)initWithNumberValue:(id)arg1;	// IMP=0x0000000000014589
- (id)initWithStringValue:(id)arg1;	// IMP=0x0000000000014516

@end

