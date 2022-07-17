//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, SXMosaicGalleryCluster, SXMosaicGalleryColumnLayout;

@interface SXMosaicGalleryGroupLayout : NSObject
{
    double _height;	// 8 = 0x8
    NSMutableArray *_columnRanges;	// 16 = 0x10
    NSArray *_frames;	// 24 = 0x18
    unsigned long long _numberOfColumns;	// 32 = 0x20
    SXMosaicGalleryCluster *_cluster;	// 40 = 0x28
    SXMosaicGalleryColumnLayout *_columnLayout;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000050dbe
@property(readonly, nonatomic) SXMosaicGalleryColumnLayout *columnLayout; // @synthesize columnLayout=_columnLayout;
@property(readonly, nonatomic) SXMosaicGalleryCluster *cluster; // @synthesize cluster=_cluster;
@property(readonly, nonatomic) unsigned long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(readonly, nonatomic) NSMutableArray *columnRanges; // @synthesize columnRanges=_columnRanges;
- (struct _NSRange)columnRangeForItem:(id)arg1;	// IMP=0x0000000000050c10
- (double)desiredHeightForItem:(id)arg1;	// IMP=0x0000000000050b4c
- (id)calculateFrames;	// IMP=0x00000000000509a1
- (double)calculateHeight;	// IMP=0x000000000005045b
@property(readonly, nonatomic) NSArray *frames; // @synthesize frames=_frames;
@property(readonly, nonatomic) double height; // @synthesize height=_height;
- (struct CGRect)frameForItemAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000050350
- (id)initWithCluster:(id)arg1 numberOfColumns:(unsigned long long)arg2 columnLayout:(id)arg3;	// IMP=0x000000000005029d
- (id)init;	// IMP=0x0000000000050284

@end
