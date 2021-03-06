//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTCoreModelPicker-Protocol.h>

@class AVTCoreModelPairing, AVTCoreModelPickerOptions, NSArray, NSString;

@interface AVTCoreModelColorsPicker : NSObject <AVTCoreModelPicker>
{
    _Bool _alwaysShowExtended;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    AVTCoreModelPickerOptions *_options;	// 32 = 0x20
    AVTCoreModelPairing *_pairing;	// 40 = 0x28
    NSArray *_primaryColors;	// 48 = 0x30
    NSArray *_extendedColors;	// 56 = 0x38
    long long _destination;	// 64 = 0x40
    long long _colorCategory;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000aaeb9
@property(readonly, nonatomic) long long colorCategory; // @synthesize colorCategory=_colorCategory;
@property(readonly, nonatomic) _Bool alwaysShowExtended; // @synthesize alwaysShowExtended=_alwaysShowExtended;
@property(readonly, nonatomic) long long destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) NSArray *extendedColors; // @synthesize extendedColors=_extendedColors;
@property(readonly, nonatomic) NSArray *primaryColors; // @synthesize primaryColors=_primaryColors;
@property(readonly, copy, nonatomic) AVTCoreModelPairing *pairing; // @synthesize pairing=_pairing;
@property(readonly, nonatomic) AVTCoreModelPickerOptions *options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)isEmpty;	// IMP=0x00000000000aadd0
@property(readonly, copy) NSString *description;
- (id)initWithTitle:(id)arg1 primaryColors:(id)arg2 extendedColors:(id)arg3 identifier:(id)arg4 alwaysShowExtended:(_Bool)arg5 colorCategory:(long long)arg6 destination:(long long)arg7 pairing:(id)arg8 options:(id)arg9;	// IMP=0x00000000000aa9a4
- (id)initWithTitle:(id)arg1 primaryColors:(id)arg2 extendedColors:(id)arg3 alwaysShowExtended:(_Bool)arg4 colorCategory:(long long)arg5 destination:(long long)arg6 pairing:(id)arg7 options:(id)arg8;	// IMP=0x00000000000aa87e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

