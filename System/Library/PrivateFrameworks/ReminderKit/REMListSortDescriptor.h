//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSSecureCoding-Protocol.h>

@interface REMListSortDescriptor : NSObject <NSSecureCoding>
{
    _Bool _ascending;	// 8 = 0x8
    long long _type;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000028c1
+ (id)sortDescriptorSortingByOrderingInAccountAscending:(_Bool)arg1;	// IMP=0x0000000000002840
+ (id)sortDescriptorSortingByNameAscending:(_Bool)arg1;	// IMP=0x000000000000280a
@property(readonly, nonatomic) _Bool ascending; // @synthesize ascending=_ascending;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (unsigned long long)hash;	// IMP=0x0000000000002ad0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000002a05
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000002988
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000028c9
- (id)initWithType:(long long)arg1 ascending:(_Bool)arg2;	// IMP=0x0000000000002879

@end
