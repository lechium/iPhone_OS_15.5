//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreUI/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface CUINamedRenditionInfo : NSObject <NSCopying>
{
    void *_bitmap;	// 8 = 0x8
    const struct _renditionkeyfmt *_keyFormat;	// 16 = 0x10
}

- (void)incrementIndex:(unsigned long long *)arg1 inValues:(id)arg2 forAttribute:(int)arg3;	// IMP=0x000000000002156d
- (void)decrementValue:(long long *)arg1 forAttribute:(int)arg2;	// IMP=0x0000000000020e19
- (unsigned long long)numberOfBitsSet;	// IMP=0x0000000000020e08
- (void)clearAttributePresent:(int)arg1 withValue:(unsigned short)arg2;	// IMP=0x0000000000020ac7
- (void)setAttributePresent:(int)arg1 withValue:(unsigned short)arg2;	// IMP=0x0000000000020786
- (_Bool)diverseContentPresentForAttribute:(int)arg1;	// IMP=0x00000000000206fb
- (_Bool)contentEqualForAttribute:(int)arg1 withRenditionInfo:(id)arg2;	// IMP=0x0000000000020668
- (_Bool)contentPresentForAttribute:(int)arg1;	// IMP=0x00000000000205f7
- (unsigned short)getClosestValueOfAttribute:(int)arg1 withValue:(unsigned short)arg2;	// IMP=0x0000000000020568
- (unsigned short)getValueOfAttribute:(int)arg1;	// IMP=0x00000000000204a4
- (int)attributePresent:(int)arg1 withValue:(unsigned short)arg2;	// IMP=0x000000000002015a
- (id)bitwiseAndWith:(id)arg1;	// IMP=0x00000000000200ec
- (id)debugDescription;	// IMP=0x000000000001fd94
- (id)description;	// IMP=0x000000000001fd29
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001fce1
- (_Bool)isEqualToNamedRenditionInfo:(id)arg1;	// IMP=0x000000000001fccf
- (id)archivedData;	// IMP=0x000000000001fc35
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001fbc1
- (void)dealloc;	// IMP=0x000000000001fb87
- (id)initWithKeyFormat:(const struct _renditionkeyfmt *)arg1;	// IMP=0x000000000001faad
- (id)initWithData:(id)arg1 andKeyFormat:(const struct _renditionkeyfmt *)arg2;	// IMP=0x000000000001fa2f

@end

