//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AVTAvatarColorVariationStore : NSObject
{
    NSMutableDictionary *_colorPresets;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000a16e9
@property(readonly, nonatomic) NSMutableDictionary *colorPresets; // @synthesize colorPresets=_colorPresets;
- (void)resetValues;	// IMP=0x00000000000a16a2
- (id)keyForColor:(id)arg1;	// IMP=0x00000000000a15e1
- (void)saveColorPreset:(id)arg1 forColor:(id)arg2;	// IMP=0x00000000000a1532
- (id)colorPresetFromColor:(id)arg1;	// IMP=0x00000000000a1460
- (id)colorVariationFromColor:(id)arg1;	// IMP=0x00000000000a13dc
- (id)init;	// IMP=0x00000000000a1376

@end
