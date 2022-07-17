//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreAudioKit/CALayerDelegate-Protocol.h>

@class CALayer, MISSING_TYPE;
@protocol _TtP12CoreAudioKit27CAAUViewParameterDataSource_;

__attribute__((visibility("hidden")))
@interface _TtC12CoreAudioKit17CAAUFilterControl : NSObject <CALayerDelegate>
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *dataSource;	// 48 = 0x30
    MISSING_TYPE *param1;	// 56 = 0x38
    MISSING_TYPE *param2;	// 60 = 0x3c
    MISSING_TYPE *param3;	// 64 = 0x40
    MISSING_TYPE *controlLayer;	// 72 = 0x48
    MISSING_TYPE *guides;	// 80 = 0x50
    MISSING_TYPE *points;	// 88 = 0x58
    MISSING_TYPE *enabled;	// 96 = 0x60
    MISSING_TYPE *bypassed;	// 97 = 0x61
    MISSING_TYPE *highlighted;	// 98 = 0x62
    MISSING_TYPE *drawVerticalGuide;	// 99 = 0x63
    MISSING_TYPE *drawHorizontalGuide;	// 100 = 0x64
    MISSING_TYPE *type;	// 101 = 0x65
    MISSING_TYPE *widthType;	// 102 = 0x66
    MISSING_TYPE *location;	// 104 = 0x68
    MISSING_TYPE *widthPixels;	// 120 = 0x78
    MISSING_TYPE *tapOffest;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000000040cb0
- (id)init;	// IMP=0x0000000000040c50
- (void)layoutSublayersOfLayer:(id)arg1;	// IMP=0x000000000003f420
@property(nonatomic, retain) CALayer *controlLayer; // @synthesize controlLayer;
@property(nonatomic, readonly) id <_TtP12CoreAudioKit27CAAUViewParameterDataSource_> dataSource; // @synthesize dataSource;

@end
