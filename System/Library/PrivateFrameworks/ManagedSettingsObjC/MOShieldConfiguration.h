//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ManagedSettingsObjC/NSSecureCoding-Protocol.h>

@class MOShieldLabel, NSData;

@interface MOShieldConfiguration : NSObject <NSSecureCoding>
{
    NSData *_backgroundColorData;	// 8 = 0x8
    NSData *_backgroundEffectData;	// 16 = 0x10
    NSData *_iconData;	// 24 = 0x18
    MOShieldLabel *_title;	// 32 = 0x20
    MOShieldLabel *_subtitle;	// 40 = 0x28
    MOShieldLabel *_primaryButtonLabel;	// 48 = 0x30
    NSData *_primaryButtonColorData;	// 56 = 0x38
    MOShieldLabel *_secondaryButtonLabel;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000557b
- (void).cxx_destruct;	// IMP=0x0000000000005623
@property(readonly) MOShieldLabel *secondaryButtonLabel; // @synthesize secondaryButtonLabel=_secondaryButtonLabel;
@property(readonly, copy) NSData *primaryButtonColorData; // @synthesize primaryButtonColorData=_primaryButtonColorData;
@property(readonly) MOShieldLabel *primaryButtonLabel; // @synthesize primaryButtonLabel=_primaryButtonLabel;
@property(readonly) MOShieldLabel *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly) MOShieldLabel *title; // @synthesize title=_title;
@property(readonly, copy) NSData *iconData; // @synthesize iconData=_iconData;
@property(readonly, copy) NSData *backgroundEffectData; // @synthesize backgroundEffectData=_backgroundEffectData;
@property(readonly, copy) NSData *backgroundColorData; // @synthesize backgroundColorData=_backgroundColorData;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000005496
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000527c
- (id)initWithBackgroundColorData:(id)arg1 backgroundEffectData:(id)arg2 iconData:(id)arg3 title:(id)arg4 subtitle:(id)arg5 primaryButtonLabel:(id)arg6 primaryButtonColorData:(id)arg7 secondaryButtonLabel:(id)arg8;	// IMP=0x00000000000050b4

@end

