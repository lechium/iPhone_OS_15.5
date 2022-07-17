//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTCoreModelPicker-Protocol.h>

@class AVTCoreModelPairing, AVTCoreModelPickerOptions, NSOrderedSet, NSString;

@interface AVTCoreModelPresetsPicker : NSObject <AVTCoreModelPicker>
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    AVTCoreModelPickerOptions *_options;	// 24 = 0x18
    AVTCoreModelPairing *_pairing;	// 32 = 0x20
    NSOrderedSet *_representedTags;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000006dba4
@property(readonly, copy, nonatomic) NSOrderedSet *representedTags; // @synthesize representedTags=_representedTags;
@property(readonly, copy, nonatomic) AVTCoreModelPairing *pairing; // @synthesize pairing=_pairing;
@property(readonly, nonatomic) AVTCoreModelPickerOptions *options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *description;
- (id)initWithTitle:(id)arg1 representedTags:(id)arg2 pairing:(id)arg3 options:(id)arg4 identifier:(id)arg5;	// IMP=0x000000000006d90b
- (id)initWithTitle:(id)arg1 representedTags:(id)arg2 pairing:(id)arg3 options:(id)arg4;	// IMP=0x000000000006d814

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
