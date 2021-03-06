//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INRideFareLineItemExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSDecimalNumber, NSString;

@interface INRideFareLineItem : NSObject <INRideFareLineItemExport, NSCopying, NSSecureCoding>
{
    NSString *_title;	// 8 = 0x8
    NSDecimalNumber *_price;	// 16 = 0x10
    NSString *_currencyCode;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001a8648
- (void).cxx_destruct;	// IMP=0x00000000001a8615
@property(readonly, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(readonly, nonatomic) NSDecimalNumber *price; // @synthesize price=_price;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)_dictionaryRepresentation;	// IMP=0x00000000001a849b
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x00000000001a83bf
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001a8328
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001a8230
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001a8225
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a8163
@property(readonly) unsigned long long hash;
- (id)initWithTitle:(id)arg1 price:(id)arg2 currencyCode:(id)arg3;	// IMP=0x00000000001a8023

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

