//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaControls/NSObject-Protocol.h>

@class MRUSpatialAudioPreferencesController;

@protocol MRUSpatialAudioPreferencesControllerDelegate <NSObject>
- (void)spatialAudioPreferencesControllerDidChangePreferences:(MRUSpatialAudioPreferencesController *)arg1;
- (void)spatialAudioPreferencesController:(MRUSpatialAudioPreferencesController *)arg1 didChangeHeadTrackingSupported:(_Bool)arg2;
- (void)spatialAudioPreferencesController:(MRUSpatialAudioPreferencesController *)arg1 didSpatialAudioSupported:(_Bool)arg2;
@end
