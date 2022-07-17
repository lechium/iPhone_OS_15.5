//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKPassPersonalization : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _requiredPersonalizationFields;	// 8 = 0x8
    NSString *_termsAndConditions;	// 16 = 0x10
    NSString *_localizedDescription;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003e7d1c
+ (id)passPersonalizationWithPassBundle:(id)arg1;	// IMP=0x00000000003e77ef
- (void).cxx_destruct;	// IMP=0x00000000003e80af
@property(readonly, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(readonly, nonatomic) NSString *termsAndConditions; // @synthesize termsAndConditions=_termsAndConditions;
@property(readonly, nonatomic) unsigned long long requiredPersonalizationFields; // @synthesize requiredPersonalizationFields=_requiredPersonalizationFields;
- (id)description;	// IMP=0x00000000003e7f63
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003e7eea
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003e7e59
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003e7d24
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000003e7922

@end
