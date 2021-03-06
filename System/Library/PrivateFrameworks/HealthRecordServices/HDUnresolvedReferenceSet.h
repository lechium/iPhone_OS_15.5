//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthRecordServices/NSCopying-Protocol.h>
#import <HealthRecordServices/NSSecureCoding-Protocol.h>

@class HDFHIRResourceObject, NSSet;

@interface HDUnresolvedReferenceSet : NSObject <NSSecureCoding, NSCopying>
{
    NSSet *_references;	// 8 = 0x8
    HDFHIRResourceObject *_resource;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000068ca
- (void).cxx_destruct;	// IMP=0x0000000000006ade
@property(readonly, nonatomic) HDFHIRResourceObject *resource; // @synthesize resource=_resource;
@property(readonly, copy, nonatomic) NSSet *references; // @synthesize references=_references;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000006abf
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000006980
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000068d2
- (id)initWithReferences:(id)arg1 resource:(id)arg2;	// IMP=0x0000000000006826
- (id)init;	// IMP=0x00000000000067ac

@end

