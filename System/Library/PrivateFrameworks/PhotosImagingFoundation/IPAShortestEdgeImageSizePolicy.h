//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface IPAShortestEdgeImageSizePolicy
{
    double _shortestEdge;	// 8 = 0x8
}

- (unsigned long long)hash;	// IMP=0x0000000000012b59
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000012b39
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000012aba
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000012a2f
- (id)description;	// IMP=0x00000000000129e6
- (struct CGSize)transformSize:(struct CGSize)arg1;	// IMP=0x0000000000012987
- (_Bool)isBestFitPolicy;	// IMP=0x000000000001297f
- (id)initWithShortestEdge:(double)arg1;	// IMP=0x0000000000012903

@end

