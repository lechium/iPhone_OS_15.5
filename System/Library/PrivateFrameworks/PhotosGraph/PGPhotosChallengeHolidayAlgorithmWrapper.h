//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PGGraph, PHPhotoLibrary;

@interface PGPhotosChallengeHolidayAlgorithmWrapper : NSObject
{
    PGGraph *_graph;	// 8 = 0x8
    PHPhotoLibrary *_photoLibrary;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000232155
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(readonly, nonatomic) PGGraph *graph; // @synthesize graph=_graph;
- (id)debugInformationForHolidayName:(id)arg1 assetUUID:(id)arg2;	// IMP=0x000000000023151c
- (unsigned short)predictedQuestionStateForAssetUUID:(id)arg1 holidayName:(id)arg2;	// IMP=0x000000000023108a
- (id)initWithEvaluationContext:(id)arg1;	// IMP=0x0000000000230fdf

@end

