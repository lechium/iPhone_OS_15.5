//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObservable-Protocol.h>
#import <Foundation/NSObserver-Protocol.h>

@class NSNumberFormatter, NSString;

@interface NSEnergyFormatter <NSObservable, NSObserver>
{
    void *_formatter;	// 8 = 0x8
    _Bool _isForFoodEnergyUse;	// 16 = 0x10
    void *_reserved[2];	// 24 = 0x18
}

@property(getter=isForFoodEnergyUse) _Bool forFoodEnergyUse; // @synthesize forFoodEnergyUse=_isForFoodEnergyUse;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000022fe74
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000022fd86
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000022fc79
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;	// IMP=0x000000000022fbf6
- (id)stringForObjectValue:(id)arg1;	// IMP=0x000000000022fb9b
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;	// IMP=0x000000000022fb93
- (id)stringFromJoules:(double)arg1;	// IMP=0x000000000022fb05
- (id)stringFromValue:(double)arg1 unit:(long long)arg2;	// IMP=0x000000000022fa51
- (id)unitStringFromJoules:(double)arg1 usedUnit:(long long *)arg2;	// IMP=0x000000000022f9b1
- (id)unitStringFromValue:(double)arg1 unit:(long long)arg2;	// IMP=0x000000000022f8fd
@property long long unitStyle;
@property(copy) NSNumberFormatter *numberFormatter;
- (void)dealloc;	// IMP=0x000000000022f824
- (id)init;	// IMP=0x000000000022f7ae
- (long long)targetUnitFromJoules:(double)arg1;	// IMP=0x000000000022f668
- (void)receiveObservedValue:(id)arg1;	// IMP=0x00000000002136f5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

