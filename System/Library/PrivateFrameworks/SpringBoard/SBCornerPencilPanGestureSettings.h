//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

@interface SBCornerPencilPanGestureSettings : PTSettings
{
    double _cornerHorizontalEdgeLength;	// 8 = 0x8
    double _cornerVerticalEdgeLength;	// 16 = 0x10
}

+ (_Bool)ignoresKey:(id)arg1;	// IMP=0x000000000025c7c2
+ (id)settingsControllerModule;	// IMP=0x000000000025c5f1
@property(nonatomic) double cornerVerticalEdgeLength; // @synthesize cornerVerticalEdgeLength=_cornerVerticalEdgeLength;
@property(nonatomic) double cornerHorizontalEdgeLength; // @synthesize cornerHorizontalEdgeLength=_cornerHorizontalEdgeLength;
- (void)setDefaultValues;	// IMP=0x000000000025c58b

@end
