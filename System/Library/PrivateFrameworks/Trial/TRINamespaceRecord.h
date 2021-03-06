//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Trial/NSCopying-Protocol.h>
#import <Trial/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface TRINamespaceRecord : NSObject <NSCopying, NSSecureCoding>
{
    unsigned int _compatibilityVersion;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSURL *_treatmentURL;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000401ec
+ (id)recordWithName:(id)arg1 compatibilityVersion:(unsigned int)arg2 treatmentURL:(id)arg3;	// IMP=0x000000000003fe6a
- (void).cxx_destruct;	// IMP=0x000000000004061d
@property(readonly, nonatomic) NSURL *treatmentURL; // @synthesize treatmentURL=_treatmentURL;
@property(readonly, nonatomic) unsigned int compatibilityVersion; // @synthesize compatibilityVersion=_compatibilityVersion;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)init;	// IMP=0x00000000000405fa
- (id)description;	// IMP=0x000000000004056e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000404f1
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000401f4
- (unsigned long long)hash;	// IMP=0x0000000000040193
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004012b
- (_Bool)isEqualToRecord:(id)arg1;	// IMP=0x000000000003ffd1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003ffc6
- (id)copyWithReplacementTreatmentURL:(id)arg1;	// IMP=0x000000000003ff72
- (id)copyWithReplacementCompatibilityVersion:(unsigned int)arg1;	// IMP=0x000000000003ff39
- (id)copyWithReplacementName:(id)arg1;	// IMP=0x000000000003fee5
- (id)initWithName:(id)arg1 compatibilityVersion:(unsigned int)arg2 treatmentURL:(id)arg3;	// IMP=0x000000000003fd53

@end

