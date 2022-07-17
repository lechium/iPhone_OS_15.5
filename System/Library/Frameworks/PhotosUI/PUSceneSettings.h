//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXSettings.h>

__attribute__((visibility("hidden")))
@interface PUSceneSettings : PXSettings
{
    _Bool _showConfidenceOverlay;	// 8 = 0x8
    unsigned long long _inspectorSortOrder;	// 16 = 0x10
}

+ (id)settingsControllerModule;	// IMP=0x00000000003c46ae
+ (id)sharedInstance;	// IMP=0x00000000003c467e
@property(nonatomic) unsigned long long inspectorSortOrder; // @synthesize inspectorSortOrder=_inspectorSortOrder;
@property(nonatomic) _Bool showConfidenceOverlay; // @synthesize showConfidenceOverlay=_showConfidenceOverlay;
- (void)setDefaultValues;	// IMP=0x00000000003c45df
- (id)parentSettings;	// IMP=0x00000000003c45c6

@end
