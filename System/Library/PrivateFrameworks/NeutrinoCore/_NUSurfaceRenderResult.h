//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NeutrinoCore/NUSurfaceRenderResult-Protocol.h>

@class NSString, NUImageGeometry, NURegion;
@protocol NURenderStatistics, NUSurfaceImage;

@interface _NUSurfaceRenderResult <NUSurfaceRenderResult>
{
    id <NUSurfaceImage> _image;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000a92d7
@property(retain) id <NUSurfaceImage> image; // @synthesize image=_image;
@property(readonly, copy) NSString *debugDescription;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) NUImageGeometry *geometry;
@property(readonly) unsigned long long hash;
@property(readonly) NURegion *region;
@property(readonly) id <NURenderStatistics> statistics;
@property(readonly) Class superclass;

@end

