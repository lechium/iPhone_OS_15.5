//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXFontFamilyProvider-Protocol.h>

@class NSArray, NSString;

@interface SXDocumentFontFamilyProvider : NSObject <SXFontFamilyProvider>
{
    NSArray *_fonts;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000042dc6
@property(readonly, nonatomic) NSArray *fonts; // @synthesize fonts=_fonts;
- (id)fontsFromDocument:(id)arg1;	// IMP=0x00000000000425a9
- (id)fontFamilies;	// IMP=0x0000000000042597
- (id)initWithDocument:(id)arg1;	// IMP=0x0000000000042519

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
