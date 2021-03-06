//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKitCompanion/NTKPigmentEditOptionConvertible-Protocol.h>

@class NSString;

@interface NTKSalmonColorEditOption <NTKPigmentEditOptionConvertible>
{
}

+ (id)domain;	// IMP=0x00000000001a6934
+ (id)_orderedValuesForDevice:(id)arg1;	// IMP=0x00000000001a6504
+ (id)curatedColorValuesForDevice:(id)arg1;	// IMP=0x00000000001a64a0
+ (id)optionWithColor:(unsigned long long)arg1 forDevice:(id)arg2;	// IMP=0x00000000001a647c
- (id)pigmentEditOption;	// IMP=0x00000000001a6696
- (id)localizedName;	// IMP=0x00000000001a64b4
@property(readonly, nonatomic) unsigned long long color;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

