//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSString, PXPhotoAnalysisStatusController;

@interface PXProtoFeaturePlaceholderView <PXChangeObserver>
{
    PXPhotoAnalysisStatusController *_statusController;	// 72 = 0x48
    NSString *_statusDescription;	// 80 = 0x50
    double _preferredStatusWidth;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000a2827b
@property(readonly, nonatomic) double preferredStatusWidth; // @synthesize preferredStatusWidth=_preferredStatusWidth;
@property(readonly, copy, nonatomic) NSString *statusDescription; // @synthesize statusDescription=_statusDescription;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x0000000000a2819e
- (void)_setStatusDescription:(id)arg1;	// IMP=0x0000000000a28120
- (void)_updateStatusDescription;	// IMP=0x0000000000a28079
- (void)statusDescriptionDidChange;	// IMP=0x0000000000a28073
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000a27faf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
