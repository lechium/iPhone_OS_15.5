//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UITargetedPreview;

__attribute__((visibility("hidden")))
@interface _UIContextMenuActionsOnlyViewController
{
    UITargetedPreview *_sourcePreview;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000105b7de
@property(retain, nonatomic) UITargetedPreview *sourcePreview; // @synthesize sourcePreview=_sourcePreview;
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000105b7b1
- (_Bool)_canInfluenceSceneOrientation;	// IMP=0x000000000105b7a9
- (struct CGSize)preferredContentSize;	// IMP=0x000000000105b514
- (void)viewDidLoad;	// IMP=0x000000000105b479
- (id)initWithTargetedPreview:(id)arg1;	// IMP=0x000000000105b40d

@end

