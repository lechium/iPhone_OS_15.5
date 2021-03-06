//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, _UIScreenEdgePanRecognizerCornerSettings, _UIScreenEdgePanRecognizerDwellSettings, _UIScreenEdgePanRecognizerEdgeSettings;

__attribute__((visibility("hidden")))
@interface _UIScreenEdgePanRecognizerSettings
{
    NSString *_multitaskingGestureMode;	// 8 = 0x8
    NSString *_navigationGestureMode;	// 16 = 0x10
    _UIScreenEdgePanRecognizerEdgeSettings *_edgeSettings;	// 24 = 0x18
    _UIScreenEdgePanRecognizerDwellSettings *_dwellSettings;	// 32 = 0x20
    _UIScreenEdgePanRecognizerCornerSettings *_cornerSettings;	// 40 = 0x28
}

+ (id)settingsControllerModule;	// IMP=0x00000000007ce44c
- (void).cxx_destruct;	// IMP=0x00000000007ce6a7
@property(retain, nonatomic) _UIScreenEdgePanRecognizerCornerSettings *cornerSettings; // @synthesize cornerSettings=_cornerSettings;
@property(retain, nonatomic) _UIScreenEdgePanRecognizerDwellSettings *dwellSettings; // @synthesize dwellSettings=_dwellSettings;
@property(retain, nonatomic) _UIScreenEdgePanRecognizerEdgeSettings *edgeSettings; // @synthesize edgeSettings=_edgeSettings;
@property(copy, nonatomic) NSString *navigationGestureMode; // @synthesize navigationGestureMode=_navigationGestureMode;
@property(copy, nonatomic) NSString *multitaskingGestureMode; // @synthesize multitaskingGestureMode=_multitaskingGestureMode;

@end

