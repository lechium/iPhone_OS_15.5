//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface INWellnessMetadataPair : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_key;	// 8 = 0x8
    NSNumber *_numberValue;	// 16 = 0x10
    NSString *_stringValue;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002927ee
- (void).cxx_destruct;	// IMP=0x00000000002927bb
@property(readonly, copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(readonly, copy, nonatomic) NSNumber *numberValue; // @synthesize numberValue=_numberValue;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
- (id)_dictionaryRepresentation;	// IMP=0x00000000002926e8
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x000000000029260c
- (id)description;	// IMP=0x00000000002925f8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000292575
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000292442
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000292437
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000292372
- (unsigned long long)hash;	// IMP=0x000000000029235c
- (id)initWithString:(id)arg1 key:(id)arg2;	// IMP=0x00000000002922c3
- (id)initWithNumber:(id)arg1 key:(id)arg2;	// IMP=0x000000000029222a

@end
