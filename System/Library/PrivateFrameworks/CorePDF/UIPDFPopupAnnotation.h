//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIPDFAnnotation;

@interface UIPDFPopupAnnotation
{
    UIPDFAnnotation *parent;	// 96 = 0x60
    struct CGRect _adjustedBounds;	// 104 = 0x68
}

@property(nonatomic) struct CGRect adjustedBounds; // @synthesize adjustedBounds=_adjustedBounds;
@property(nonatomic) UIPDFAnnotation *parent; // @synthesize parent;
- (_Bool)recognizeGestures;	// IMP=0x000000000008588a
- (int)annotationType;	// IMP=0x000000000008587f
- (struct CGRect)bounds;	// IMP=0x0000000000085804
- (Class)viewClass;	// IMP=0x00000000000857f3
- (id)init;	// IMP=0x00000000000857a1
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg1;	// IMP=0x000000000008574f

@end

