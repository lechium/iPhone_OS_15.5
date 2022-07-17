//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol NSObject><NSCopying;

@interface TabSnapshotRequest : NSObject
{
    double _topBackdropHeight;	// 8 = 0x8
    unsigned long long _options;	// 16 = 0x10
    id <NSObject><NSCopying> _identifier;	// 24 = 0x18
    struct CGSize _size;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000007b47a
@property(readonly, copy, nonatomic) id <NSObject><NSCopying> identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) double topBackdropHeight; // @synthesize topBackdropHeight=_topBackdropHeight;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007b315
- (unsigned long long)hash;	// IMP=0x000000000007b2c6
- (id)initWithSize:(struct CGSize)arg1 topBackdropHeight:(double)arg2 options:(unsigned long long)arg3 identifier:(id)arg4;	// IMP=0x000000000007b206
- (id)initWithSize:(struct CGSize)arg1 topBackdropHeight:(double)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000007b1ef

@end
