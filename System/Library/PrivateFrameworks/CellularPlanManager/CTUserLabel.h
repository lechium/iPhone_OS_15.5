//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CellularPlanManager/NSCopying-Protocol.h>
#import <CellularPlanManager/NSSecureCoding-Protocol.h>

@class NSString;

@interface CTUserLabel : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_label;	// 8 = 0x8
    NSString *_labelId;	// 16 = 0x10
    NSString *_key;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001afeb
- (void).cxx_destruct;	// IMP=0x000000000001b6b1
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) NSString *labelId; // @synthesize labelId=_labelId;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
- (id)description;	// IMP=0x000000000001b61d
- (id)_labelKeyDescription;	// IMP=0x000000000001b5d7
- (unsigned long long)hash;	// IMP=0x000000000001b57d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001b444
- (long long)indexInPredefinedLabels:(id)arg1;	// IMP=0x000000000001b332
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001b2af
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001b19f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001b0f8
- (id)initWithKey:(id)arg1 label:(id)arg2 labelId:(id)arg3;	// IMP=0x000000000001b012
- (id)initWithLabel:(id)arg1;	// IMP=0x000000000001aff3

@end

