//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/NSCopying-Protocol.h>
#import <AppPredictionClient/NSSecureCoding-Protocol.h>

@class NSSet, NSUUID;

@interface ATXSlotSet : NSObject <NSCopying, NSSecureCoding>
{
    unsigned int _hash;	// 8 = 0x8
    NSSet *_parameters;	// 16 = 0x10
    NSUUID *_uuid;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000013853
- (void).cxx_destruct;	// IMP=0x0000000000013c2e
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) NSSet *parameters; // @synthesize parameters=_parameters;
- (id)description;	// IMP=0x0000000000013bc9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000013b61
- (_Bool)isEqualToSlotSet:(id)arg1;	// IMP=0x0000000000013add
- (unsigned long long)hash;	// IMP=0x0000000000013960
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001387e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001385b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000013848
- (id)init;	// IMP=0x0000000000013842
- (id)initWithOpaqueParametersUuid:(id)arg1;	// IMP=0x00000000000137d7
- (id)initWithOpaqueParameters;	// IMP=0x00000000000137c3
- (id)initWithParameters:(id)arg1 uuid:(id)arg2;	// IMP=0x000000000001371f
- (id)initWithParameters:(id)arg1;	// IMP=0x000000000001370b

@end
