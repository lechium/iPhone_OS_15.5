//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface _MKLegendString : CALayer
{
    struct __CTLine *_line;	// 8 = 0x8
    double _baselineDistanceFromBottom;	// 16 = 0x10
    NSAttributedString *_string;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001edbde
@property(readonly, nonatomic) double baselineDistanceFromBottom; // @synthesize baselineDistanceFromBottom=_baselineDistanceFromBottom;
@property(retain, nonatomic) NSAttributedString *string; // @synthesize string=_string;
- (id)actionForKey:(id)arg1;	// IMP=0x00000000001edbb3
- (void)drawInContext:(struct CGContext *)arg1;	// IMP=0x00000000001edae8
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000001ed9f5
- (void)sizeToFit;	// IMP=0x00000000001ed8d7
- (void)dealloc;	// IMP=0x00000000001ed891
- (id)init;	// IMP=0x00000000001ed807

@end
