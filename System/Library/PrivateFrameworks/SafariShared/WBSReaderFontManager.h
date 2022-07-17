//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WBSReaderFontManager : NSObject
{
    NSArray *_validatedFonts;	// 8 = 0x8
    NSString *_languageTag;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000154563
@property(readonly, copy) NSString *languageTag; // @synthesize languageTag=_languageTag;
- (void)_fontDownloadDidFinish:(id)arg1;	// IMP=0x0000000000154535
- (void)updateLanguageTag:(id)arg1;	// IMP=0x00000000001544bc
- (id)fontWithFontFamilyName:(id)arg1;	// IMP=0x0000000000154292
- (id)defaultFontForLanguageTag:(id)arg1;	// IMP=0x0000000000154218
@property(readonly) NSArray *possibleFonts;
@property(readonly) NSArray *fonts;
- (id)init;	// IMP=0x000000000015402d

@end
