//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface FCCoverArtImage : NSObject
{
    NSURL *_URL;	// 8 = 0x8
    struct CGSize _dimensions;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002f1f6a
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) struct CGSize dimensions; // @synthesize dimensions=_dimensions;
- (id)initWithDimensions:(struct CGSize)arg1 URL:(id)arg2;	// IMP=0x00000000002f1ec7

@end

