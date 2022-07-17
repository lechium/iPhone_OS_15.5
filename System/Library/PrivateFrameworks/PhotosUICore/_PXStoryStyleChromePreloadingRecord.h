//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol PXStoryStyleDescriptor, PXStoryViewLayoutSpec;

@interface _PXStoryStyleChromePreloadingRecord : NSObject
{
    double _screenScale;	// 8 = 0x8
    id <PXStoryStyleDescriptor> _styleInfo;	// 16 = 0x10
    id <PXStoryViewLayoutSpec> _viewLayoutSpec;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000008f3ec5
@property(readonly, nonatomic) id <PXStoryViewLayoutSpec> viewLayoutSpec; // @synthesize viewLayoutSpec=_viewLayoutSpec;
@property(readonly, nonatomic) id <PXStoryStyleDescriptor> styleInfo; // @synthesize styleInfo=_styleInfo;
@property(readonly, nonatomic) double screenScale; // @synthesize screenScale=_screenScale;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008f3d1a
- (unsigned long long)hash;	// IMP=0x00000000008f3caa
- (id)init;	// IMP=0x00000000008f3c30
- (id)initWithScreenScale:(double)arg1 styleInfo:(id)arg2 viewLayoutSpec:(id)arg3;	// IMP=0x00000000008f3b88

@end
