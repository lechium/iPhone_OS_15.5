//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class ICLabel, NSLayoutConstraint, NSMutableDictionary, UIColor, UIImage, UIImageView;

@interface ICImageAndMovieThumbnailView : UIView
{
    _Bool _showAsMovie;	// 8 = 0x8
    _Bool _hairlineWidthUnitIsInPoint;	// 9 = 0x9
    _Bool _forceSquareImageAspectRatio;	// 10 = 0xa
    _Bool _showMovieDuration;	// 11 = 0xb
    unsigned long long _imageScaling;	// 16 = 0x10
    UIColor *_borderColor;	// 24 = 0x18
    unsigned long long _hairlineEdges;	// 32 = 0x20
    unsigned long long _edgesToRemoveStartPoint;	// 40 = 0x28
    unsigned long long _edgesToRemoveEndPoint;	// 48 = 0x30
    double _mininumScaleFactor;	// 56 = 0x38
    UIImageView *_imageView;	// 64 = 0x40
    NSLayoutConstraint *_imageViewLeftLayoutConstraint;	// 72 = 0x48
    NSLayoutConstraint *_imageViewRightLayoutConstraint;	// 80 = 0x50
    NSLayoutConstraint *_imageViewBottomLayoutConstraint;	// 88 = 0x58
    NSLayoutConstraint *_imageViewTopLayoutConstraint;	// 96 = 0x60
    UIView *_movieFooter;	// 104 = 0x68
    ICLabel *_movieDurationLabel;	// 112 = 0x70
    NSMutableDictionary *_hairlineLayers;	// 120 = 0x78
    NSMutableDictionary *_hairlineColors;	// 128 = 0x80
    CDStruct_1b6d18a9 _movieDuration;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00000000000e4ccf
@property(nonatomic) _Bool showMovieDuration; // @synthesize showMovieDuration=_showMovieDuration;
@property(retain, nonatomic) NSMutableDictionary *hairlineColors; // @synthesize hairlineColors=_hairlineColors;
@property(retain, nonatomic) NSMutableDictionary *hairlineLayers; // @synthesize hairlineLayers=_hairlineLayers;
@property(retain, nonatomic) ICLabel *movieDurationLabel; // @synthesize movieDurationLabel=_movieDurationLabel;
@property(retain, nonatomic) UIView *movieFooter; // @synthesize movieFooter=_movieFooter;
@property(retain, nonatomic) NSLayoutConstraint *imageViewTopLayoutConstraint; // @synthesize imageViewTopLayoutConstraint=_imageViewTopLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageViewBottomLayoutConstraint; // @synthesize imageViewBottomLayoutConstraint=_imageViewBottomLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageViewRightLayoutConstraint; // @synthesize imageViewRightLayoutConstraint=_imageViewRightLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageViewLeftLayoutConstraint; // @synthesize imageViewLeftLayoutConstraint=_imageViewLeftLayoutConstraint;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool forceSquareImageAspectRatio; // @synthesize forceSquareImageAspectRatio=_forceSquareImageAspectRatio;
@property(nonatomic) double mininumScaleFactor; // @synthesize mininumScaleFactor=_mininumScaleFactor;
@property(nonatomic) unsigned long long edgesToRemoveEndPoint; // @synthesize edgesToRemoveEndPoint=_edgesToRemoveEndPoint;
@property(nonatomic) unsigned long long edgesToRemoveStartPoint; // @synthesize edgesToRemoveStartPoint=_edgesToRemoveStartPoint;
@property(nonatomic) unsigned long long hairlineEdges; // @synthesize hairlineEdges=_hairlineEdges;
@property(nonatomic) _Bool hairlineWidthUnitIsInPoint; // @synthesize hairlineWidthUnitIsInPoint=_hairlineWidthUnitIsInPoint;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) CDStruct_1b6d18a9 movieDuration; // @synthesize movieDuration=_movieDuration;
@property(nonatomic) _Bool showAsMovie; // @synthesize showAsMovie=_showAsMovie;
@property(nonatomic) unsigned long long imageScaling; // @synthesize imageScaling=_imageScaling;
- (void)updateHairlineFrames;	// IMP=0x00000000000e46c7
- (struct CGRect)frameByApplyingHorizontalReductionTo:(struct CGRect)arg1 edge:(unsigned long long)arg2;	// IMP=0x00000000000e462d
- (struct CGRect)frameByApplyingVerticalReductionTo:(struct CGRect)arg1 edge:(unsigned long long)arg2;	// IMP=0x00000000000e458a
- (double)pixelWidth;	// IMP=0x00000000000e4567
- (double)hairlineWidthInPoint;	// IMP=0x00000000000e4505
- (double)backingScale;	// IMP=0x00000000000e4471
- (void)updateHairline;	// IMP=0x00000000000e39cd
- (id)hairlineLayerForEdge:(unsigned long long)arg1;	// IMP=0x00000000000e38db
- (_Bool)usesSeparateLayerForHairlineEdge:(unsigned long long)arg1;	// IMP=0x00000000000e389e
- (_Bool)usesSeparateLayersForHairlines;	// IMP=0x00000000000e3820
- (void)updateDurationLabel;	// IMP=0x00000000000e372e
- (void)setHairlineColor:(id)arg1 forEdges:(unsigned long long)arg2;	// IMP=0x00000000000e3447
@property(nonatomic) double cornerRadius; // @dynamic cornerRadius;
- (void)setupMovieFooter;	// IMP=0x00000000000e2680
@property(nonatomic) double imageInset; // @dynamic imageInset;
@property(retain, nonatomic) UIImage *image; // @dynamic image;
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000000e2363
- (void)commonInit;	// IMP=0x00000000000e1e4f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e1df8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000e1de4
- (id)initWithFrame:(struct CGRect)arg1 showMovieDuration:(_Bool)arg2;	// IMP=0x00000000000e1d75

@end

