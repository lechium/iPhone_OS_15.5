//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

@interface SBHRootFolderSettings : PTSettings
{
    _Bool _adjustableLayoutEnabled;	// 8 = 0x8
    double _portraitTopLayoutInset;	// 16 = 0x10
    double _portraitBottomLayoutInset;	// 24 = 0x18
    double _portraitSideLayoutInset;	// 32 = 0x20
    double _landscapeTopLayoutInset;	// 40 = 0x28
    double _landscapeBottomLayoutInset;	// 48 = 0x30
    double _landscapeSideLayoutInset;	// 56 = 0x38
}

+ (id)settingsControllerModule;	// IMP=0x00000000000dd63e
@property(nonatomic) double landscapeSideLayoutInset; // @synthesize landscapeSideLayoutInset=_landscapeSideLayoutInset;
@property(nonatomic) double landscapeBottomLayoutInset; // @synthesize landscapeBottomLayoutInset=_landscapeBottomLayoutInset;
@property(nonatomic) double landscapeTopLayoutInset; // @synthesize landscapeTopLayoutInset=_landscapeTopLayoutInset;
@property(nonatomic) double portraitSideLayoutInset; // @synthesize portraitSideLayoutInset=_portraitSideLayoutInset;
@property(nonatomic) double portraitBottomLayoutInset; // @synthesize portraitBottomLayoutInset=_portraitBottomLayoutInset;
@property(nonatomic) double portraitTopLayoutInset; // @synthesize portraitTopLayoutInset=_portraitTopLayoutInset;
@property(nonatomic, getter=isAdjustableLayoutEnabled) _Bool adjustableLayoutEnabled; // @synthesize adjustableLayoutEnabled=_adjustableLayoutEnabled;
- (void)setDefaultValues;	// IMP=0x00000000000dd593

@end
