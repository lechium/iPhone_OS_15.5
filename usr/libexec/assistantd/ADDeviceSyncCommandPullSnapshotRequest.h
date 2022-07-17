//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADDeviceSyncCommandPullSnapshotRequest : NSObject
{
    NSString *_dataType;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000008710d
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x0010000000087353
- (void).cxx_destruct;	// IMP=0x00100000000871cf
@property(readonly, copy, nonatomic) NSString *dataType; // @synthesize dataType=_dataType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000871a2
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000087115
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000087102
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000008705f
- (unsigned long long)hash;	// IMP=0x0010000000087049
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x0010000000086ef0
- (id)description;	// IMP=0x0010000000086edc
- (id)initWithDataType:(id)arg1;	// IMP=0x0010000000086e69
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00100000000873c2

@end
