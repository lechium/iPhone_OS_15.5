//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNContactHeaderViewSizeAttributes : NSObject
{
    double _photoMinHeight;	// 8 = 0x8
    double _photoMinTopMargin;	// 16 = 0x10
    double _photoMinBottomMargin;	// 24 = 0x18
    double _minNavbarTitleOffset;	// 32 = 0x20
    double _maxNavbarTitleOffset;	// 40 = 0x28
    double __minHeight;	// 48 = 0x30
    double __maxHeight;	// 56 = 0x38
    double _photoMaxHeight;	// 64 = 0x40
    double _photoMaxTopMargin;	// 72 = 0x48
    double _photoMaxBottomMargin;	// 80 = 0x50
}

+ (id)displayAttributesWithNavBar;	// IMP=0x00000000001c32d0
+ (id)editingAttributesWithNavBar;	// IMP=0x00000000001c325d
+ (id)editingAttributes;	// IMP=0x00000000001c31da
+ (id)displayAttributes;	// IMP=0x00000000001c31c8
+ (id)defaultAttributes;	// IMP=0x00000000001c31af
@property(nonatomic) double photoMaxBottomMargin; // @synthesize photoMaxBottomMargin=_photoMaxBottomMargin;
@property(nonatomic) double photoMaxTopMargin; // @synthesize photoMaxTopMargin=_photoMaxTopMargin;
@property(nonatomic) double photoMaxHeight; // @synthesize photoMaxHeight=_photoMaxHeight;
@property(nonatomic) double _maxHeight; // @synthesize _maxHeight=__maxHeight;
@property(nonatomic) double _minHeight; // @synthesize _minHeight=__minHeight;
@property(nonatomic) double maxNavbarTitleOffset; // @synthesize maxNavbarTitleOffset=_maxNavbarTitleOffset;
@property(nonatomic) double minNavbarTitleOffset; // @synthesize minNavbarTitleOffset=_minNavbarTitleOffset;
@property(nonatomic) double photoMinBottomMargin; // @synthesize photoMinBottomMargin=_photoMinBottomMargin;
@property(nonatomic) double photoMinTopMargin; // @synthesize photoMinTopMargin=_photoMinTopMargin;
@property(nonatomic) double photoMinHeight; // @synthesize photoMinHeight=_photoMinHeight;
- (double)navbarTitleOffsetWithPercentMax:(double)arg1;	// IMP=0x00000000001c3079
- (double)photoBottomMarginWithPercentMax:(double)arg1;	// IMP=0x00000000001c301f
- (double)photoTopMarginWithPercentMax:(double)arg1;	// IMP=0x00000000001c2fc5
- (double)photoHeightWithPercentMax:(double)arg1;	// IMP=0x00000000001c2f6b
- (double)valueBetweenMin:(double)arg1 max:(double)arg2 percentMax:(double)arg3;	// IMP=0x00000000001c2f59
- (double)maxHeight;	// IMP=0x00000000001c2ecb
- (double)minHeight;	// IMP=0x00000000001c2e3d
- (id)init;	// IMP=0x00000000001c2dd7

@end

