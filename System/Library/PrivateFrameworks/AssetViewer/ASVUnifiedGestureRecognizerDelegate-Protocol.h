//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssetViewer/NSObject-Protocol.h>

@class ASVUnifiedGestureRecognizer;

@protocol ASVUnifiedGestureRecognizerDelegate <NSObject>
- (void)unifiedGestureRecognizerEndedScaling:(ASVUnifiedGestureRecognizer *)arg1;
- (void)unifiedGestureRecognizer:(ASVUnifiedGestureRecognizer *)arg1 scaledAssetToScale:(float)arg2;
- (void)unifiedGestureRecognizerBeganScaling:(ASVUnifiedGestureRecognizer *)arg1;
- (void)unifiedGestureRecognizer:(ASVUnifiedGestureRecognizer *)arg1 rotatedAssetByDeltaYaw:(float)arg2;
- (void)unifiedGestureRecognizer:(ASVUnifiedGestureRecognizer *)arg1 singleTappedAtScreenPoint:(_Bool)arg2 onAsset: /* Error: Ran out of types for this method. */;
- (void)unifiedGestureRecognizer:(ASVUnifiedGestureRecognizer *)arg1 doubleTappedAtScreenPoint:(_Bool)arg2 onAsset: /* Error: Ran out of types for this method. */;

@optional
- (void)unifiedGestureRecognizerEndedRotation:(ASVUnifiedGestureRecognizer *)arg1;
- (void)unifiedGestureRecognizerBeganRotation:(ASVUnifiedGestureRecognizer *)arg1;
@end
