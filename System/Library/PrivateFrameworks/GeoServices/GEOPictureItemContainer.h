//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOPictureItemContainer-Protocol.h>

@class NSArray;

@interface GEOPictureItemContainer : NSObject <GEOPictureItemContainer>
{
    NSArray *_pictureItems;	// 8 = 0x8
    _Bool _allowFullScreenPhoto;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000703c1d
@property(readonly, nonatomic) _Bool allowFullScreenPhoto; // @synthesize allowFullScreenPhoto=_allowFullScreenPhoto;
@property(readonly, nonatomic) NSArray *pictureItems; // @synthesize pictureItems=_pictureItems;
- (id)initWithPictureItemContainer:(id)arg1;	// IMP=0x000000000070394e
- (id)initWithPictureItems:(id)arg1 allowFullScreenPhoto:(_Bool)arg2;	// IMP=0x00000000007038d0
- (id)init;	// IMP=0x00000000007038a6

@end

