//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AKTextAnnotationAttributeHelper : NSObject
{
}

+ (void)enumerateFontAttributesOfAttributedString:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000024fab
+ (id)newTextStorageOriginalFontSavvyWithString:(id)arg1 attributes:(id)arg2;	// IMP=0x0000000000024f04
+ (id)newTextStorageOriginalFontSavvyWithAttributedString:(id)arg1;	// IMP=0x0000000000024e64
+ (id)newTextStorage:(id)arg1 byApplyingScaleFactor:(double)arg2;	// IMP=0x0000000000024c8a
+ (id)typingAttributes:(id)arg1 byApplyingScaleFactor:(double)arg2;	// IMP=0x0000000000024b58
+ (id)font:(id)arg1 byApplyingScaleFactor:(double)arg2;	// IMP=0x0000000000024aee
+ (id)actualOrPlaceholderTextOfAnnotation:(id)arg1;	// IMP=0x0000000000024a3e
+ (id)placeholderTextOfAnnotation:(id)arg1;	// IMP=0x0000000000024952
+ (void)adjustAnnotationBoundsToFitText:(id)arg1;	// IMP=0x0000000000024433
+ (void)adjustBoundsOfAnnotation:(id)arg1 toFitOptionalText:(id)arg2 onPageController:(id)arg3;	// IMP=0x00000000000242e9
+ (void)setTextAttributes:(id)arg1 ofAnnotation:(id)arg2;	// IMP=0x0000000000024205
+ (id)textAttributesOfEditor:(id)arg1;	// IMP=0x00000000000240c8
+ (id)textAttributesOfAnnotations:(id)arg1;	// IMP=0x0000000000023db3
+ (void)setTextAlignment:(long long)arg1 ofAnnotation:(id)arg2;	// IMP=0x0000000000023c4f
+ (void)setFont:(id)arg1 ofAnnotation:(id)arg2;	// IMP=0x0000000000023abd
+ (id)fontsOfEditor:(id)arg1;	// IMP=0x00000000000238f4
+ (id)fontsOfAnnotations:(id)arg1;	// IMP=0x0000000000023584
+ (void)resolvedAlignmentAndDirection:(id)arg1 locale:(id)arg2 alignment:(long long *)arg3 direction:(long long *)arg4;	// IMP=0x00000000000234af

@end
