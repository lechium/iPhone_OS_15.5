//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

@class SBEntityRemovalDosidoDefaultAnimationSettings, SBEntityRemovalDosidoSlideOutDownwardAnimationSettings, SBEntityRemovalDosidoSlideOutUpwardAnimationSettings, SBEntityRemovalFloatingDefaultAnimationSettings, SBEntityRemovalFloatingSlideOutDownwardAnimationSettings, SBEntityRemovalFloatingSlideOutUpwardAnimationSettings, SBEntityRemovalMedusaDefaultAnimationSettings, SBEntityRemovalMedusaSlideOutDownwardAnimationSettings, SBEntityRemovalMedusaSlideOutUpwardAnimationSettings;

@interface SBEntityRemovalAnimationSettings : PTSettings
{
    SBEntityRemovalMedusaDefaultAnimationSettings *_medusaDeleteIntentAnimationSettings;	// 8 = 0x8
    SBEntityRemovalMedusaSlideOutUpwardAnimationSettings *_medusaCommitIntentAnimationSettings;	// 16 = 0x10
    SBEntityRemovalMedusaSlideOutDownwardAnimationSettings *_medusaDeclineIntentAnimationSettings;	// 24 = 0x18
    SBEntityRemovalFloatingDefaultAnimationSettings *_floatingDeleteIntentAnimationSettings;	// 32 = 0x20
    SBEntityRemovalFloatingSlideOutUpwardAnimationSettings *_floatingCommitIntentAnimationSettings;	// 40 = 0x28
    SBEntityRemovalFloatingSlideOutDownwardAnimationSettings *_floatingDeclineIntentAnimationSettings;	// 48 = 0x30
    SBEntityRemovalDosidoDefaultAnimationSettings *_dosidoDeleteIntentAnimationSettings;	// 56 = 0x38
    SBEntityRemovalDosidoSlideOutUpwardAnimationSettings *_dosidoCommitIntentAnimationSettings;	// 64 = 0x40
    SBEntityRemovalDosidoSlideOutDownwardAnimationSettings *_dosidoDeclineIntentAnimationSettings;	// 72 = 0x48
}

+ (id)settingsControllerModule;	// IMP=0x000000000026e879
- (void).cxx_destruct;	// IMP=0x000000000026ecd8
@property(retain, nonatomic) SBEntityRemovalDosidoSlideOutDownwardAnimationSettings *dosidoDeclineIntentAnimationSettings; // @synthesize dosidoDeclineIntentAnimationSettings=_dosidoDeclineIntentAnimationSettings;
@property(retain, nonatomic) SBEntityRemovalDosidoSlideOutUpwardAnimationSettings *dosidoCommitIntentAnimationSettings; // @synthesize dosidoCommitIntentAnimationSettings=_dosidoCommitIntentAnimationSettings;
@property(retain, nonatomic) SBEntityRemovalDosidoDefaultAnimationSettings *dosidoDeleteIntentAnimationSettings; // @synthesize dosidoDeleteIntentAnimationSettings=_dosidoDeleteIntentAnimationSettings;
@property(retain, nonatomic) SBEntityRemovalFloatingSlideOutDownwardAnimationSettings *floatingDeclineIntentAnimationSettings; // @synthesize floatingDeclineIntentAnimationSettings=_floatingDeclineIntentAnimationSettings;
@property(retain, nonatomic) SBEntityRemovalFloatingSlideOutUpwardAnimationSettings *floatingCommitIntentAnimationSettings; // @synthesize floatingCommitIntentAnimationSettings=_floatingCommitIntentAnimationSettings;
@property(retain, nonatomic) SBEntityRemovalFloatingDefaultAnimationSettings *floatingDeleteIntentAnimationSettings; // @synthesize floatingDeleteIntentAnimationSettings=_floatingDeleteIntentAnimationSettings;
@property(retain, nonatomic) SBEntityRemovalMedusaSlideOutDownwardAnimationSettings *medusaDeclineIntentAnimationSettings; // @synthesize medusaDeclineIntentAnimationSettings=_medusaDeclineIntentAnimationSettings;
@property(retain, nonatomic) SBEntityRemovalMedusaSlideOutUpwardAnimationSettings *medusaCommitIntentAnimationSettings; // @synthesize medusaCommitIntentAnimationSettings=_medusaCommitIntentAnimationSettings;
@property(retain, nonatomic) SBEntityRemovalMedusaDefaultAnimationSettings *medusaDeleteIntentAnimationSettings; // @synthesize medusaDeleteIntentAnimationSettings=_medusaDeleteIntentAnimationSettings;

@end
