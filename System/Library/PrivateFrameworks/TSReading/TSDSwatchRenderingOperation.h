//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSObject, NSString, TSKDocumentRoot, UIView;
@protocol TSSPreset;

@interface TSDSwatchRenderingOperation : NSOperation
{
    UIView *mView;	// 8 = 0x8
    NSObject<TSSPreset> *mPreset;	// 16 = 0x10
    struct CGSize mImageSize;	// 24 = 0x18
    double mImageScale;	// 40 = 0x28
    struct CGRect mSwatchFrame;	// 48 = 0x30
    TSKDocumentRoot *mDocumentRoot;	// 80 = 0x50
    struct CGImage *mDeliveredImage;	// 88 = 0x58
    unsigned long long mInsertPopoverPageType;	// 96 = 0x60
    unsigned long long mInsertPopoverPageNumber;	// 104 = 0x68
    NSString *mIdentifier;	// 112 = 0x70
}

@property(copy) NSString *identifier; // @synthesize identifier=mIdentifier;
@property unsigned long long insertPopoverPageNumber; // @synthesize insertPopoverPageNumber=mInsertPopoverPageNumber;
@property unsigned long long insertPopoverPageType; // @synthesize insertPopoverPageType=mInsertPopoverPageType;
@property(readonly) struct CGRect swatchFrame; // @synthesize swatchFrame=mSwatchFrame;
@property(readonly) double imageScale; // @synthesize imageScale=mImageScale;
@property(readonly) struct CGSize imageSize; // @synthesize imageSize=mImageSize;
@property(readonly) NSObject<TSSPreset> *preset; // @synthesize preset=mPreset;
@property(retain) UIView *view; // @synthesize view=mView;
- (void)main;	// IMP=0x00000000001bad3c
- (void)doWorkWithReadLock;	// IMP=0x00000000001bacb7
- (struct UIEdgeInsets)swatchEdgeInsets;	// IMP=0x00000000001bac99
- (_Bool)needsPressedStateBackground;	// IMP=0x00000000001bac91
@property(readonly, nonatomic) struct CGImage *deliveredImage;
- (void)deliverCGImage:(struct CGImage *)arg1;	// IMP=0x00000000001babb3
- (void)p_deliverResultOnMainThread:(id)arg1;	// IMP=0x00000000001ba983
- (struct CGImage *)p_newSwatchPressedStateBackgroundFromCGImage:(struct CGImage *)arg1;	// IMP=0x00000000001ba7eb
- (void)p_animateSwatchIn;	// IMP=0x00000000001ba70d
- (void)dealloc;	// IMP=0x00000000001ba689
- (id)initWithPreset:(id)arg1 imageSize:(struct CGSize)arg2 imageScale:(double)arg3 swatchFrame:(struct CGRect)arg4 documentRoot:(id)arg5;	// IMP=0x00000000001ba5b3

@end

