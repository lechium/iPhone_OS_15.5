//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ATXSuggestionLayoutPreviewProducer : NSObject
{
}

+ (id)_proactiveSuggestionWithBundleId:(id)arg1 layoutType:(long long)arg2 title:(id)arg3;	// IMP=0x0000000000103ee1
+ (id)_scoreSpecForPreview;	// IMP=0x0000000000103eab
+ (id)_uiSpecForPreviewWithLayoutType:(long long)arg1 title:(id)arg2 subtitle:(id)arg3;	// IMP=0x0000000000103d96
+ (id)_executableSpecForAppPredictionWithBundleId:(id)arg1;	// IMP=0x0000000000103d3d
+ (id)_clientModelSpecForPreview;	// IMP=0x0000000000103d06
+ (id)previewLayoutForAppPredictionPanel;	// IMP=0x0000000000103b04
+ (id)previewLayoutFor4x4SuggestionWidget;	// IMP=0x000000000010394b
+ (id)previewLayoutFor2x4SuggestionWidget;	// IMP=0x0000000000103802
+ (id)previewLayoutFor2x2SuggestionWidget;	// IMP=0x00000000001036fd

@end
