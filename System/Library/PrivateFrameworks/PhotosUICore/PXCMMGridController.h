//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PXCMMStatusController, PXMomentShareStatusPresentation, UIViewController;

@interface PXCMMGridController : NSObject
{
    PXMomentShareStatusPresentation *_statusPresentation;	// 8 = 0x8
    PXCMMStatusController *_statusController;	// 16 = 0x10
    UIViewController *_gridViewController;	// 24 = 0x18
}

+ (_Bool)useGridZeroForCMMSession:(id)arg1;	// IMP=0x000000000038bba0
- (void).cxx_destruct;	// IMP=0x000000000038bb6d
@property(readonly, nonatomic) UIViewController *gridViewController; // @synthesize gridViewController=_gridViewController;
- (id)initWithCMMSession:(id)arg1 enableDismissAction:(_Bool)arg2 assetActionManager:(id)arg3 assetCollectionActionManager:(id)arg4 performerDelegate:(id)arg5 photosViewConfigurationBlock:(CDUnknownBlockType)arg6;	// IMP=0x000000000038b100
- (id)init;	// IMP=0x000000000038b086

@end

