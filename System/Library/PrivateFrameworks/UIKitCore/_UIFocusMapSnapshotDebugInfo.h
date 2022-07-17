//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIImage, _UIFocusMapSearchInfo, _UIFocusMapSnapshot;

__attribute__((visibility("hidden")))
@interface _UIFocusMapSnapshotDebugInfo : NSObject
{
    UIImage *_image;	// 8 = 0x8
    _UIFocusMapSnapshot *_snapshot;	// 16 = 0x10
    _UIFocusMapSearchInfo *_focusMapSearchInfo;	// 24 = 0x18
    struct CGPoint _imageAnchorPoint;	// 32 = 0x20
}

+ (id)_summaryImageForDebugInfoArray:(id)arg1 forFocusMovementWithInfo:(id)arg2 scaleFactor:(double)arg3;	// IMP=0x0000000000699c6c
- (void).cxx_destruct;	// IMP=0x000000000069a9c5
@property(readonly, nonatomic) __weak _UIFocusMapSearchInfo *focusMapSearchInfo; // @synthesize focusMapSearchInfo=_focusMapSearchInfo;
@property(readonly, nonatomic) _UIFocusMapSnapshot *snapshot; // @synthesize snapshot=_snapshot;
- (id)_drawImage;	// IMP=0x00000000006990b5
- (struct CGRect)_rectContainingAllFocusRegions;	// IMP=0x0000000000698ebd
@property(readonly, nonatomic) struct CGPoint imageAnchorPoint; // @synthesize imageAnchorPoint=_imageAnchorPoint;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)initWithSnapshot:(id)arg1 focusMapSearchInfo:(id)arg2;	// IMP=0x0000000000698d39

@end
