//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GCController, NSMutableSet, NSString;

@interface GCControllerElement : NSObject
{
    _Bool _updatePending;	// 8 = 0x8
    _Bool _boundToSystemGesture;	// 9 = 0x9
    _Bool _remappable;	// 10 = 0xa
    _Bool _mappableToSystemGestures;	// 11 = 0xb
    float _pendingValue;	// 12 = 0xc
    float _deadzone;	// 16 = 0x10
    int _remappingKey;	// 20 = 0x14
    GCControllerElement *_collection;	// 24 = 0x18
    GCController *_controller;	// 32 = 0x20
    NSString *_primaryAlias;	// 40 = 0x28
    long long _preferredSystemGestureState;	// 48 = 0x30
    NSString *_sfSymbolsName;	// 56 = 0x38
    NSString *_localizedName;	// 64 = 0x40
    NSString *_unmappedSfSymbolsName;	// 72 = 0x48
    NSString *_unmappedLocalizedName;	// 80 = 0x50
    NSMutableSet *_aliases;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000a55b6
@property(nonatomic) _Bool mappableToSystemGestures; // @synthesize mappableToSystemGestures=_mappableToSystemGestures;
@property(nonatomic) int remappingKey; // @synthesize remappingKey=_remappingKey;
@property(nonatomic) _Bool remappable; // @synthesize remappable=_remappable;
@property(retain, nonatomic) NSMutableSet *aliases; // @synthesize aliases=_aliases;
@property(retain, nonatomic) NSString *unmappedLocalizedName; // @synthesize unmappedLocalizedName=_unmappedLocalizedName;
@property(retain, nonatomic) NSString *unmappedSfSymbolsName; // @synthesize unmappedSfSymbolsName=_unmappedSfSymbolsName;
@property(retain, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(retain, nonatomic) NSString *sfSymbolsName; // @synthesize sfSymbolsName=_sfSymbolsName;
@property(nonatomic) long long preferredSystemGestureState; // @synthesize preferredSystemGestureState=_preferredSystemGestureState;
@property(nonatomic, getter=isBoundToSystemGesture) _Bool boundToSystemGesture; // @synthesize boundToSystemGesture=_boundToSystemGesture;
@property(nonatomic) float deadzone; // @synthesize deadzone=_deadzone;
@property float pendingValue; // @synthesize pendingValue=_pendingValue;
@property _Bool updatePending; // @synthesize updatePending=_updatePending;
@property(nonatomic) __weak GCController *controller; // @synthesize controller=_controller;
@property(nonatomic) __weak GCControllerElement *collection; // @synthesize collection=_collection;
- (unsigned long long)hash;	// IMP=0x00000000000a539b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a5355
@property(retain, nonatomic) NSString *primaryAlias; // @synthesize primaryAlias=_primaryAlias;
- (_Bool)_setValue:(float)arg1 queue:(id)arg2;	// IMP=0x00000000000a5296
- (_Bool)_setValue:(float)arg1;	// IMP=0x00000000000a5254
- (_Bool)_commitPendingValueOnQueue:(id)arg1;	// IMP=0x00000000000a51ba
- (void)_resetPendingValue;	// IMP=0x00000000000a51a9
- (void)_setPendingValue:(float)arg1;	// IMP=0x00000000000a5173
- (_Bool)_setPendingValueIfChanged:(float)arg1;	// IMP=0x00000000000a5112
@property(readonly, nonatomic, getter=isAnalog) _Bool analog;
- (float)value;	// IMP=0x00000000000a50da
- (int)getAndResetTimesPressed;	// IMP=0x00000000000a50d2
- (id)init;	// IMP=0x00000000000a4fb3

@end
