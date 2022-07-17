//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOLocationShifter;

@interface _MKLocationShifter : NSObject
{
    GEOLocationShifter *_locationShifter;	// 8 = 0x8
}

+ (_Bool)isLocationShiftRequiredForLocation:(id)arg1;	// IMP=0x0000000000126ece
- (void).cxx_destruct;	// IMP=0x0000000000127550
- (void)_prepareShiftForLocation:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2 withShiftRequestBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000127279
- (void)shiftLocation:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2 callbackQueue:(id)arg3;	// IMP=0x000000000012709b
- (void)shiftLocation:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000126f56
@property(readonly, nonatomic, getter=isLocationShiftEnabled) _Bool locationShiftEnabled;
- (id)init;	// IMP=0x0000000000126e78

@end
