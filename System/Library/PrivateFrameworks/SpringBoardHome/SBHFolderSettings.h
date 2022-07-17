//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

@interface SBHFolderSettings : PTSettings
{
    _Bool _allowNestedFolders;	// 8 = 0x8
    _Bool _pinchToClose;	// 9 = 0x9
    _Bool _animatesPageScrubbing;	// 10 = 0xa
    double _minPinchScale;	// 16 = 0x10
}

+ (id)settingsControllerModule;	// IMP=0x000000000021566d
@property(nonatomic) _Bool animatesPageScrubbing; // @synthesize animatesPageScrubbing=_animatesPageScrubbing;
@property(nonatomic) double minPinchScale; // @synthesize minPinchScale=_minPinchScale;
@property(nonatomic) _Bool pinchToClose; // @synthesize pinchToClose=_pinchToClose;
@property(nonatomic) _Bool allowNestedFolders; // @synthesize allowNestedFolders=_allowNestedFolders;
- (void)setDefaultValues;	// IMP=0x00000000002155ef

@end
