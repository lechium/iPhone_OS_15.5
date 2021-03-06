//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/_PXWidgetCompositionRow-Protocol.h>

@class NSArray;

@interface _PXWidgetCompositionElementScanner : NSObject <_PXWidgetCompositionRow>
{
    long long _scanLocation;	// 8 = 0x8
    struct _NSRange _scannedRowRange;	// 16 = 0x10
    NSArray *_elements;	// 32 = 0x20
    CDUnknownBlockType _wantsEdgeToEdgeLayoutBlock;	// 40 = 0x28
    double _referenceWidth;	// 48 = 0x30
    double _interColumnSpacing;	// 56 = 0x38
    long long _maximumNumberOfColumns;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000467e0b
@property(nonatomic) long long maximumNumberOfColumns; // @synthesize maximumNumberOfColumns=_maximumNumberOfColumns;
@property(nonatomic) double interColumnSpacing; // @synthesize interColumnSpacing=_interColumnSpacing;
@property(nonatomic) double referenceWidth; // @synthesize referenceWidth=_referenceWidth;
@property(copy, nonatomic) CDUnknownBlockType wantsEdgeToEdgeLayoutBlock; // @synthesize wantsEdgeToEdgeLayoutBlock=_wantsEdgeToEdgeLayoutBlock;
@property(copy, nonatomic) NSArray *elements; // @synthesize elements=_elements;
- (void)enumerateElementsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000467b6e
@property(readonly, nonatomic) long long numberOfColumns;
- (_Bool)_wantsEdgeToEdgeLayoutForElement:(id)arg1;	// IMP=0x0000000000467ad8
- (_Bool)scanRow:(out id *)arg1;	// IMP=0x0000000000467946
@property(readonly, nonatomic, getter=isAtEnd) _Bool atEnd;

@end

