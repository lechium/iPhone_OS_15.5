//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol ASVGestureDataSource;

@interface ASVGesture : NSObject
{
    _Bool _firstTouchWasOnAsset;	// 8 = 0x8
    id <ASVGestureDataSource> _dataSource;	// 16 = 0x10
    MISSING_TYPE *_initialAssetLocationOnScreen;	// 24 = 0x18
    MISSING_TYPE *_latestAssetLocationOnScreen;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001c6f3
@property(nonatomic) MISSING_TYPE *latestAssetLocationOnScreen; // @synthesize latestAssetLocationOnScreen=_latestAssetLocationOnScreen;
@property(nonatomic) MISSING_TYPE *initialAssetLocationOnScreen; // @synthesize initialAssetLocationOnScreen=_initialAssetLocationOnScreen;
@property(nonatomic) _Bool firstTouchWasOnAsset; // @synthesize firstTouchWasOnAsset=_firstTouchWasOnAsset;
@property(nonatomic) __weak id <ASVGestureDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)finishGesture;	// IMP=0x000000000001c688
- (void)updateGesture;	// IMP=0x000000000001c682
- (id)initWithDataSource:(id)arg1;	// IMP=0x000000000001c604

@end

