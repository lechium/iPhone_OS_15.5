//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/NSCopying-Protocol.h>

@class NSString;

@interface IDSCTPNRValidationMechanism : NSObject <NSCopying>
{
    long long _type;	// 8 = 0x8
    NSString *_context;	// 16 = 0x10
}

+ (id)SMSLessMechanism;	// IMP=0x00000000000cabe4
+ (id)SMSMechanismWithContext:(id)arg1;	// IMP=0x00000000000cab96
- (void).cxx_destruct;	// IMP=0x00000000000caf23
@property(readonly, nonatomic) NSString *context; // @synthesize context=_context;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)description;	// IMP=0x00000000000cae56
- (unsigned long long)hash;	// IMP=0x00000000000cadf4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000cac96
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cac8b
- (id)initWithType:(long long)arg1 context:(id)arg2;	// IMP=0x00000000000cac0d

@end

