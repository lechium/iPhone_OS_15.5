//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _REDiffItem : NSObject
{
    id _object;	// 8 = 0x8
    unsigned long long _index;	// 16 = 0x10
    CDUnknownBlockType _comparator;	// 24 = 0x18
    CDUnknownBlockType _hashGenerator;	// 32 = 0x20
}

+ (id)itemWithObject:(id)arg1 index:(unsigned long long)arg2 comparator:(CDUnknownBlockType)arg3 hashGenerator:(CDUnknownBlockType)arg4;	// IMP=0x00000000000d604c
- (void).cxx_destruct;	// IMP=0x00000000000d61e6
@property(readonly, nonatomic) CDUnknownBlockType hashGenerator; // @synthesize hashGenerator=_hashGenerator;
@property(readonly, nonatomic) CDUnknownBlockType comparator; // @synthesize comparator=_comparator;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
@property(readonly, nonatomic) id object; // @synthesize object=_object;
- (unsigned long long)hash;	// IMP=0x00000000000d61ab
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d611c

@end

