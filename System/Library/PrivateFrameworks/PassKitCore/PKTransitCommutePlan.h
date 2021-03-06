//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSMutableDictionary, NSString, PKPassField;

@interface PKTransitCommutePlan : NSObject <NSSecureCoding, NSCopying>
{
    NSMutableDictionary *_fieldsByKey;	// 8 = 0x8
    _Bool _requiresAppletSourceOfTruth;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSArray *_deviceAccountIdentifiers;	// 32 = 0x20
    PKPassField *_title;	// 40 = 0x28
    NSArray *_details;	// 48 = 0x30
    unsigned long long _properties;	// 56 = 0x38
    NSDate *_startDate;	// 64 = 0x40
    NSDate *_expiryDate;	// 72 = 0x48
    NSString *_startDateString;	// 80 = 0x50
    NSString *_expiryDateString;	// 88 = 0x58
    PKPassField *_usage;	// 96 = 0x60
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001ab26c
- (void).cxx_destruct;	// IMP=0x00000000001abe5c
@property(copy, nonatomic) PKPassField *usage; // @synthesize usage=_usage;
@property(copy, nonatomic) NSString *expiryDateString; // @synthesize expiryDateString=_expiryDateString;
@property(copy, nonatomic) NSString *startDateString; // @synthesize startDateString=_startDateString;
@property(copy, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) _Bool requiresAppletSourceOfTruth; // @synthesize requiresAppletSourceOfTruth=_requiresAppletSourceOfTruth;
@property(nonatomic) unsigned long long properties; // @synthesize properties=_properties;
@property(copy, nonatomic) NSArray *details; // @synthesize details=_details;
@property(copy, nonatomic) PKPassField *title; // @synthesize title=_title;
@property(copy, nonatomic) NSArray *deviceAccountIdentifiers; // @synthesize deviceAccountIdentifiers=_deviceAccountIdentifiers;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (unsigned long long)hash;	// IMP=0x00000000001abcce
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001abbbf
@property(copy, nonatomic) NSString *titleText;
- (id)_startField;	// IMP=0x00000000001ab893
- (id)_expiryField;	// IMP=0x00000000001ab876
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001ab62b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001ab376
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001ab274
@property(readonly, nonatomic) _Bool hasDisplayableInformation;
@property(readonly, nonatomic) _Bool isPlanAvailable;
@property(readonly, nonatomic) _Bool isPlanDisplayable;
- (id)passFieldForKey:(id)arg1;	// IMP=0x00000000001ab0dd
- (void)_updateProperties;	// IMP=0x00000000001ab027
- (void)_updateFieldsByKey;	// IMP=0x00000000001aad78

@end

