//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkServiceProxy/NSCopying-Protocol.h>

@interface NSPPrivacyProxyPolicy : NSObject <NSCopying>
{
    struct {
        int *list;
        unsigned long long count;
        unsigned long long size;
    } _conditions;	// 8 = 0x8
}

- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001df2b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001df23
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001deea
- (void)copyTo:(id)arg1;	// IMP=0x000000000001de3c
- (id)dictionaryRepresentation;	// IMP=0x000000000001dc69
- (id)description;	// IMP=0x000000000001dbfd
- (int)StringAsConditions:(id)arg1;	// IMP=0x000000000001da20
- (id)conditionsAsString:(int)arg1;	// IMP=0x000000000001d92a
- (void)setConditions:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000001d924
- (int)conditionsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001d863
- (void)addConditions:(int)arg1;	// IMP=0x000000000001d85d
- (void)clearConditions;	// IMP=0x000000000001d857
@property(readonly, nonatomic) int *conditions;
@property(readonly, nonatomic) unsigned long long conditionsCount;
- (void)dealloc;	// IMP=0x000000000001d814

@end
