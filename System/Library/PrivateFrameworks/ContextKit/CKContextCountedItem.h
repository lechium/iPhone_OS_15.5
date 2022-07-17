//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContextKit/NSSecureCoding-Protocol.h>

@interface CKContextCountedItem : NSObject <NSSecureCoding>
{
    id _item;	// 8 = 0x8
    unsigned long long _count;	// 16 = 0x10
}

+ (id)item:(id)arg1 withCount:(unsigned long long)arg2;	// IMP=0x0000000000001778
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000001770
- (void).cxx_destruct;	// IMP=0x0000000000001936
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(retain, nonatomic) id item; // @synthesize item=_item;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000001895
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000017e4

@end
