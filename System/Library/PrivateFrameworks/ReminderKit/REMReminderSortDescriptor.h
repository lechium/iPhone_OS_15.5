//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSSecureCoding-Protocol.h>

@interface REMReminderSortDescriptor : NSObject <NSSecureCoding>
{
    _Bool _ascending;	// 8 = 0x8
    long long _type;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000057f5b
+ (id)sortDescriptorSortingByOrderingInListAscending:(_Bool)arg1;	// IMP=0x0000000000057f22
+ (id)sortDescriptorSortingByPriorityAscending:(_Bool)arg1;	// IMP=0x0000000000057ee9
+ (id)sortDescriptorSortingByDueDateAscending:(_Bool)arg1;	// IMP=0x0000000000057eb0
+ (id)sortDescriptorSortingByCreationDateAscending:(_Bool)arg1;	// IMP=0x0000000000057e77
+ (id)sortDescriptorSortingByTitleAscending:(_Bool)arg1;	// IMP=0x0000000000057e41
@property(readonly, nonatomic) _Bool ascending; // @synthesize ascending=_ascending;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (unsigned long long)hash;	// IMP=0x0000000000058167
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000580a2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000058025
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000057f63
- (id)initWithType:(long long)arg1 ascending:(_Bool)arg2;	// IMP=0x0000000000057df9

@end

