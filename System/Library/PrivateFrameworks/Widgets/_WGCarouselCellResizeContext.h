//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIViewFloatAnimatableProperty;

@interface _WGCarouselCellResizeContext : NSObject
{
    _Bool _active;	// 8 = 0x8
    double _compactHeight;	// 16 = 0x10
    double _expandedHeight;	// 24 = 0x18
    UIViewFloatAnimatableProperty *_resizeProgress;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002e7e7
@property(retain, nonatomic) UIViewFloatAnimatableProperty *resizeProgress; // @synthesize resizeProgress=_resizeProgress;
@property(nonatomic) double expandedHeight; // @synthesize expandedHeight=_expandedHeight;
@property(nonatomic) double compactHeight; // @synthesize compactHeight=_compactHeight;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;

@end
