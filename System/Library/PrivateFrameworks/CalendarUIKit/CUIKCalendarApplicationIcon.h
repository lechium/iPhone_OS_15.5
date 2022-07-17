//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CUIKCalendarApplicationIcon : NSObject
{
}

+ (int)iconVersion;	// IMP=0x0000000000014f30
+ (double)_imageScaleForApplicationIconFormat:(int)arg1;	// IMP=0x0000000000014f26
+ (long long)_iconDateNameFormatTypeForDate:(id)arg1 calendar:(id)arg2 format:(int)arg3;	// IMP=0x0000000000014f1e
+ (id)_dateNameFromDateComponents:(id)arg1 type:(long long)arg2 style:(long long)arg3;	// IMP=0x0000000000014dc9
+ (id)_dateNameFromDate:(id)arg1 calendar:(id)arg2 type:(long long)arg3 style:(long long)arg4;	// IMP=0x0000000000014ce6
+ (id)_dayNumberStringFromDateComponents:(id)arg1;	// IMP=0x0000000000014be7
+ (id)_dayNumberStringFromDate:(id)arg1 calendar:(id)arg2;	// IMP=0x0000000000014a7f
+ (void)_fillContextWithWhiteBackgroundIfNeededForFormat:(long long)arg1 context:(struct CGContext *)arg2 frame:(struct CGRect)arg3;	// IMP=0x0000000000014a1d
+ (id)croppedIconImage:(id)arg1 format:(int)arg2;	// IMP=0x000000000001481d
+ (id)getUnmaskedIconImage:(int)arg1;	// IMP=0x00000000000145fd
+ (void)_drawGridInContext:(struct CGContext *)arg1 size:(struct CGSize)arg2;	// IMP=0x00000000000143a1
+ (void)_drawIconInContext:(struct CGContext *)arg1 imageSize:(struct CGSize)arg2 iconBase:(id)arg3 calendar:(id)arg4 dayNumberString:(id)arg5 dateNameBlock:(CDUnknownBlockType)arg6 dateNameFormatType:(long long)arg7 format:(long long)arg8 showGrid:(_Bool)arg9;	// IMP=0x000000000001408b
+ (void)drawIconInContext:(struct CGContext *)arg1 imageSize:(struct CGSize)arg2 iconBase:(id)arg3 dateComponents:(id)arg4 dateNameFormatType:(long long)arg5 format:(long long)arg6 showGrid:(_Bool)arg7;	// IMP=0x0000000000013c5d
+ (void)drawIconInContext:(struct CGContext *)arg1 imageSize:(struct CGSize)arg2 iconBase:(id)arg3 date:(id)arg4 calendar:(id)arg5 format:(int)arg6;	// IMP=0x00000000000137a7
+ (id)_whiteImage;	// IMP=0x00000000000136e4
+ (id)getMaskedIconImageWithFormat:(int)arg1 imageScale:(double)arg2;	// IMP=0x0000000000013683
+ (id)_iconImageWithFormat:(int)arg1 square:(_Bool)arg2 outline:(_Bool)arg3 drawBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000001337a
+ (int)_iconVariantForFormat:(int)arg1 scale:(double)arg2 outline:(_Bool)arg3;	// IMP=0x0000000000013325
+ (long long)_translateUIApplicationIconFormat:(int)arg1;	// IMP=0x0000000000013283
+ (id)iconImageWithDateComponents:(id)arg1 dateNameFormatType:(long long)arg2 format:(int)arg3;	// IMP=0x0000000000013096
+ (id)iconImageWithDate:(id)arg1 calendar:(id)arg2 format:(int)arg3;	// IMP=0x0000000000013081
+ (id)iconImageWithDate:(id)arg1 calendar:(id)arg2 format:(int)arg3 outline:(_Bool)arg4;	// IMP=0x0000000000012eb0
+ (long long)dynamicIconFormat:(int)arg1;	// IMP=0x0000000000012e97
+ (_Bool)formatSupportsDynamicIcon:(int)arg1;	// IMP=0x0000000000012e7e

@end
