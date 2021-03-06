//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMassFormatter;

@interface HKPersonWeightFormatter : NSObject
{
    NSMassFormatter *_massFormatter;	// 8 = 0x8
    long long _localWeightUnit;	// 16 = 0x10
}

+ (id)sharedFormatter;	// IMP=0x00000000001c38a7
- (void).cxx_destruct;	// IMP=0x00000000001c3c29
@property(readonly, nonatomic) long long localWeightUnit; // @synthesize localWeightUnit=_localWeightUnit;
- (id)stringFromWeightValue:(double)arg1 inUnit:(long long)arg2;	// IMP=0x00000000001c3c09
- (id)stringFromWeightInKilograms:(id)arg1;	// IMP=0x00000000001c3bbd
- (void)_updateRoundingIncrement;	// IMP=0x00000000001c3adb
- (void)_localeChanged:(id)arg1;	// IMP=0x00000000001c3aad
- (void)dealloc;	// IMP=0x00000000001c3a2b
- (void)_commonInit;	// IMP=0x00000000001c399d
- (id)init;	// IMP=0x00000000001c38fc

@end

