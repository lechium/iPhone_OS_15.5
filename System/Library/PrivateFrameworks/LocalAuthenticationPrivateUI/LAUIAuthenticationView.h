//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <LocalAuthenticationPrivateUI/LAUIAuthentication-Protocol.h>
#import <LocalAuthenticationPrivateUI/LAUIAuthenticationCoreDelegate-Protocol.h>

@class LAPKGlyphWrapper, LAUIAuthenticationCore, NSString;
@protocol LAUIAuthenticationDelegate;

@interface LAUIAuthenticationView : UIView <LAUIAuthenticationCoreDelegate, LAUIAuthentication>
{
    _Bool _idleWhenDone;	// 8 = 0x8
    _Bool _fastAnimations;	// 9 = 0x9
    id <LAUIAuthenticationDelegate> _delegate;	// 16 = 0x10
    long long _glyphStyle;	// 24 = 0x18
    long long _style;	// 32 = 0x20
    LAUIAuthenticationCore *_authenticationCore;	// 40 = 0x28
    LAPKGlyphWrapper *_glyphWrapper;	// 48 = 0x30
}

+ (struct CGRect)defaultRect;	// IMP=0x0000000000005940
- (void).cxx_destruct;	// IMP=0x0000000000006508
@property(readonly, nonatomic) LAPKGlyphWrapper *glyphWrapper; // @synthesize glyphWrapper=_glyphWrapper;
@property(readonly, nonatomic) LAUIAuthenticationCore *authenticationCore; // @synthesize authenticationCore=_authenticationCore;
@property(nonatomic) _Bool fastAnimations; // @synthesize fastAnimations=_fastAnimations;
@property(nonatomic) _Bool idleWhenDone; // @synthesize idleWhenDone=_idleWhenDone;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) long long glyphStyle; // @synthesize glyphStyle=_glyphStyle;
@property(nonatomic) __weak id <LAUIAuthenticationDelegate> delegate; // @synthesize delegate=_delegate;
- (id)localizedCallerName;	// IMP=0x000000000000634a
- (id)callerIconBundlePath;	// IMP=0x00000000000062a6
- (void)biometricNoMatch;	// IMP=0x0000000000006186
- (void)authenticationResult:(id)arg1 error:(id)arg2 context:(id)arg3;	// IMP=0x0000000000005fe5
- (void)biometryState:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005c18
- (void)notification:(long long)arg1 original:(id)arg2 mechanism:(unsigned long long)arg3;	// IMP=0x0000000000005c12
- (void)tappedFaceID:(id)arg1;	// IMP=0x0000000000005bf9
- (void)_setupView;	// IMP=0x00000000000059ed
- (void)didMoveToWindow;	// IMP=0x00000000000059b0
- (void)didMoveToSuperview;	// IMP=0x0000000000005973
- (void)willMoveToSuperview:(id)arg1;	// IMP=0x000000000000595a
- (_Bool)disableMechanism:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000000058e8
- (_Bool)enableMechanism:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000000005890
- (_Bool)isMechanismActive:(unsigned long long)arg1;	// IMP=0x000000000000583d
- (_Bool)isMechanismEnabled:(unsigned long long)arg1;	// IMP=0x00000000000057ea
- (_Bool)isMechanismAvailable:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000000005792
- (void)_setupMechanisms:(unsigned long long)arg1;	// IMP=0x000000000000571c
- (id)initWithFrame:(struct CGRect)arg1 mechanisms:(unsigned long long)arg2;	// IMP=0x00000000000056b5
- (id)initWithMechanisms:(unsigned long long)arg1;	// IMP=0x000000000000565a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000560c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000055f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
