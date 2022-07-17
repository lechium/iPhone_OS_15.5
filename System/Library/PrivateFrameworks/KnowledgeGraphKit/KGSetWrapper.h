//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <KnowledgeGraphKit/NSCopying-Protocol.h>

@class NSSet;

@interface KGSetWrapper : NSObject <NSCopying>
{
    NSSet *_set;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000e1bd0
@property(readonly, nonatomic) NSSet *set; // @synthesize set=_set;
- (unsigned long long)hash;	// IMP=0x00000000000e1a92
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e1a31
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e1a26
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithArray:(id)arg1;	// IMP=0x00000000000e1992
- (id)initWithSet:(id)arg1;	// IMP=0x00000000000e191f

@end
