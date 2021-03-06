//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXDarkModePolicyHandler-Protocol.h>

@class NSMutableArray, NSString;
@protocol SXDarkModeConfiguration, SXDocumentProviding;

@interface SXDarkModePolicyHandler : NSObject <SXDarkModePolicyHandler>
{
    id <SXDarkModeConfiguration> _darkModeConfiguration;	// 8 = 0x8
    id <SXDocumentProviding> _documentProvider;	// 16 = 0x10
    NSMutableArray *_exceptions;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000ea9db
@property(readonly, nonatomic) NSMutableArray *exceptions; // @synthesize exceptions=_exceptions;
@property(readonly, nonatomic) id <SXDocumentProviding> documentProvider; // @synthesize documentProvider=_documentProvider;
@property(readonly, nonatomic) id <SXDarkModeConfiguration> darkModeConfiguration; // @synthesize darkModeConfiguration=_darkModeConfiguration;
- (_Bool)shouldApplyDarkModeToForegroundColorsOfTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3;	// IMP=0x00000000000ea732
- (_Bool)shouldApplyDarkModeToForegroundColorsOfComponentTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3;	// IMP=0x00000000000ea4a7
- (_Bool)shouldApplyDarkModeToTextStyleForegroundColorsForComponent:(id)arg1 DOM:(id)arg2;	// IMP=0x00000000000ea30c
- (_Bool)shouldApplyDarkModeToBackgroundColorsOfTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3;	// IMP=0x00000000000ea081
- (_Bool)shouldApplyDarkModeToBackgroundColorsOfComponentTextStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3;	// IMP=0x00000000000e9df6
- (_Bool)shouldApplyDarkModeToTextStyleBackgroundColorsForComponent:(id)arg1 DOM:(id)arg2;	// IMP=0x00000000000e9c5b
- (_Bool)shouldApplyDarkModeToComponentStyle:(id)arg1 component:(id)arg2 DOM:(id)arg3;	// IMP=0x00000000000e99d0
- (_Bool)shouldApplyDarkModeToComponentStylesForComponent:(id)arg1 DOM:(id)arg2;	// IMP=0x00000000000e9835
- (_Bool)shouldApplyDarkModeToComponent:(id)arg1 DOM:(id)arg2;	// IMP=0x00000000000e95c8
- (_Bool)shouldApplyDarkModeToDocumentStyle:(id)arg1 DOM:(id)arg2;	// IMP=0x00000000000e938f
- (_Bool)shouldApplyDarkModeToDOM:(id)arg1 layoutOptions:(id)arg2;	// IMP=0x00000000000e9137
- (void)addPolicyException:(id)arg1;	// IMP=0x00000000000e911a
- (id)initWithDocumentProvider:(id)arg1 darkModeConfiguration:(id)arg2;	// IMP=0x00000000000e9057

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

