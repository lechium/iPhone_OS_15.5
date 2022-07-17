//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Preferences/PSSettingsDetail-Protocol.h>

@class NSString;

@interface PSBrightnessSettingsDetail : NSObject <PSSettingsDetail>
{
}

+ (_Bool)autoBrightnessEnabled;	// IMP=0x00000000000bc4f8
+ (void)setAutoBrightnessEnabled:(_Bool)arg1;	// IMP=0x00000000000bc4b5
+ (_Bool)deviceSupportsAutoBrightness;	// IMP=0x00000000000bc4a4
+ (void)endObservingExternalBrightnessChanges;	// IMP=0x00000000000bc433
+ (void)beginObservingExternalBrightnessChanges:(CDUnknownBlockType)arg1 changedAction:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bc2da
+ (void)endBrightnessAdjustmentTransaction;	// IMP=0x00000000000bc2b8
+ (void)beginBrightnessAdjustmentTransaction;	// IMP=0x00000000000bc205
+ (void)setValue:(double)arg1;	// IMP=0x00000000000bc1d1
+ (void)incrementBrightnessValue:(double)arg1;	// IMP=0x00000000000bc0ea
+ (double)incrementedBrightnessValue:(double)arg1;	// IMP=0x00000000000bc0b6
+ (double)currentValue;	// IMP=0x00000000000bc00f
+ (id)iconImage;	// IMP=0x00000000000bbfae
+ (id)preferencesURL;	// IMP=0x00000000000bbf8e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
